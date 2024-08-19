#include <stdio.h>
int main () {
	int m[10];
	int n;
	n=0;
	
	printf("Escreva os numeros. \n");
	for(;n<10;){
		scanf("%d", &m[n]);
		n=n+1;
	};
	printf("\n");
	for(;n>0;){
		n=n-1;
		printf("%d ", m[n]);
	
	
	};
	
	
	
	
}
