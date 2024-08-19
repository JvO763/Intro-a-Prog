#include <stdio.h>
int main(){
	int *pa, *pb, *pc;
	int a, b, c, d, e;
	
	a=1;
	b=2;
	c=3;
	d=0;
	e=0;
	
	pa=&a; //atribui locais da memoria
	pb=&b;
	pc=&c;
	
	printf("%d %d %d", *pa, *pb, *pc); //printa os valores (por causa do *)os valores de pa pb e pc
	
	printf("\n");
	*pa=7; //atribui o valor
	printf("%d %d %d", a, b, c);
	
	printf("\n");
	e=*pa; //jeito certo de atribuir o valor do pontei a uma variavel
	d=pa; //jeito errado
	printf("%d %d", d, e);
	
	
	
	
	
	
	
	
	
}
