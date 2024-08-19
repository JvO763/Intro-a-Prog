#include <stdio.h>

int main (){
	int num, test;
	test=0;
	scanf("%d", &num);
	test=0;
	if(num>0){
		for(;num>test;){
			test=test+1;
			if(num%test==0){
				printf("%d ", test);			
			}
		};
	}
}
