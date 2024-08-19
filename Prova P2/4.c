#include <stdio.h> //padrao 
#include <stdlib.h> //alocacao dinamica
#include <string.h> //strings

struct filme { 
char nome[20]; 
int avaliacao; 
int ano; 
};
struct filme f[5];

int funcao(char *n, int *av, int *ano){
	setbuf(stdin, NULL);
	
	scanf("%s", n);
	setbuf(stdin, NULL);
	scanf("%d", av);
	setbuf(stdin, NULL);
	scanf("%d", ano);
	
	setbuf(stdin, NULL);
}

int main(){
	int x, *p, *r;
	char *m;
	
	m=f[0].nome;
	p=&f[0].ano;
	r=&f[0].avaliacao;
	for(x=0;x<5;x++){
		
		m=&f[x].nome;
		p=&f[x].ano;
		r=&f[x].avaliacao;
	funcao(m, r, p);
//	printf("%s\n%d\n%d", f[x].nome, *r, *p);
//	printf("\n");
	
	};
	for(x=0;x<5;x++){
		m=&f[x].nome;
		p=&f[x].ano;
		r=&f[x].avaliacao;
	printf("%s\n%d\n%d", f[x].nome, *r, *p);
	printf("\n");
		};
	
}
