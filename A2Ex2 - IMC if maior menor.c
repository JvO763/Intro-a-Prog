#include <stdio.h>

	int main(){
		float peso,alt,media,dois;
		printf("Insira a distancia seu peso e sua altura: ");
		printf("\nPeso: ");
		scanf("%f", &peso);
		printf("\nAltura: ");
		scanf("%f", &alt);
		dois=2;
		media=peso/(alt*alt);
		
		if(media<=18.5){
			printf("Abaixo do peso, IMC = %f", media);
		}
		else if(media>18.5){
			if(media<25){
				printf("Saudavel, IMC = %f", media);
			}
		
			else if(media>=25){
				if(media<30){
					printf("Peso em excesso, IMC = %f", media);
				}
			
				else if(media>=30){
					if(media<35){
						printf("Obesidade nivel I, IMC = %f", media);
					}
				
					else if(media>=35){
						if(media<40){
							printf("Obesidade nivel II, IMC = %f", media);
					}
				
						else if(media>=40){
							printf("Obesidade nivel III, IMC = %f", media);
							}}}}};
	}
