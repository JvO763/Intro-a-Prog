#include <stdio.h>
int main(){
	int an, bn, total, teste;
	printf("Insira um numero. \n");
	scanf("%d", &teste);
	an=1;
	total=0;
	bn=an;
	
	printf("0 ");
	if(teste>1){
		printf("1 ");
	};
	while(teste>total){
		total=total+an;
		an=bn;
		bn=total;
		printf("%d ", total);
		
	}
	
	
	
	
}
