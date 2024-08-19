#include <stdio.h>
int main(){
	int m[5][5], j[5][5];
	int num, lin, col, l, c, con, t;
	col=0;
	lin=0;
	l=0;
	c=0;
	con=0;
	srand(time(NULL));	
	
	for(;lin<5;){
		for(;col<5;){

		num = rand(); 
		num = num%100; 
		m[lin][col]=num;
		col=col+1;
	
		};
		lin=lin+1;
		col=0;
}


lin=0;
col=0;
for(;lin<5;){
		for(;col<5;){

		 t=m[lin][col];
		 for(;l<5;){
		 	for(;c<5;){
		 if(t==m[l][c]){
		 	con=con+1;
		 	
		 };
		 c=c+1;
		}
		l=l+1;
		c=0;
	}
		 if(con>1){
		 	l=0;
		 	c=0;
		 	num=0;
		 	num=rand(); 
			num=num%100; 
			m[lin][col]=num;
			con=0;
		 	
		 }
		 else{
		con=0;
		col=col+1;
		l=0;
		c=0;
		}
		};
		lin=lin+1;
		col=0;
		l=0;
		c=0;
}
lin=0;
col=0;
printf("\n");
	for(;lin<5;){
		for(;col<5;){

		printf("%d ", m[lin][col]);
		col=col+1;
	
		};
		printf("\n");
		lin=lin+1;
		col=0;
}

}
