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
	
	printf("\nnome a ser procurado:\n");
	fgets(tnome, 30, stdin);
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
	scanf("%d", &f[i].numero);
				i=i+1;
	};
	
	i=0;
	for(;i<3;){

	printf("\ntelefone: ");
	scanf("%d", &f[i].telefone);
				i=i+1;
	};
	
	i=0;
	for(;i<3;){

	printf("\nidade: ");
	scanf("%d", &f[i].idade);
				i=i+1;
	};
	
	i=0;
	for(;i<3;){

	printf("\nsalario: ");
	scanf("%f", &f[i].salario);
	
	i=i+1;
	};
	
	i=0;
	for(;i<3;){
	printf("%s", f[i].nome);
	i=i+1;
	};
	i=0;

	printf("Se quiser pesquisar pelo numero digite 1, se quiser pelo nome digite 2 \n");
	scanf("%d", &j);
	if(j==2){
for(;i<100;){
			if(stricmp(f[i].nome, tnome)==0){
				g=i;
			};
			i=i+1;
		};
		printf("\n");
		printf("%s", f[g].nome);
		printf("\n");
		printf("%s", f[g].ca);
		printf("\n");
		printf("%d", f[g].idade);
		printf("\n");
		printf("%d", f[g].numero);
		printf("\n");
		printf("%d", f[g].telefone);
		printf("\n");
		printf("%f", f[g].salario);
		printf("\n");
		
	};
	if(j==1){
		scanf("%d", &t);
		for(;i<100;){
			if(f[i].numero==t){
				g=i;
			};
			i=i+1;
		};
		printf("\n");	
		printf("%s", f[g].nome);
		printf("\n");
		printf("%s", f[g].ca);
		printf("\n");
		printf("%d", f[g].idade);
		printf("\n");
		printf("%d", f[g].numero);
		printf("\n");
		printf("%d", f[g].telefone);
		printf("\n");
		printf("%f", f[g].salario);
		printf("\n");
	};
	
	
	
	
	
	


}

