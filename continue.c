#include <stdio.h>
int main(){
	int j, n;
	n=1;
	scanf("%d", &j);
	for(;n<2;){
	if(j%n==0){
		printf("divisivel por %d", n);
		n=1+n;
		continue; //ele pula o loop todo
		printf("oi1"); //isso será ignorado
	}

	
	}
	
}

