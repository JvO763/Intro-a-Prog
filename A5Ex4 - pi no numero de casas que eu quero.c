#include <stdio.h>
int main(){
	int teste, num;
	double resul, den, frac, den1;
	printf("Insira um numero. \n");
	scanf("%d", &num);
	frac=4;
	den=1;
	den1=-1;
	resul=0;
	
		while(num>teste){
			teste=teste+1;
			den1=den1*-1;
			
			if(den1>0){
				frac=(4/den);
				den=(den+2);
				resul=resul+frac;
				
			}
			else if(den1<0){
				frac=(4/den);
				den=(den+2);
				resul=resul-frac;
				
				
			};
			
		};
		printf("pi é proximo de %f.", resul);

	
	
}
