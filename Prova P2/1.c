#include <stdio.h> //padrao 
#include <stdlib.h> //alocacao dinamica
#include <string.h> //strings

int main(){
int *u, n, y, *m, ve[10];
int vet(int *v, int *b);

m=&n;
u=ve;
	vet(u, *m);	


}

int vet(int *v, int *b){
	int x;

	v = (int *) calloc(10, sizeof(int));
	scanf("%d", &b);
//	printf("%d", b);
	for(x=0;x<b;x++){
		scanf("%d", (v+x));
		
	};
	for(x=0;x<b;x++){
		printf("%d ", *(v+x));
		
	};
	printf("\n%d", b);
	return(0);
	
}
