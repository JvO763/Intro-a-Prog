#include <stdio.h>

struct aluno{
	char nome[30];
	int NUsp;
	float MF; 
	
};

struct aluno a[3];
int main(){

	int x;
	int *ap, *rep, apr[3], repr[3];
	float *c, co[3];
	ap=&apr;
	rep=&repr;
	c=&co;

	for(x=0;x<3;x++){		
	
	fgets(a[x].nome, 30, stdin);
	setbuf(stdin, NULL);
	
	scanf("%d", &a[x].NUsp);
	setbuf(stdin, NULL);
	
	scanf("%f", &a[x].MF);
	setbuf(stdin, NULL);
	
//	printf("%s%d\n%f\n", a[x].nome, a[x].NUsp, a[x].MF);
	
	};
	
	x=0;
	for(x=0;x<3;x++){
		
	*(c+x)=a[x].MF;
//	
//	printf("%f %f %f\n", *(c+x), co[x], a[x].MF);
	teste(c, x, ap, rep);
	printf("\n%d %d\n", apr[x], repr[x]);
	
	};
	
	printf("\nAprovados: ");
	x=0;
	for(x=0;x<3;x++){
		
	if(apr[x]==1){
		printf("\n%s%d\n%f\n", a[x].nome, a[x].NUsp, a[x].MF);	
	};	
	};
	
	printf("\nReprovados: ");
	x=0;
	for(x=0;x<3;x++){
		
	if(repr[x]==1){
		printf("\n%s%d\n%f\n", a[x].nome, a[x].NUsp, a[x].MF);	
	};	
	};
	
}

void teste(float *b, int n, int *v1, int *v2){
	
//	printf("\n b%f", *(b+n));
	if(*(b+n)>=5){
		*(v1+n)=1;
		*(v2+n)=0;
		

	};
	if(*(b+n)<5){
		*(v1+n)=0;
		*(v2+n)=1;

		
	};
	
	return 0;
}



