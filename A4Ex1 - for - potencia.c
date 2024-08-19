#include <stdio.h>

int main (){
	
	int vezes, num, teste, resul;
	printf("Insira o numero que sera elevado: ");
	scanf("%d", &num);
	printf("Insira o numero da potencia: ");
	scanf("%d", &vezes);
	teste=0;
	resul=1;
	
		if(vezes==0){
		
			printf("Resultado eh 1.");
		
	}
	
		else if(vezes>0){
			for(;teste<vezes;teste++){
		
				resul=resul*num;
					
			};
		
			printf("Resultado eh %d", resul);
		
		}
		
		else if(vezes<0){
			for(;teste>vezes;teste--){
		
				resul=resul*num;
			
			};
			
			printf("Resultado eh 1/%d", resul);	
			
		};
	
	
	
	
	
	
	
}
