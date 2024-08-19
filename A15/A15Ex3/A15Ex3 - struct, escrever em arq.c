#include <stdio.h>

struct aluno{
	char nome[30];
	float nota1;
	float nota2;
	float media;
	
	
};




struct aluno a[3];
int main(){
	
	FILE *arq;
	int x=0;
	
	
	for(x=0;x<3;x++){
	
	fgets(a[x].nome, 30,stdin);
	setbuf(stdin, NULL);
	
	scanf("%f", &a[x].nota1);
	setbuf(stdin, NULL);
	
	scanf("%f", &a[x].nota2);
	setbuf(stdin, NULL);
	
	a[x].media=(a[x].nota1+a[x].nota2)/2;
	
//	printf("%s%f\n%f\n%f\n", a[x].nome, a[x].nota1, a[x].nota2, a[x].media);
	
	if((arq=fopen("test.txt", "r+"))==NULL){
			printf("\nErro abrindo arquivo.\n");
	};
	fseek(arq, 0, SEEK_END);
	fprintf(arq, "%s", a[x].nome);
	fprintf(arq, "%f", a[x].nota1);
	fprintf(arq, "\n");
	fprintf(arq, "%f", a[x].nota2);
	fprintf(arq, "\n");
	fprintf(arq, "%f", a[x].media);
	fprintf(arq, "\n");
	
	fclose(arq);
	
	};

	
	
	
	
	
	
}






