#include <stdio.h>
int main (){
	int m[5][5];
	int col, lin, a, b, soma;
	lin=0;
	col=0;
	
	for(;lin<5;){
		col=0;
		for(;col<5;){
			scanf("%d", &m[lin][col]);
			col=col+1;
		};
		lin=lin+1;
	};

	scanf("%d %d", &a, &b);
	lin=0;
	col=0;
	for(;lin<5;){
		col=0;
		for(;col<5;){
			if(m[lin][col]>=a&&m[lin][col]<=b){
			soma=soma+1;
			};
			col=col+1;
		};
		lin=lin+1;
	};
	printf("%d", soma);

	
}
