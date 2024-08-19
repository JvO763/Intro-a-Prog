#include <stdio.h>

int main (){

	int num, div, test;
	test=0;
	printf("Insira o numero: ");
	scanf("%u", &num);
	test=0;
	
	if(num>0){
		for(;num>test;){
		
			test=test+1;
			if(num%test==0){
				printf("%u \n", test);			
			
			};
		
		};
	}

	else if(num<0){
		printf("So trabalhamos com numeros positivos.");
	}
	
	else if(num==0){
		printf("Todos os numeros sao divisores de zero, exceto ele mesmo.");
	};

}
