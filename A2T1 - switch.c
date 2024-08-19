#include <stdio.h>

int main(){
	int num;
	printf("Escreva um numero de 1 a 3: \n");
	printf("1 - qual seu nome? \n");
	printf("2 - qual sua minha idade? \n");
	printf("3 - vc ta com fome? \n");
	scanf("%d", &num);
	
	switch(num){
		case 1: printf("João"); break;
		case 2: printf("17"); break;
		case 3: printf("Sim.");break;	
		default : printf("Numero fora do intervalo");
		}
	}
	
