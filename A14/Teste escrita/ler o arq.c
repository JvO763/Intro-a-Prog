#include <stdio.h>
void main (){
	
	FILE *arq;
	int i;
	char  n;

		if((arq=fopen("test.txt", "r+"))==NULL)
			printf("\nErro abrindo arquivo.\n");
			
		for(i=0; i<5; i++) {
			fscanf(arq, "%c", &n);
			printf("%c\n", n);
		}
	fclose(arq);
	system("PAUSE");
} 
