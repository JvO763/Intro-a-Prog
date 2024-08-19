#include <stdio.h>
int func(float *pa, float *dec, float *in){
	float n;
	n=0.0;
	*in=0.0;
	*dec=0.0;
	for(;n!=1.5;){
		if((n<=*pa)&&(n+1>*pa)){
			*in=n;
			*dec=*pa-n;
			n=1.5;
		}
		else{
			n=n+1.0;
		};
		
		
		
	};
}
int main(){
	float x, dec, in;
	dec=0.0;
	in=0.0;
	scanf("%f", &x);
	
	func(&x, &dec, &in);
	
	printf("%f %f", in, dec);
	
	
	
	
	
	
	
	
}
