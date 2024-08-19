#include <stdio.h>

int main(){
	int maior, menor, teste;
		printf("Digite a nota: \n");
		scanf("%d", &teste);
		maior=teste;
		menor=teste;
	while(teste>=0){
		
		if(teste>maior){
			maior=teste;
		};
		
		if(teste<menor){
			menor=teste;
		};
		
		scanf("%d", &teste);
		
	};
	
	printf("A menor nota foi %d e a maior nota foi %d . \n", menor, maior);
}
