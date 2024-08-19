#include <stdio.h>

struct aluno{
	char nome[30];
	char nota1[30];
	char nota2[30];
	char media[30];
	
	
};




struct aluno a[3];
int main(){
	
	FILE *arq;
	int x=0, j=0;
	float y[5], s[3], t;
	char *pn[3];
	float *p1[3], *p2[3], *pm[3];
	if((arq=fopen("test.bin", "r+"))==NULL){
			printf("\nErro abrindo arquivo.\n");
		};
		fseek(arq, 0, SEEK_SET);
		
	
	for(x=0;x<3;x++){
	
		
	pn[x]=&a[x].nome;
	p1[x]=&a[x].nota1;
	p2[x]=&a[x].nota2;
	pm[x]=&a[x].media;
		
	setbuf(stdin, NULL);
	fread(pn[x],sizeof(char),1,arq);
	setbuf(stdin, NULL);
//	printf("pn%d", x);
	fread(p1[x],sizeof(float),1,arq);
	setbuf(stdin, NULL);
//	printf("p1%d", x);
	fread(p2[x],sizeof(float),1,arq);
	setbuf(stdin, NULL);
//	printf("p2%d", x);
	fread(pm[x],sizeof(float),1,arq);
	setbuf(stdin, NULL);
//	printf("pm%d", x);	
		
	printf("\n%s%s%s%s%s%f%f%f\n", a[x].nome, a[x].nota1, a[x].nota2, a[x].media);
	

	fclose(arq);
	
	
	
	
}


}






