#include <stdio.h>
int main () {
	int m[10];
	int n, teste, difer;
	n=0;
	teste=0;
	
	scanf("%d", &m[n]);
	difer=0;
	teste=m[n+1];
	n=n+1;
	for(;n<10;){
		scanf("%d", &m[n]);
		
		if(teste-m[n]<0){
			teste=-teste;
			m[n]=-m[n];
			if(difer<teste-m[n]){
				difer=teste-m[n];
			};
			if(difer<0){
				difer=-difer;
			};
			teste=-m[n];
			n=n+1;
			teste=-m[n+1];
		}
		else{
			if(difer<teste-m[n]){
				difer=teste-m[n];
			};
			if(difer<0){
				difer=-difer;
			};
			
			n=n+1;
			teste=m[n+1];
		};
		
	};
	printf("%d", difer);
	
}
