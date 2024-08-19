#include <stdio.h>
int main(){
	int v[10], a, b, n;
	
//	for(;n<10;){
//		scanf("%d", &v[n]);
//		n=n+1;
//		
//	};
	scanf("%d %d %d %d %d %d %d %d %d %d ", &v[0], &v[1], &v[2], &v[3], &v[4], &v[5], &v[6], &v[7], &v[8], &v[9]);
	scanf("%d %d", &a, &b);
	n=0;
	for(;n<10;){
		if(v[n]==a){
			v[n]=b;
		};
		n=n+1;
		
	};
	n=0;
	for(;n<10;){
		printf("%d ", v[n]);
		n=n+1;
	};
	
	
	
	
}
