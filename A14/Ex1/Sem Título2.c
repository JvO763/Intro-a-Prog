#include <stdio.h>
void main (){

	FILE *arq;
	char s[100], g[100];
	char n;
	int i;
	i=0;
	
		if((arq=fopen("test.txt", "w+"))==NULL){
			printf("\nErro abrindo arquivo.\n");
	}
	
	gets(s);
	fprintf(arq, "%s", s);
		
		fseek(arq, 0, SEEK_SET);
	//	for(i=0; i<100; i++){
	//		fscanf(arq, "%c", &n);
	//		printf("%c", n);
	//	};
	fgets(g, 100, arq);
	printf("%s", g);
	printf("\n");
	
	fclose(arq);
	
	system("PAUSE");
	
	
	
	
}
