#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a, b[10], x;
	
	printf("%d", sizeof(a)); //poderia ser 	printf("%d", sizeof(int));
	
	int *p=(int *) malloc(sizeof(int)*5); //esse (int *) é um casting, que faz o seguinte: transforma o resultado do sizeof, que seria void, em int., o malloc só aloca, nao limpa a memoria q vai ser usada
	*p=1000;
	printf("\n%d", *p);
	free(p); //o free desaloca o espaço na memoria ram, mas nao apaga o valor que existe la, fica como lixo.
	
//	printf("\n%d", *p); //logo, se eu imprimir o p denovo, como ele ainda aponta para aquele espaço, vai dar 1000 denovo, teoricamente pelo menos KJKJKKk.
	
	
	int *r=(int *) calloc(5, sizeof(int)); //calloc(qntd de elementos, tipo de elementos), o calloc limpa a memoria q sera usada
	*(r+2)=10;//é o mesmo que escrever p[3]=10;
	printf("\n%d\n", *(p+2)); //poderia ser printf("\n%d", p[3]);
	
	
	
	for(x=0;x<5;x++){
		*(r+x)=10*x;
		printf("O endereco de p%d = %p | Valor de p%d = %d\n", x, (r+x), x, *(r+x)); //com asterisco é valor e sem é endereço. %p é pra endereco de memoria no printf. poderia ser: printf("O endereco de p%d = %p | Valor de p%d = %d\n", x, &r[x], x, r[x]);
	//	printf("O endereco de p%d = %p | Valor de p%d = %d\n", x, &r[x], x, r[x]);
		
	}
	
}







