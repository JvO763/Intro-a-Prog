#include <stdio.h>
int main() {
	int i, num;
//Inicializa a sequencia de números aleatórios.
//Deve ser executada uma única vez no início do programa.
	srand(time(NULL));
	for(i=0; i<10; i++) {
		num = rand(); // gera números aleatórios
		num = num%100; //limita o número gerado entre 0 e 100
		printf("%d ", num);
	}
}
