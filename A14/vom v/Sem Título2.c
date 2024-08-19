#include <stdio.h>
void main ()
{
FILE *arq;
int i, n;


for(i=0; i<5; i++) {
fscanf(arq, "%d", &n);
printf("%d\n", n);
}
fclose(arq);
system("PAUSE");
} 
