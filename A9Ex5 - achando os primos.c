#include <stdio.h>
int main () {
	int max, n, tes, cont;
	scanf("%d", &max);
	n=2;
	tes=1;
	cont=0;
	
	for(;n<=max;){
		tes=2;
		for(;tes<=n;){
		if(n%tes==0){
			cont=cont+1;
		};
		tes=tes+1;
		};
		if(cont==1){
		printf("%d ", n);
		};
		n=n+1;
		cont=0;
	}
	
	
	
	
}
