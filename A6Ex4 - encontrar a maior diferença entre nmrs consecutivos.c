#include <stdio.h>
int main () {
	int m[10];
	int n, teste, difer;
	n=0;
	teste=0;
	
	printf("Escreva os numeros. \n");
	scanf("%d", &m[n]);
	difer=0;
	teste=m[n];
	n=n+1;
	
	for(;n<10;){
		scanf("%d", &m[n]);
		
		if(m[n]-teste<0){
			teste=-teste;
			m[n]=-m[n];
			if(difer<m[n]-teste){
				difer=m[n]-teste;
			};
			if(difer<0){
				difer=-difer;
			};
			teste=-m[n];
			n=n+1;
		}
		else{
			if(difer<m[n]-teste){
				difer=m[n]-teste;
			};
			if(difer<0){
				difer=-difer;
			};
			teste=m[n];
			n=n+1;
		};
		
	};
	printf("%d", difer);
	
}
