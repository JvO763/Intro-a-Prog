#include <stdio.h>
int main () {
	int m[10];
	int n, soma;
	n=0;
	soma=0;
	
	printf("Escreva os numeros. \n");
	for(;n<10;){
		scanf("%d", &m[n]);
		n=n+1;
	};
	
	n=1;
	for(;n<10;){
		soma=soma+m[n];
		n=n+2;
	};
	
	printf("%d", soma);
		
}
