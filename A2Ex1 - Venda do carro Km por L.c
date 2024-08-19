#include <stdio.h>

	int main(){
		float gasosa, distancia, media;
		printf("Insira a distancia em Km e o volume em L de gasolina consumido: ");
		printf("\nDistancia: ");
		scanf("%f", &distancia);
		printf("\nVolume: ");
		scanf("%f", &gasosa);
		media=distancia/gasosa;
		
		if(media<8){
			printf("O carro tem media de %f Km/L, como ela eh menor do que 8, venda-o", media);
		}
		else{
			if(media>12){
				printf("O carro tem media de %f Km/L, como ela eh maior do que 12, ele eh super-economico", media);
		}
			else{
			
				printf("O carro tem media de %f Km/L, como ela esta entre 8 e 12, ele eh economico", media);
			};
		};
		
}
