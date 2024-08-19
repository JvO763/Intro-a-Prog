#include <stdio.h> //padrao 
#include <stdlib.h> //alocacao dinamica
#include <string.h> //strings
struct filme { 
	char nome[20]; 
	int avaliacao; 
	int ano; 
	};
void escritabinaria(struct filme f[]) {
  FILE *arq;

  arq = fopen("filmes.dat", "wb+");
  if(arq==NULL) {
    exit(0);
  }

int i;

  for(i=0; i<5; i++) {

    setbuf(stdin, NULL);
    printf("Nome: ");
    scanf("%[^\n]", f[i].nome);
    setbuf(stdin, NULL);
    printf("avaliacao: ");
    scanf("%f", &f[i].avaliacao);
    setbuf(stdin, NULL);
    printf("ano: ");
    scanf("%f", &f[i].ano);
    setbuf(stdin, NULL);
  }

  fwrite(f, sizeof(struct filme), 5, arq);

  fclose(arq);
}

void lerbin(struct filme f[]) {
  FILE *arq;
	int i;
	
  arq = fopen("filmes.dat", "rb+");
  fseek(arq, 0, SEEK_SET);
  
  if(arq==NULL) {
    exit(0);
  }

  fread(f, sizeof(struct filme), 5, arq);

  for(i=0;i<5;){
  	
  	if(f[i].ano>=2000){
  		if(f[i].avaliacao>=5){
  			
  			    printf("Nome: ");
    			printf("%s\n", f[i].nome);

   				 printf("avaliacao: ");
    			printf("%f\n", f[i].avaliacao);

    			printf("ano: ");
    			printf("%f\n", f[i].ano);
  			
		  };
  		
	  };
		i=i+1;

  };
}

int main() {
  struct filme f[5];

  escritabinaria(f);
  lerbin(f);
}


