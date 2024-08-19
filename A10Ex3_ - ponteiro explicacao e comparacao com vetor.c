#include <stdio.h>
int main (){
	int v[2], *p;
	p=v; // o endereço de p sera = ao endereço do vetor, mas se fosse:
//	p=&v[1]; tem que usar o "&", já que vc escolheu o segundo dado do vetor v. aquilo é igual a p=(v+1);
	*p=5; //ou v[0]=5; 
	*(p+1)=*p+1;  //ou v[1]=v[0]+1;
	printf("%d %d", *p, *(p+1)); //printf("%d %d", p[0], p[1]);
	
//	portanto, p é endereço e *p é valor.
	
}
