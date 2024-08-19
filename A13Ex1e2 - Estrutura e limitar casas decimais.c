#include <stdio.h>

struct dados_carros {
	char fabricante[50];
	char modelo[50];
	int ano;
	char cor[50];
	float preco;
	
};
struct dados_carros c1;
int main(){
	fgets(c1.fabricante, 50, stdin);
	fgets(c1.modelo, 50, stdin);
	fgets(c1.cor, 50, stdin);
	scanf("%d", &c1.ano);
	scanf("%f", &c1.preco);
	
	printf("%s", c1.fabricante);
	printf("\n");
	printf("%s", c1.modelo);
	printf("\n");
	printf("%s", c1.cor);
	printf("\n");
	printf("%d", c1.ano);
	printf("\n");
	printf("\n");
	printf("%.2f", c1.preco); //.2f significa só pegar 2 casas decimais
	printf("\n");
}

