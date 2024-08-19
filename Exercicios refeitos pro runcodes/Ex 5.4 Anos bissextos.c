#include <stdio.h>

int main(){
	int amin, amax, inc;
	float ff;
	scanf("%d", &amin);
	scanf("%d", &amax);
	inc=amin;
	while(inc<=amax){
		if(inc!=0){
			if((inc%4==0 && inc%100!=0) || (inc%100==0 && inc%400==0)){
			ff=inc;
				printf("%f ", ff);
			}
	}
		inc=inc+1;
	}
}
