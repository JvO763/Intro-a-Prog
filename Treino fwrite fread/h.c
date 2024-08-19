#include <stdio.h>
int main(){
	char s[100], *t, *j, v[10], *i, h[100];
	int x;
	FILE *arq;
	t=&s;
	j=&v;
	i=&h;
	*i="jum";
	*t="ola guei";
	
	
	if((arq=fopen("text.txt", "r+"))==NULL){
		printf("BUGOU");
	};
	
	fseek(arq, 0, SEEK_SET);
		
	fwrite(t, sizeof(char), 100, arq);
	fwrite(i, sizeof(char), 100, arq);
	
	fseek(arq, 0, SEEK_SET);
	
	fread(j, sizeof(char), 100, arq);
	
	for(x=0;x<100;){
		if(j[x]!=' '){
		printf("%c", j[x]);
		
	};
	x=x+1;
	};


	fclose(arq);
	
}


