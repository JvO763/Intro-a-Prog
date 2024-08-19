#include <stdio.h>
int main(){
	
	int m[20];
	int *p[20];
	int i[20];
	int *im[20];
	int n;
	
	n=0;
	
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
			p[n]=m[n];
		}
		else{
			i[n]=m[n];
		};
		n=n+1;
	}
		n=0;
	for(;n<20;){
		im[n]=&i[n];
		n=n+1;
	}
	
	
		n=0;
	for(;n<20;){
		printf("%d", p[n]);
		n=n+1;
	}

	printf("\n");
	n=0;
	
	for(;n<20;){
		printf("%d", *im[n]);
		n=n+1;
	}


	
	

}
