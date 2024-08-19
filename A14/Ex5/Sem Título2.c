#include <stdio.h>

struct dados_carros {
	char modelo[50];
	char cor[50];
	float preco;

};
struct dados_carros c[5];
int main(){
	FILE *arq;
	char n, t1[50],t2[50];
	int x, res1, res2, res3, t3;
	x=0;
	n='\n';
	
	for(;x<5;){
		
		fgets(c[x].modelo, 50, stdin);
		setbuf(stdin, NULL);
	
		fgets(c[x].cor, 50, stdin);
		setbuf(stdin, NULL);
	
		scanf("%f", &c[x].preco);
		setbuf(stdin, NULL);
		
		x=x+1;
	};
	
	x=0;
		for(;x<5;){
		
		printf("%s", c[x].modelo);
		setbuf(stdin, NULL);
		printf("\n");
		printf("%s", c[x].cor);
		setbuf(stdin, NULL);
		printf("\n");
		printf("%f", c[x].preco);
		setbuf(stdin, NULL);
		printf("\n");
		
		x=x+1;
	};
	
	
	x=0;
	
			
		if((arq=fopen("0.txt", "r+"))==NULL){
		printf("BUGOU");
	};
		
		fwrite(c[0].modelo, sizeof(char), 50, arq);
		fwrite(c[0].cor, sizeof(char), 50, arq);
		fwrite(&c[0].preco, sizeof(float), 10, arq);
		
			if((arq=fopen("1.txt", "r+"))==NULL){
		printf("BUGOU");
	};
		
		fwrite(c[1].modelo, sizeof(char), 50, arq);
		fwrite(c[1].cor, sizeof(char), 50, arq);
		fwrite(&c[1].preco, sizeof(float), 10, arq);
	
		if((arq=fopen("2.txt", "r+"))==NULL){
		printf("BUGOU");
	};
		
		fwrite(c[2].modelo, sizeof(char), 50, arq);
		fwrite(c[2].cor, sizeof(char), 50, arq);
		fwrite(&c[2].preco, sizeof(float), 10, arq);
		
			if((arq=fopen("3.txt", "r+"))==NULL){
		printf("BUGOU");
	};
		
		fwrite(c[3].modelo, sizeof(char), 50, arq);
		fwrite(c[3].cor, sizeof(char), 50, arq);
		fwrite(&c[3].preco, sizeof(float), 10, arq);

			if((arq=fopen("4.txt", "r+"))==NULL){
		printf("BUGOU");
	};
		
		fwrite(c[4].modelo, sizeof(char), 50, arq);
		fwrite(c[4].cor, sizeof(char), 50, arq);
		fwrite(&c[4].preco, sizeof(float), 10, arq);	
		
		fclose(arq);
		
	};
	
	
	
	

