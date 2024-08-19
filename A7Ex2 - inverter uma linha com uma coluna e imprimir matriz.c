#include <stdio.h>
int main (){
	int m[5][5];
	int soma[5];
	int col, lin, n, troca, l, c;
	n=0;
	lin=0;
	col=0;
	
	for(;lin<5;){
		col=0;
		for(;col<5;){
			printf("escolha um nmr. \n");
			scanf("%d", &m[lin][col]);
			col=col+1;
		};
		lin=lin+1;
	};
	l=0;
	for(;l<5;){
		
	troca=m[l][2];
	m[l][2]=m[2][l];
	m[2][l]=troca;
	l=l+1;
	
	};
	l=0;
	c=0;
	for(;l<5;){
		c=0;
		for(;c<5;){
			printf("%d ", m[l][c]);
			
			c=c+1;
		};
		printf("\n");
		l=l+1;
	};
	
	
}
	
