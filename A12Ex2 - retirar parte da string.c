#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char str[100], tes[100];
	int y, x, j;
	char tirar;
	j=0;
	y=0;
	x=0;
	gets(str);
	scanf("%c", &tirar);

for(;x<100;){
	if(str[x]==NULL){
		y=x;
		x=102;
	};
	x=x+1;
};
x=0;
for(;x<y;){
	if(str[x]==tirar){
		j=x;
//		printf("%d ", j);
		for(;j<y;){
		str[j]=str[j+1];	
		j=j+1;
		x=0;
		};
		j=0;
	
	}
	else x=x+1;
//	printf("%d ", x);
	
};
	x=0;
	for(;x<y;){
		printf("%c", str[x]);
		x=x+1;			
	};
	
};




	

