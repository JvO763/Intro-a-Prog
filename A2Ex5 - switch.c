#include <stdio.h>

int main(){
	int val1, val2, ad, sub, mult, div;
	char op;
	scanf("%d %c %d",&val1,&op,&val2);
	ad=val1+val2;
	sub=val1-val2;
	mult=val1*val2;
	div=val1/val2;
	
	
		switch(op){
			case'+': printf("%d %c %d = %d", val1, op, val2, ad); break;
			case'-': printf("%d %c %d = %d", val1, op, val2, sub); break;
			case'*': printf("%d %c %d = %d", val1, op, val2, mult); break;
			case'/': printf("%d %c %d = %d", val1, op, val2, div); break;
		}
}
