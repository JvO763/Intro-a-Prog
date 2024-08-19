#include <stdio.h>
int main(){
	int x, y, n, ny;
	printf("Write the height and the lenght of the box: ");
	scanf("%d %d", &x, &y);
	n=0;
	ny=0;
	
	printf("+");
	for(;n<(x-2);){
		printf("-");
		n=n+1;
	};
	printf("+ \n");
	
	for(;ny<(y-2);){
		printf("|");
		n=0;
		for(;n<(x-2);){
			printf(" ");
			n=n+1;
		};
	printf("| \n");
	ny=ny+1;
	};
	
		printf("+");
		n=0;
	for(;n<(x-2);){
		printf("-");
		n=n+1;
	};
	printf("+ \n");
};
