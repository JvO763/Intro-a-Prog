#include <stdio.h>
void main(){
	FILE *arq;
	char s[100], t[100];
	int x, y, h, g, j;
	x=0;
	y=0;
	j=0;
	
	if((arq=fopen("listadenomes.txt", "r+"))==NULL){
		printf("\nErro abrindo arquivo.\n");
	};
	
	fgets(s, 100, arq);
	printf("%s", s);
	printf("\n");
	setbuf(stdin, NULL);
	
	fgets(t, 100, stdin);
	
	
	for(x=0;x<100;x++){
		if(s[x]==NULL){
			j=x;
			x=103;
		
		};
	};
	
	x=0;
	
	for(x=0;x<100;x++){
		if(t[x]==NULL){
			y=x;
			x=103;
		
		};
	};
	
	x=0;
	h=0;
	g=0;
	
	for(;x<=j;){
		for(;h<=y;){
			if(s[x]==t[h]){
				
				g=g+1;
				
			};
			
			if(g==(y)){
				x=103;
				h=y+3;
				printf("\nachei");
			};
			
			h=h+1;
		
		};
		h=0;
		x=x+1;
	};
	
	fclose(arq);
	
}
