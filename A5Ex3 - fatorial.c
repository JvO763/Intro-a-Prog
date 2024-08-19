#include <stdio.h>
int main(){
	float nmr, teste, fat;
	printf("Insira o numero que quer fatorar. \n");
	scanf("%f", &nmr);
	teste=1;
	fat=1;
	
	while(nmr>=teste){
		fat=fat*teste;
		teste=teste+1;
				
	};
	printf("%f", fat);



	
	
}
