#include <stdio.h>

struct dados_carros {
	char modelo[50];
	char cor[50];
	float preco;

};
struct dados_carros c[5];
int main(){
	FILE *arq;
	char n, s[50], t[50];
	float u;
	int x, a, b, f, d, e;
	x=0;
	a=0;
	b=0;
	f=0;
	d=0;
	e=0;
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
	
			
		if((arq=fopen("0.txt", "r+"))==NULL){
		printf("BUGOU");
	};
		
		fprintf(arq,"%s", &c[0].modelo);
		fprintf(arq,"%s", &c[0].cor);
		fprintf(arq,"%f", c[0].preco);
		
		fclose(arq);
		
			if((arq=fopen("1.txt", "r+"))==NULL){
		printf("BUGOU");
	};
		
		fprintf(arq,"%s", &c[1].modelo);
		fprintf(arq,"%s", &c[1].cor);
		fprintf(arq,"%f", c[1].preco);
		
		fclose(arq);
		
		if((arq=fopen("2.txt", "r+"))==NULL){
		printf("BUGOU");
	};
		
		fprintf(arq,"%s", &c[2].modelo);
		fprintf(arq,"%s", &c[2].cor);
		fprintf(arq,"%f", c[2].preco);
		
		fclose(arq);
		
			if((arq=fopen("3.txt", "r+"))==NULL){
		printf("BUGOU");
	};
		
		fprintf(arq,"%s", &c[3].modelo);
		fprintf(arq,"%s", &c[3].cor);
		fprintf(arq,"%f", c[3].preco);
		
		fclose(arq);
		
			if((arq=fopen("4.txt", "r+"))==NULL){
		printf("BUGOU");
	};
	
		fprintf(arq,"%s", &c[4].modelo);
		fprintf(arq,"%s", &c[4].cor);
		fprintf(arq,"%f", c[4].preco);
		
		fclose(arq);
		
			if((arq=fopen("0.txt", "r+"))==NULL){
		printf("BUGOU");
	};
		
		fscanf(arq,"%s", &s);
		fscanf(arq,"%s", &t);
		fscanf(arq,"%f", &u);
		
		if(u>=20000){
		printf("%s %s %f", s, t, u);
		a=1;
	};
	
		fclose(arq);
		
		
		
		
			if((arq=fopen("1.txt", "r+"))==NULL){
		printf("BUGOU");
	};
		
		fscanf(arq,"%s", &s);
		fscanf(arq,"%s", &t);
		fscanf(arq,"%f", &u);
		
		if(u>=20000){
		printf("%s %s %f", s, t, u);
		b=1;
	};
	
		fclose(arq);
		
		
		
			if((arq=fopen("2.txt", "r+"))==NULL){
		printf("BUGOU");
	};
		
		fscanf(arq,"%s", &s);
		fscanf(arq,"%s", &t);
		fscanf(arq,"%f", &u);
		
		if(u>=20000){
		printf("%s %s %f", s, t, u);
		f=1;
	};
	
		fclose(arq);
		


			if((arq=fopen("3.txt", "r+"))==NULL){
		printf("BUGOU");
	};
		
		fscanf(arq,"%s", &s);
		fscanf(arq,"%s", &t);
		fscanf(arq,"%f", &u);
		
		if(u>=20000){
		printf("%s %s %f", s, t, u);
		d=1;
	};
	
		fclose(arq);
		
		
		
			if((arq=fopen("4.txt", "r+"))==NULL){
		printf("BUGOU");
	};
		
		fscanf(arq,"%s", &s);
		fscanf(arq,"%s", &t);
		fscanf(arq,"%f", &u);
		
		if(u>=20000){
		printf("%s %s %f", s, t, u);
		e=1;
	};
	
		fclose(arq);
		
		x=0;
		for(;x<5;){
		
		fgets(c[x].modelo, 50, stdin);
		setbuf(stdin, NULL);
	
		fgets(c[x].cor, 50, stdin);
		setbuf(stdin, NULL);
	
		scanf("%f", &c[x].preco);
		setbuf(stdin, NULL);
		
		x=x+1;
	};
		
		
		if(a==1){
			if((arq=fopen("0.txt", "r+"))==NULL){
		printf("BUGOU");
	};
		
		fprintf(arq,"%s", &c[0].modelo);
		fprintf(arq,"%s", &c[0].cor);
		fprintf(arq,"%f", c[0].preco);
		
		fclose(arq);
		};
		
		if(b==1){
			if((arq=fopen("1.txt", "r+"))==NULL){
		printf("BUGOU");
	};
		fseek(arq, 0, SEEK_SET);
		fprintf(arq,"%s", &c[1].modelo);
		fprintf(arq,"%s", &c[1].cor);
		fprintf(arq,"%f", c[1].preco);
		
		fclose(arq);
	};
	
	
	
	if(f==1){
		if((arq=fopen("2.txt", "r+"))==NULL){
		printf("BUGOU");
	};
		
		fprintf(arq,"%s", &c[2].modelo);
		fprintf(arq,"%s", &c[2].cor);
		fprintf(arq,"%f", c[2].preco);
		
		fclose(arq);
	};
	
	
	if(d==1){
			if((arq=fopen("3.txt", "r+"))==NULL){
		printf("BUGOU");
	};
		
		fprintf(arq,"%s", &c[3].modelo);
		fprintf(arq,"%s", &c[3].cor);
		fprintf(arq,"%f", c[3].preco);
		
		fclose(arq);
	};
	
	
	
	if(e==1){
			if((arq=fopen("4.txt", "r+"))==NULL){
		printf("BUGOU");
	};
	
		fprintf(arq,"%s", &c[4].modelo);
		fprintf(arq,"%s", &c[4].cor);
		fprintf(arq,"%f", c[4].preco);
		
		fclose(arq);
	};
		
		
		
			if((arq=fopen("0.txt", "a+"))==NULL){
		printf("BUGOU");
	};
		
		fscanf(arq,"%s", &s);
		fscanf(arq,"%s", &t);
		fscanf(arq,"%f", &u);
		
		if(u>=20000){
		printf("%s %s %f", s, t, u);
		a=1;
	};
	
		fclose(arq);
		
		
		
		
			if((arq=fopen("1.txt", "a+"))==NULL){
		printf("BUGOU");
	};
		
		fscanf(arq,"%s", &s);
		fscanf(arq,"%s", &t);
		fscanf(arq,"%f", &u);
		
		if(u>=20000){
		printf("%s %s %f", s, t, u);
		b=1;
	};
	
		fclose(arq);
		
		
		
			if((arq=fopen("2.txt", "a+"))==NULL){
		printf("BUGOU");
	};
		
		fscanf(arq,"%s", &s);
		fscanf(arq,"%s", &t);
		fscanf(arq,"%f", &u);
		
		if(u>=20000){
		printf("%s %s %f", s, t, u);
		f=1;
	};
	
		fclose(arq);
		


			if((arq=fopen("3.txt", "a+"))==NULL){
		printf("BUGOU");
	};
		
		fscanf(arq,"%s", &s);
		fscanf(arq,"%s", &t);
		fscanf(arq,"%f", &u);
		
		if(u>=20000){
		printf("%s %s %f", s, t, u);
		d=1;
	};
	
		fclose(arq);
		
		
		
			if((arq=fopen("4.txt", "a+"))==NULL){
		printf("BUGOU");
	};
		
		fscanf(arq,"%s", &s);
		fscanf(arq,"%s", &t);
		fscanf(arq,"%f", &u);
		
		if(u>=20000){
		printf("%s %s %f", s, t, u);
		e=1;
	};
	
	fclose(arq);
		
		
	};
