#include <stdio.h>
int main(){
	int  v[10];
	int n, t, save;
	n=0;
	t=0;
	
	for(;n<10;){
		scanf("%d", &v[n]);
		n=n+1;
	};
	n=0;
	
	for(;t<9;){
		n=0;
		for(;n<10;){
			if(v[n]>=v[n+1]){
				save=v[n];
				v[n]=v[n+1];
				v[n+1]=save;
			}
			
			n=n+1;
		}
		
		
		t=t+1;
	};
	n=0;
	t=0;
	
	for(;n<10;){
		printf("%d ", v[n]);
		n=n+1;
	};	
};
