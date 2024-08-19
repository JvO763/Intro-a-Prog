#include <stdio.h>
int main(){
	
		float pa, n, d, i;
	n=0.0;
	i=0.0;
	d=0.0;
	pa=3.5;
	for(;n!=1.5;){
		if((n<=pa)&&(n+1>pa)){
			i=n;
			d=pa-n;
			n=1.5;
			printf("%f", n);
		}
		else{
			n=n+1.0;
			printf("%f", n);
		};
		
		
		
	}
	
	printf("%f %f", i, d);
}
	
	
	
	
	
	
	
	
	
	
	

