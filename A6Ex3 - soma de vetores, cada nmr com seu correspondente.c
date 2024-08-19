#include <stdio.h>
int main () {
	int a[5], b[5], s[5];
	int n;
	n=0;
	
	printf("Escreva os numeros. \n");
	for(;n<5;){
		scanf("%d", &a[n]);
		n=n+1;
	};
	
	n=0;
	
	printf("Escreva os numeros. \n");
	for(;n<5;){
		scanf("%d", &b[n]);
		n=n+1;
	};
	
	n=0;
	
	for(;n<5;){
		s[n]=a[n] + b[n];
		printf("%d ", s[n]);
		n=n+1;
	};
}
