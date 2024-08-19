#include <stdio.h>
int main(){
	int m[10];
	int n, soma, teste;
	
	n=0;
	soma=0;
	
	for(;n<10;){
		scanf("%d", &m[n]);
		n=n+1;
		
	};
	n=0;
	for(;n<10;){
		teste=m[n]-m[n+1];
		if(teste<0){
		teste=-teste;
		};
		if(teste>soma){
			soma=teste;
		};
		n=n+2;
	};
	printf("%d", soma);
	
	
	
}
