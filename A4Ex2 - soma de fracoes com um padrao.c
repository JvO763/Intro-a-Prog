#include <stdio.h>

int main (){

	float soma, num, den;
	num=1;
	den=1;
	soma=0;
	
	for(;num<=99;){
		
		soma=(num/den)+soma;
		num=num+2;
		den=den+1;
		
	};

	printf("%f", soma);

}
