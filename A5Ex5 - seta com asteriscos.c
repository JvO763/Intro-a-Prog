#include <stdio.h>
int main(){
	int num, tes, tes1, num2, test1, test2;
	printf("Insira um numero. \n");
	scanf("%d", &num);

	num2=num-1;
	tes=1;
	tes1=1;
	test1=num;
	test2=num;
	
	while(tes<=num){
		while(tes1<=tes){
			printf("o ");
			tes1=tes1+1;
		};
		tes=tes+1;
		tes1=1;
		printf("\n");
	};
	
	tes=num-1;
	
	while(tes-1>=0){
		
		test1=test2;
		test1=test1-1;
		
		while(test1>0){
			printf("o ");
			test1=test1-1;
		};
		tes=tes-1;
		test2=test2-1;
		test1=test2;
		printf("\n");
	};
}
	
	

