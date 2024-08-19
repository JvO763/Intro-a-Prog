#include <stdio.h>
int main(){
	int v[5], *p, *r, *s, *t, *u, x;
	v[0]=1;
	v[1]=2;
	v[2]=3;
	v[3]=4;
	v[4]=5;
	
	p=&v;
	r=v;
	s=&v[0];
	t=&v[1];
	u=(v+1);	
	printf("\np\n");
	for(x=0;x<5;x++){
		
		printf("%d ", *(p+x));
		
	};
	printf("\nr\n");
	for(x=0;x<5;x++){
		
		printf("%d ", *(r+x));
		
	};
	printf("\ns\n");
	for(x=0;x<5;x++){
		
		printf("%d ", *(s+x));
		
	};
	printf("\nt\n");
	for(x=0;x<5;x++){
		
		printf("%d ", *(t+x));
		
	};
	printf("\nu\n");
	for(x=0;x<5;x++){
		
		printf("%d ", *(u+x));
		
	};
	
}
