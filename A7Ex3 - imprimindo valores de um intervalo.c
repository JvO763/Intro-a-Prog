#include <stdio.h>
int main (){
	int m[4][5];
	int soma[5];
	int col, lin, a, b;
	lin=0;
	col=0;
	
	for(;lin<4;){
		col=0;
		for(;col<5;){
			printf("escolha um nmr. \n");
			scanf("%d", &m[lin][col]);
			col=col+1;
		};
		lin=lin+1;
	};

	printf("Escolha dois numeros em ordem crescente. \n");
	scanf("%d %d", &a, &b);
	lin=0;
	col=0;
	for(;lin<4;){
		col=0;
		for(;col<5;){
			if(m[lin][col]>=a&&m[lin][col]<=b){
			printf("%d ", m[lin][col]);
			};
			col=col+1;
		};
		lin=lin+1;
	};
	

	
}
