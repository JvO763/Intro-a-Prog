#include <stdio.h>
struct dados_func {
	char nome[30];
	
	int numero;
	int idade;
	int telefone;
	float salario;
	char ca[15];


};

	struct dados_func f[100];


int main(){
	char tnome[30];
	int i;
	int j;
	int t;
	int g;
	g=0;
	j=0;
	t=0;
	
	i=0;
	for(;i<3;){

	printf("nome: ");
	fgets(f[i].nome, 30, stdin);
	
		i=i+1;
	};
	
	i=0;
	for(;i<3;){

	printf("\ncargo: ");
	fgets(f[i].ca, 15, stdin);
			i=i+1;
	};
	
	i=0;
	for(;i<3;){

	printf("\nnumero: ");
	scanf(" %d", &f[i].numero);
				i=i+1;
	};
	
	i=0;
	for(;i<3;){

	printf("\ntelefone: ");
	scanf(" %d", &f[i].telefone);
				i=i+1;
	};
	
	i=0;
	for(;i<3;){

	printf("\nidade: ");
	scanf(" %d", &f[i].idade);
				i=i+1;
	};
	
	i=0;
	for(;i<3;){

	printf("\nsalario: ");
	scanf(" %f", &f[i].salario);
	
	i=i+1;
	};
	
	i=0;
	for(;i<3;){
	printf("%s", f[i].nome);
	i=i+1;
	};
	i=0;


		scanf("%d", &t);
		for(;i<100;){
			if(f[i].numero==t){
				g=i;
			};
			i=i+1;
		};
		

		
		printf("\ntelefone: ");
	scanf(" %d", &f[g].telefone);
		
		printf("\nidade: ");
	scanf(" %d", &f[g].idade);
	
		printf("\nsalario: ");
	scanf(" %f", &f[g].salario);
	printf("\n");
	
	setbuf(stdin, NULL); //se não colocasse, o proximo gets leria o "enter" que a gente pressiona pra finalizar o scanf como um caracter e ai ia para o proximo gets direto
	
		printf("nome: ");
	fgets(f[g].nome, 30, stdin);
	
	
	
		printf("\ncargo: ");		
	fgets(f[g].ca, 30, stdin);
		
	};
	
	
	
	

