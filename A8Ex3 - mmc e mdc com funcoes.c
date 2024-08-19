#include <stdio.h>
int resul;
int mdc(int a, int b, int c){
		int test, a1, b1, c1, z;
	test=1;
	resul=0;
	a1=0;
	b1=0;
	c1=0;
//	scanf("%d %d %d", &a, &b, &c);
	
	if((a>b&&a>c)){
		z=a;
	}
	else if((b>a&&b>c)){
		z=b;
	}
	else if((c>b&&c>a)){
		z=c;
	};

	while(test<=z){
		a1=a%test;
		b1=b%test;
		c1=c%test;
		if(a1==0){
			
			if(b1==0){
				if(c1==0){
			resul=test;
				};
			};
		};
		test=test+1;
	
	}
	return(resul);
}
int mmc(int m, int n, int o){
	int res1, res2, res3, res4, tes;
	if(m<=n){
		tes=2*n;
	}
	else if(n<m){
		tes=2*m;
	};
	
	res1=mdc(m, n, tes);
	res2=(m*n)/(res1);
	
	if(res2<=o){
		tes=2*o;
	}
	else if(o<res2){
		tes=2*res2;
	};	
	
	res3=mdc(res2, o, tes);
	res4=(res2*o)/(res3);
	return(res4);
}

int main(){
	int a2, b2, c2, result, res;
	scanf("%d %d %d", &a2, &b2, &c2);
	result=mdc(a2, b2, c2);
	res=mmc(a2, b2, c2);
	printf("%d %d", res, result);
	
	
	
}
