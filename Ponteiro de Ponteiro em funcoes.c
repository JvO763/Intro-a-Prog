#include <stdio.h>
#include <stdlib.h>

void func(int **vet){
	
	*vet=(int **)malloc(10*sizeof(int));
	
}

int main(){
	int v[10], **p, *x, s;
	func(*p);
	
}
