#include <stdio.h>

int main (){
	
	int *p, *r, x, y, erre;
	void imprima(void);
	int conta(int a, int b);
	int conto(int a, int b, int *c);
	
	r=&erre;
	x=10;
	y=20;
	
	imprima();
	printf("\nlegal");
	
	p=conta(x, y);
	printf("\n%d", p);
	
	conto(x, y, r); //r=endereço de memoria, *r= valor do endereço de memoria
	printf("\n%d %d", erre, *r);
	
}

void imprima(void){
	
	printf("jao lindao");
	
	
}

int conta(int a, int b){
	
	return (a+b);
	
	
}

int conto(int a, int b, int *c){
	
 *c=(a+b);
 
 return 0;
	
	
}
