#include <stdio.h>

int main(){
	int min, max, soma, inc;
	printf("Insira o valor Minimo: ");
	scanf("%d", &min);
	printf("Insira o valor Maximo: ");
	scanf("%d", &max);
	inc=min;
	soma=0;
	
	while(inc<max){
		
		soma=inc+soma;
		inc=inc+1;
	
	};
	
	if(inc==min){
		
		printf("Os valores inseridos nao parecem corretos.");
		
	}
	
	else{
		
	soma=soma+max;
	printf("A soma de todos os numeros inteiros de %d a %d eh %d", min, max, soma);
	
	};
	
	
}
