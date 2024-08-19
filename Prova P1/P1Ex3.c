#include <stdio.h>
int teste(float h, float l, float p, float d){
int valor;
valor=0;

if(d<=l){
	if(d<=p){
		if(d<=h){
			valor=1;
		}
	}
};

return(valor);
};
int main(){
	float h1, l1, p1, d1;
	int resp;
	scanf("%f %f %f %f", &h1, &l1, &p1, &d1);
	
	resp=teste(h1, l1, p1, d1);
	printf("%d", resp);	
	
	
	
	
}
