#include <stdio.h>
int main(){
	float a, b, c, x, y, z;
	int qx, qy, qz, total;
	scanf("%f %f %f %f %f %f", &x, &y, &z, &a, &b, &c);
	x=x/a;
	qx=x;
	y=y/b;
	qy=y;
	z=z/c;
	qz=z;
	total=qz*qy*qx;
	printf("%d", total);
	
	
	
	
	
}
