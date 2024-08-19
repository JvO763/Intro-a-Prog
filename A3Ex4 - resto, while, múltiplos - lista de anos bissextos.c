#include <stdio.h>

int main(){
	int amin, amax, inc;
	printf("Insira o primeiro ano: ");
	scanf("%d", &amin);
	printf("Insira o segundo ano: ");
	scanf("%d", &amax);
	inc=amin;
		
	while(inc<=amax){
		
		if(inc!=0){
			if(inc%4==0&&inc%100!=0||inc%100==0&&inc%400==0){
			
				printf("%d \n", inc);
			
			};
	};
		
		inc=inc+1;
		
	};
}
