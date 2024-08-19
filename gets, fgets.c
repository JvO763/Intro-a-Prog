#include <stdio.h>

int main(){
	char x[20], y[20];
	int i;
	gets(x);				//gets pega ate a pessoa parar de digitar, ai ferra pq nosso vetor só tem 20 char
	fgets(y,20,stdin); 	//fgets pega ate o numero colocado "20"
	i=0;
	
	for(;i<20;){
	printf("%c", x[i]);
	i=i+1;
};
printf("\n");
i=0;
for(;i<20;){
	printf("%c", y[i]);
	i=i+1;
};

}
