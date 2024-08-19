#include <stdio.h>

int main(){
	int el, num;
	printf("Insira o Numero Atomico (Z) do Elemento:");
	scanf("%c",&el);
		
		switch(el){
			case'1': 
				printf("O elemento escolhido foi Hidrogenio. \n"); 
				printf("Escolha a ação: \n");
					printf("1-Ver numero de Massa \n");
					printf("2-Ver numero de Eletrons \n");
					printf("3-Ver numero de Eletrons na camada de valencia \n");
					printf("4-Ver Familia e Periodo \n");
					printf("5-Coming soon... \n");
						scanf("%c", &num);
						switch(num){
							case'1':
								printf("A massa eh 1,00794.");
								break;
								
							case'2':
								printf("Possui 1 eletron.");
								break;
								
							case'3':
								printf("Possui 1 eletron na camada de Valencia.");
								break;
								
							case'4':
								printf("Familia 1A e 1º Periodo.");
								break;
								
							case'5':
								printf("Calma ai sapequinha :) .");
								break;
								
						};
								
			break;
				
			case'2': printf("Hélio"); break;
			case'3': printf("Lítio"); break;
			case'4': printf("Berílio"); break;
		}
		
}
