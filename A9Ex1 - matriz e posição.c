#include <stdio.h>
int main(){
	int lin, col;
	scanf("%d %d", &lin, &col);
	int m[lin][col];
	//int m[3][3];
	int c,l;
	l=0;
	c=0;
	
	for(;l<lin;){
	//for(;c<3;){
		for(;c<col;){
	//	for(;l<3;){
			m[l][c]=(1+l)*(1+c);
			printf("%d ", m[l][c]);		
			c=c+1;
		};	
		printf("\n");
		c=0;
		l=l+1;
	};
	
	
	
	
}
