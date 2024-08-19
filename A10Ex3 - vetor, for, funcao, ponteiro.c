#include <stdio.h>

int main(){
	int m[20], p[20], i[20];
	int n, par, impar;
	n=0;
	par=0;
	for(;n<20;){
		p[n]=0;
		n=n+1;
		
	}
	
	n=0;
	for(;n<20;){
		i[n]=0;
		n=n+1;
		
	}
	
	n=0;
	for(;n<20;){
		scanf("%d", &m[n]);
		n=n+1;
		
	}
	
	
	n=0;
	for(;n<20;){
		if(m[n]%2==0){
		par=par+1;	
			
		};
		n=n+1;
		
	}
	impar=20-par;
		n=0;	
	for(;n<20;){
		if(m[n]%2==0){
			p[n]=m[n];
		}
		else{
			i[n]=m[n];
		};
		n=n+1;
	}
	
	n=0;
	for(;n<20;){
		printf("%d", p[n]);
		n=n+1;
	}
	printf("\n%d", par);
	printf("\n");
	n=0;
	for(;n<20;){
		printf("%d", i[n]);
		n=n+1;
	}
	printf("\n%d", impar);	
	
	
	
}
