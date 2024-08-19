#include <stdio.h>
int main(){
	int v[10], i, *maior, *menor;
	
	i=0;
	for(;i<10;){
		scanf("%d", &v[i]);
		i=i+1;
		
	}
	i=0;
	maior=&v[0];
	for(;i<10;){
		if(v[i]<=v[i+1]){
			maior=&v[i+1];
		};
		i=i+1;
	
}

	i=0;
	menor=&v[0];
	for(;i<10;){
		if(v[i]>=v[i+1]){
			maior=&v[i+1];
		};
		i=i+1;
	
}

	printf("%d %d", *maior, *menor);
		
}
