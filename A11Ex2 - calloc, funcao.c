#include <stdio.h>
#include <stdlib.h>
int *j, y;
int sumup(int *v, int amt){
	int sum, x;
	x=0;
	
	for(;x<amt;){
		if(v[x]>=0){
			sum=sum+v[x];
		};
		x=x+1;
	};
	
	j=&y;
	*j=sum;
};



int main(){
	int *p;
	int i, nmr;
	i=0;
	p=(float *)calloc(nmr, sizeof(int));
	scanf("%d", &nmr);
	
	for(;i<nmr;){
		scanf("%d", &p[i]);
		i=i+1;
	};
	
	i=0;
	sumup(p, nmr);
	printf("%d", y);
	
}
