#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Estudantes {
  char nome[200];
  float nota1;
  float nota2;
  float notaFinal;
};

void writeFile(struct Estudantes estudantes[]) {
  FILE *arq;

  arq = fopen("ex5Alunos.txt", "wb+");
  if(arq==NULL) {
    exit(0);
  }

int i;

  for(i=0; i < 10; i++) {
  //  __fpurge(stdin);
    setbuf(stdin, NULL);
    printf("Nome: ");
    scanf("%[^\n]", estudantes[i].nome);
    setbuf(stdin, NULL);
    printf("Nota P1: ");
    scanf("%f", &estudantes[i].nota1);
    setbuf(stdin, NULL);
    printf("Nota P2: ");
    scanf("%f", &estudantes[i].nota2);
    setbuf(stdin, NULL);
    estudantes[i].notaFinal = (estudantes[i].nota1 + estudantes[i].nota2) / (float)2; 
  }

  fwrite(estudantes, sizeof(struct Estudantes), 10, arq);

  fclose(arq);
}

int main() {
  struct Estudantes estudantes[10];

  writeFile(estudantes);
}
