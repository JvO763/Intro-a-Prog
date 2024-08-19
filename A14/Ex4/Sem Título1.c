#include <stdio.h>
void main(){
	
	FILE *arq;
	int s[6], l[5], x;
	x=0;
	
	if((arq=fopen("legal.txt", "r+"))==NULL){
		printf("BUGOU");
	};
	
	for(;x<5;){
	scanf("%d", &s[x]);
	x=x+1;
	setbuf(stdin, NULL);
	};
	
	x=0;
	
	
	
	fwrite(s, sizeof(int), 5, arq);
	
	fclose(arq);
	if((arq=fopen("legal.txt", "r+"))==NULL){
		printf("BUGOU");
	};
	
	fread(l, sizeof(int), 5, arq);
	
	x=0;
	printf("\n");
	for(;x<5;){
	printf("%d ", l[x]);
	x=x+1;
	setbuf(stdin, NULL);
	};
	
	
}
