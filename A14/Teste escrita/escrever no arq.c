#include <stdio.h>
void main (){
	
	FILE *arq;
	int i;
	char n;
	
		if((arq=fopen("test.txt", "r+"))==NULL)
			printf("\nErro abrindo arquivo.\n");
			
		for(i=0; i<5; i++) {
			scanf("%c", &n);
			fprintf(arq, "%c", n);
		}
		
	fclose(arq);
	system("PAUSE");
} 
