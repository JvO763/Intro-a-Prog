#include <stdio.h>
int main(){
	float comp, gas, dpeda, peda, custogas, total, nmrpeda;
	int inteiro;
	scanf("%f %f %f %f", &comp, &gas, &dpeda, &peda);
	
	custogas=comp*gas;
	nmrpeda=comp/dpeda;
	inteiro=nmrpeda;
	total=(inteiro*peda)+(custogas);
	printf("%f", total);
	
	
	
	
	
}
