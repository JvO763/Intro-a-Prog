#include <stdio.h>
void main(){
	FILE *op, *clos;
	char s[100], destino[30], origem[30];
	
	printf("Arquivo de origem: ");
	scanf("%s", origem);
	printf("Arquivo de destino: ");
	scanf("%s", destino);
	
	if((op=fopen(origem,"r+"))==NULL){
		printf("\nErro abrindo arquivo.\n");	
	};
	if((clos=fopen(destino,"r+"))==NULL){
		printf("\nErro abrindo arquivo.\n");	
	};
	
	fgets(s, 100, op);
	
	fprintf(clos, "%s", s);
	
	fclose(op);
	fclose(clos);
	
	
	
	
}
