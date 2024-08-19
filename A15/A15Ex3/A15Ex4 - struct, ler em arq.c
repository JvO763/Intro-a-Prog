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
	
	if((arq=fopen("test.txt", "r+"))==NULL){
			printf("\nErro abrindo arquivo.\n");
		};
		fseek(arq, 0, SEEK_SET);
		
	
	for(x=0;x<3;x++){
	
		
	
	
	fgets(a[x].nome,300, arq);
	setbuf(stdin, NULL);
	
	fgets(a[x].nota1,300, arq);
	setbuf(stdin, NULL);
	
	fgets(a[x].nota2,300, arq);
	setbuf(stdin, NULL);
	
	fgets(a[x].media,300, arq);
	setbuf(stdin, NULL);
	
	printf("\n%s%s%s%s\n", a[x].nome, a[x].nota1, a[x].nota2, a[x].media);
	
	for(j=0;j<5;j++){
	y[j]=a[x].media[j]-48;
//	printf("%f", y[j]);
	};
	
	if(y[1]==0){
		s[x]=10;
	}
	else if(y[1]!=0){
		s[x]=y[0]+(y[2]/10)+(y[3]/10)+(y[4]/10);
//		printf("\n%f\n", s[x]);
	};
	
	




	};

	t=(s[0]+s[1]+s[2])/3;
	printf("\n%f\n", t);
	
	fclose(arq);
	
	
	
	
}






