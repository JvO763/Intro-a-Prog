#include <stdio.h>
int main() {
	int i, num;
//Inicializa a sequencia de n�meros aleat�rios.
//Deve ser executada uma �nica vez no in�cio do programa.
	srand(time(NULL));
	for(i=0; i<10; i++) {
		num = rand(); // gera n�meros aleat�rios
		num = num%100; //limita o n�mero gerado entre 0 e 100
		printf("%d ", num);
	}
}
