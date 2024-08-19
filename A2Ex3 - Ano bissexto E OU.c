#include <stdio.h>

int main(){
	int ano, tes1, tes2;
		printf("Insira o ano: ");
		scanf("%d",&ano);

	tes1=ano%400;
	tes2=ano%4;
	
	if(tes2==0&&ano%100!=0||tes2==0&&tes1==0){
	printf("Esse ano eh um ano Bissexto");
	}
	else{
		printf("Esse ano nao eh Bissexto");
	};

}
	

