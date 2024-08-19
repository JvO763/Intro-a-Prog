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
	float notas1[3], notas2[3], medias[3], notas11[3], notas21[3], medias1[3];
	
	for(x=0;x<3;x++){
	
	fgets(a[x].nome, 30,stdin);
	setbuf(stdin, NULL);
	
	scanf("%f", &a[x].nota1);
	setbuf(stdin, NULL);
	
	scanf("%f", &a[x].nota2);
	setbuf(stdin, NULL);
	
	a[x].media=(a[x].nota1+a[x].nota2)/2;
	
	printf("%s%f\n%f\n%f\n", a[x].nome, a[x].nota1, a[x].nota2, a[x].media);
	
	notas1[x]=a[x].nota1;
	notas2[x]=a[x].nota2;
	medias[x]=a[x].media;
	
	if((arq=fopen("test.bin", "rb"))==NULL){
			printf("\nErro abrindo arquivo.\n");
	};
	
	fseek(arq, 0, SEEK_END);
	fwrite(a[x].nome, sizeof(char),30,arq);
	fwrite(notas1, sizeof(float),x,arq);

	fwrite(notas2, sizeof(float),x,arq);

	fwrite(medias, sizeof(float),x,arq);


	fclose(arq);
	
	};

	
	
	
	
	
	
}






