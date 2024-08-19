#include <stdio.h>
#include <string.h>

int main(){
	char x[100], *p;
	int i;
	strcpy(x, "casa");
	
	for(;i<50;){
	p=strchr(x, '\0'); //demos o lugar pro ponteiro e embaixo trocamos o valor do ponteiro
	*p='o'; //substitui um char por outro (no caso eu tirei aquele char q indica q acabou o texto
	i=i+1;
	};
	
	printf("%s %s", x, p); //imprimir strinmg facin, sem for
}
