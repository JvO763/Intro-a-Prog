#include <stdio.h>
void main(){
	FILE *arq;
	char s[100], t[100];
	int x, y, h, g, j, r;
	x=0;
	y=0;
	j=0;
	r=1;
	
	if((arq=fopen("listadenomes.txt", "r+"))==NULL){ //r+ lê desde ocomeço, ou substitui, ou se posicionar o ssek_set pro final, ele escreve adicionando, já o w+, ao abrir, apaga o arq
		printf("\nErro abrindo arquivo.\n");
	};
	
	fgets(s, 100, arq);
	printf("%s", s);
	printf("\n");
	
	setbuf(stdin, NULL);
	scanf("%s", &t);
	setbuf(stdin, NULL);
	printf("%s", t);

	fseek(arq, 0, SEEK_SET);
	
	while(!feof(arq)){ 
		fscanf(arq, "%s", s);
		
		
		r=strcmp(&t, &s);
		
		
		if(r==0){
			printf("\n");
			printf("achei Bv");
			break; 
		};
	};
	
	
	

	
	
	fclose(arq);
	
}
