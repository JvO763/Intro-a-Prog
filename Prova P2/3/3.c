#include <stdio.h> //padrao 
#include <stdlib.h> //alocacao dinamica
#include <string.h> //strings

int main(){
	FILE *arq;
	
	char s[100], a[10], b[10], *p;
	
	int x, y, y1, y2, x1, x2, cont, globa, globb;
	globa=0;
	globb=0;


if((arq=fopen("texto.txt","r+"))==NULL){
	printf("bugou");
	exit(0);

};

	fgets(s, 100, arq);
	printf("%s", s);
	printf("\n");
	fgets(a, 10, stdin);
	fgets(b, 10, stdin);




for(x=0;x<50;x++){	
	if(s[x]==NULL){
//	printf("acabou em %d", x);
	y=x;
	x=100;
	};
};

for(x=0;x<10;x++){	
	if(a[x]==NULL){
//	printf("acabou em %d", x);
	y1=x;
	x=100;
	};
};

for(x=0;x<10;x++){	
	if(b[x]==NULL){
//	printf("acabou em %d", x);
	y2=x;
	x=100;
	};
};

for(x=0;x<y;x++){	
	if(s[x]==a[0]){
		for(x1=0;x1<y1;x1++){
			if(a[x1]==s[x+x1]){
				cont=cont+1;
			//	printf("%d", cont);
				
				
			};
				
		};
				if(cont==(y1-1)){
				globa=globa+1;
				cont=0;
		//		printf("soma total de a: %d", globa);
			}
			else{
			cont=0;
			};
	};

};

for(x=0;x<y;x++){	
	if(s[x]==b[0]){
		for(x2=0;x2<y2;x2++){
			if(b[x2]==s[x+x2]){
				cont=cont+1;
			//	printf("%d", cont);
				
				
			};
				
		};
				if(cont==(y2-1)){
				globb=globb+1;
				cont=0;
		//		printf("soma total de b: %d", globb);
			}
			else{
			cont=0;
			};
	};

};

printf("%d %d", globa, globb);
	
		
	
	
	
}
