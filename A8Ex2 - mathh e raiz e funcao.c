#include <math.h>
#include <stdio.h>

float raiz(float a){
	double r;
	r=sqrt(a);
	return(r);	
}

int main(){
	float x, y, xi, yi, resul, soma;
	scanf("%f %f %f %f",&x,&y,&xi,&yi);
	soma=((xi-x)*(xi-x))+((yi-y)*(yi-y));
	resul=raiz(soma);
	printf("%f", resul);



}






