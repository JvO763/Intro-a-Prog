#include <stdio.h>
#include <stdlib.h>

int main(){
	float *p;
	int al, i;
	float soma;
	scanf("%d", &al);
	p=(float *)calloc(al, sizeof(float));

	for(;i<al;){
		scanf("%f", &p[i]);
		i=i+1;
	};
	i=0;
	for(;i<al;){
		printf("%f ", p[i]);
		i=i+1;
		};
	soma=0;	
	i=0;
	for(;i<al;){
		soma=soma+p[i];
		i=i+1;
	};
	printf("\n");
	soma=soma/al;
	printf("%f", soma);
	free(p);

}
