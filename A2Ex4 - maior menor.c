#include <stdio.h>

int main(){
    int num1, num2, num3;
    printf("Insira tres valores: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
	if(num1>num2&&num1>num3&&num2>num3){
		printf("%d < %d < %d", num3, num2, num1);
	};
	if(num1>num2&&num1>num3&&num3>num2){
		printf("%d < %d < %d", num2, num3, num1);
	};
	if(num2>num1&&num2>num3&&num1>num3){
		printf("%d < %d < %d", num3, num1, num2);
	};
	if(num2>num1&&num2>num3&&num3>num1){
		printf("%d < %d < %d", num1, num3, num2);
	};
	if(num3>num2&&num3>num1&&num2>num1){
		printf("%d < %d < %d", num1, num2, num3);
	};
	if(num3>num2&&num3>num1&&num1>num2){
		printf("%d < %d < %d", num2, num1, num3);
	};
	}
