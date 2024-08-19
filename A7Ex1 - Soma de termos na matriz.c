#include <stdio.h>
int main (){
	int m[4][5];
	int soma[5];
	int col, lin, n;
	n=0;
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
	
	
	soma[0]=0;
	soma[1]=0;
	soma[2]=0;
	soma[3]=0;
	soma[4]=0;
	soma[5]=0;
	
	lin=0;
	col=0;
		for(;n<5;){
		lin=0;
		for(;lin<4;){
			soma[n]=m[lin][n]+soma[n];
			lin=lin+1;
		};
		
		printf("%d ", soma[n]);
		n=n+1;
	};
		
}
	
	
	
	

