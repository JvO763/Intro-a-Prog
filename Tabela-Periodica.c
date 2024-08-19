#include <stdio.h>

int main(){
	int el, num;
	printf("Insira o Numero Atomico (Z) do Elemento");
	printf("E depois, escolha a acao \n"); 
		printf("1- Ver numero de Massa \n");
		printf("2- Ver numero de Eletrons \n");
		printf("3- Ver numero de Eletrons na camada de valencia \n");
		printf("4- Ver Familia e Periodo \n");
		printf("5-Coming soon... \n");
		scanf("%d %c",&el,&num);
		
		if(el==1){
			switch(num){
				case'1':
					printf("O elemento escolhido foi o Hidrogenio. \n");
					printf("A massa eh 1,00794 u.");
					break;
					
				case'2':
					printf("O elemento escolhido foi o Hidrogenio. \n");
					printf("Possui 1 eletron.");
					break;
					
				case'3':
					printf("O elemento escolhido foi o Hidrogenio. \n");
					printf("Possui 1 eletron na camada de Valencia.");
					break;
					
				case'4':
					printf("O elemento escolhido foi o Hidrogenio. \n");
					printf("Familia 1A e 1 Periodo.");
					break;
					
				case'5':
					printf("Calma ai sapequinha :) .");
			break;
					}
		}
						
		else if(el==2){
			switch(num){
				case'1':
					printf("O elemento escolhido foi o Helio. \n");
					printf("A massa eh 4,002602 u.");
					break;
					
				case'2':
					printf("O elemento escolhido foi o Helio. \n");
					printf("Possui 2 eletrons.");
					break;
					
				case'3':
					printf("O elemento escolhido foi o Helio. \n");
					printf("Possui 2 eletrons na camada de Valencia.");
					break;
					
				case'4':
					printf("O elemento escolhido foi o Helio. \n");
					printf("Familia 8A e 1 Periodo.");
					break;
					
				case'5':
					printf("Calma ai sapequinha :) .");
			break;
					}
		}
		
		else if(el==3){
			switch(num){
				case'1':
					printf("O elemento escolhido foi o Litio. \n");
					printf("A massa eh 6,941 u.");
					break;
					
				case'2':
					printf("O elemento escolhido foi o Litio. \n");
					printf("Possui 3 eletrons.");
					break;
					
				case'3':
					printf("O elemento escolhido foi o Litio. \n");
					printf("Possui 1 eletron na camada de Valencia.");
					break;
					
				case'4':
					printf("O elemento escolhido foi o Litio. \n");
					printf("Familia 1A e 2 Periodo.");
					break;
					
				case'5':
					printf("Calma ai sapequinha :) .");
			break;
					}
		}
		
		else if(el==4){
			switch(num){
				case'1':
					printf("O elemento escolhido foi o Berilio. \n");
					printf("A massa eh 9,012182 u.");
					break;
					
				case'2':
					printf("O elemento escolhido foi o Berilio. \n");
					printf("Possui 4 eletrons.");
					break;
					
				case'3':
					printf("O elemento escolhido foi o Berilio. \n");
					printf("Possui 2 eletrons na camada de Valencia.");
					break;
					
				case'4':
					printf("O elemento escolhido foi o Berilio. \n");
					printf("Familia 2A e 2 Periodo.");
					break;
					
				case'5':
					printf("Calma ai sapequinha :) .");
			break;
					}
		};
}
		

