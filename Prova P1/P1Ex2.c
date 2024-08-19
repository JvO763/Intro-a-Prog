#include <stdio.h>
int main(){
	float min, h, total, ph, pm;
	scanf("%f %f", &h, &min);
	pm=(360*min)/60;
	if(h>12){
		h=h-12;
	};

	ph=((360*h)/12)+(pm*30/360);
	if(ph>pm-(pm*30/360)){
		total=ph-pm;
	};
	if(ph<pm-(pm*30/360)){
		total=ph+360-pm;
		
	};
	
	if(ph==pm-(pm*30/360)){
		total=0;
	}
	

		
	
	printf("%f", total);
	
	
	
	
	
	
}
