#include <stdio.h>

struct dados_carros {
	char fabricante[50];
	char modelo[50];
	int ano;
	char cor[50];
	float preco;

};
struct dados_carros c1;
int main(){
	char *p;
	int i, t;
	char ch[50]="chevrolet";
	p=c1.fabricante;
	fgets(c1.fabricante, 50, stdin);
	fgets(c1.modelo, 50, stdin);
	fgets(c1.cor, 50, stdin);
	scanf("%d", &c1.ano);
	scanf("%f", &c1.preco);
	
	i=1;
	t=0;
	
	if(c1.ano<2000){
		c1.ano=2000;
	}
	if((c1.fabricante[0]=='C')||(c1.fabricante[0]=='c')){
		for(;i<9;){
		if(c1.fabricante[i]!=ch[i]){
			t=1;
		};
		i=i+1;
		};
	
	};
	if(t==0){
		p[0]='G'; //é o mesmo q usar c1.fabricante[0]='G'
		c1.fabricante[1]='M';
		c1.fabricante[2]=NULL;
	}
	
	printf("%s", c1.fabricante);
	printf("\n");
	printf("%s", c1.modelo);
	printf("\n");
	printf("%s", c1.cor);
	printf("\n");
	printf("%d", c1.ano);
	printf("\n");
	printf("\n");
	printf("%.2f", c1.preco); //.2f significa só pegar 2 casas decimais
	printf("\n");
}

