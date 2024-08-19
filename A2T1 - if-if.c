#include <stdio.h>

int main(){
	int num;
	printf("Escreva um numero: ");
	scanf("%d", &num);
	if(num==0){
		printf("Numero eh zero");
	};
	if(num>0){
			printf("Numero positivo");
		};
	if(num<0){
			printf("Numero negativo");
		};
	
}
