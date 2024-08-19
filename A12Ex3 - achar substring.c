#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char str[100], tes[100];
	int ls, lt, x, y, j, t, l, o;
	char tirar;
	y=0;
	t=0;
	l=0;
	ls=0;
	lt=0;
	x=0;
	gets(str);
	gets(tes);

for(;x<100;){
	if(str[x]==NULL){
		ls=x;
		x=102;
	};
	x=x+1;
};
x=0;
for(;x<100;){
	if(tes[x]==NULL){
		lt=x;
		x=102;
	};
	x=x+1;
};
x=0;


x=0;
y=0;
o=lt;
j=1;
for(;x<ls;){
	if(str[x]==tes[0]){
		
		for(;j<o;){
			
			if(str[x+j]!=tes[0+j]){
			
				j=ls;
				t=0;
				l=0;
				
			}
			else if(str[x+j]==tes[0+j]){
			j=j+1;
			l=1;
			
			};
			
		};
		if(j!=lt){
			
			l=0;
			};
		j=1;	
		};

	
		x=x+1;
	};
	x=0;
if(lt==1){
	for(;x<ls;){
	if(str[x]==tes[0]){
	l=1;
	t=0;
	
	};
	x=x+1;
};
	
	
	
}

			if(t==0){
			printf("%d", l);
		};
}








