#include <stdio.h>

int main(){
    float nProva1, nProva2, nProva3, Pmedia, nTrabalho1, nTrabalho2, Tmedia, Fmedia;
	printf("Digite as notas das provas: ");
    	scanf("%f %f %f", &nProva1, &nProva2, &nProva3);
    	Pmedia=((2*nProva1)+(3*nProva2)+(3*nProva3))/8;
	printf("Digite as notas dos trabalhos: ");
		scanf("%f %f", &nTrabalho1, &nTrabalho2);
		Tmedia=(nTrabalho1+nTrabalho2)/2;
		Fmedia=((7*Pmedia)+(3*Tmedia))/10;
	printf("A sua média final é %f", Fmedia);
}
