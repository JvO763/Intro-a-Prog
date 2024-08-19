#include <stdio.h>

//int area(int b, int h);
int area(int b, int h){
int res;
res=b*h/2;
return(res);
}

int main () {
	float resultado, b1, h1;
	scanf("%f %f", &b1, &h1);
	resultado=area(b1, h1);
	printf("%f", resultado);
	
}


//int area(int b, int h){
//int res;
//res=b*h/2;
//return(res);
//}
