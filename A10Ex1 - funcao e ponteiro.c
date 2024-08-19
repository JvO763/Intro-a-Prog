#include <stdio.h>
int func(int *pa, int *pb){
//	int *pa, *pb;	
	int c;
	c=*pa;
	*pa=*pb;
	*pb=c;


	
};
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	
	func(&a, &b);
		
	printf("%d %d", a, b);
	
	
	
	
	
	
	
	
	
	
	
	
	
}
