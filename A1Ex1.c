#include <stdio.h>

int main(){
    float lado, area, perimetro;
    	printf("Insira o lado do Quadrado: ");
    	scanf("%f", &lado);
    	area=lado*lado;
    	perimetro=lado*4;
    printf("O seu Quadrado tem %f de lado, %f de área e %f de perímetro", lado, area, perimetro);
}
