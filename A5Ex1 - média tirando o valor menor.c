#include <stdio.h>
int main(){
	float p1, p2, p3, t1, t2, pt, tt;
	printf("Insira a nota das provas 1, 2 e 3 e depois dos trabalhos 1 e 2. \n");
	scanf("%f %f %f %f %f", &p1, &p2, &p3, &t1, &t2);
	
	if((p1>=p2)&&(p2>=p3)||(p2>=p1)&&(p1>=p3)){
		pt=(p1+p2)*70/2;
	}
	
	else if((p1<=p2)&&(p2<=p3)||(p1<=p3)&&(p3<=p2)){
		pt=(p3+p2)*70/2;
	}
	
	else if((p2<=p1)&&(p1<=p3)||(p2<=p3)&&(p3<=p1)){
		pt=(p3+p1)*70/2;
	};
	tt=30*(t1+t2)/2;
	printf("\n A Media desse aluno foi %f.", (pt+tt)/100);
}
