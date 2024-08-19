#include <stdio.h>
int main(){
	int v[20];
	int s[20];
	int n, t, cont, a;
	n=0;
	t=0;
	a=0;
	cont=0;
	for(;n<20;){
		scanf("%d", &v[n]);
		n=n+1;
	};
	n=0;
	for(;n<20;){
		t=v[n];
		a=0;
		for(;a<20;){
			if(v[a]==t){
				cont=cont+1;
				s[a]=0;
			};
			a=a+1;
		};
		if(cont==1){
			printf("%d ", v[n]);
			s[n]=v[n];
			
		};
		cont=0;
		n=n+1;
	};
	n=0;
	printf("\n");
	for(;n<20;){
		printf("%d ", s[n]);
		n=n+1;
	};


};
