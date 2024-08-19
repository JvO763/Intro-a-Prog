#include <stdio.h>
#include <stdlib.h>

int main () { 
int *v, n, i;

printf("Qual o tamanho do vetor que deseja:");
scanf("%d", &n);

v = (int *) calloc(n, sizeof(int)); /* aloca um vetor de n posições inteiras */

for (i =0; i<n; i++) {
printf("Informe o %dº elemento: ", i+1);
scanf("%d", &v[i]); /* armazena o valor no vetor na posição i */
}

for (i =0; i<n; i++)
printf("%d ", v[i]);

free(v); /* libera a memória alocada para o vetor */

return 0; }


// alocar para matriz: https://ae4.tidia-ae.usp.br/access/content/attachment/9da84792-c119-4184-b561-8da45deb5ec3/Conte%C3%BAdo%20Program%C3%A1tico/12c0b534-d9ab-4ae8-97fe-08d41c1b4530/Aula%2013%20-%20Alocacao%20Dinamica.pdf
