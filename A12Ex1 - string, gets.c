#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char str[100], tes[100];
	int y, x, cont, j;
	cont=0;
	j=0;
	y=0;
	x=0;
	gets(str);

for(;x<100;){
	if(str[x]==NULL){
		y=x;
		x=102;
	};
	x=x+1;
};
x=0;

for(;x<y;){
	if(str[x]==' '){
//		printf("hihi %d", x);
		cont=cont+1;
			for(;j<100;){
			if(str[x+1]!=' '){
				j=102;
				};
			x=x+1;
			};
	};
	x=x+1;
};
	cont=cont+1;
	printf("%d", cont);	
	
}
