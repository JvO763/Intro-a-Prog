#include <stdio.h>

int main(){
	float maior, menor, teste, soma, total;
		printf("Digite a nota: \n");
		scanf("%f", &teste);
		maior=0;
		menor=0;
		soma=0;
		total=0;
	while(teste>=0){
		total=total+1;
		soma=soma+teste;
		if(teste>=5){
			maior=1+maior;
		};
		
		if(teste<5){
			menor=menor+1;
		};
		
		scanf("%f", &teste);
		
	};
	
		printf("Tivemos %f notas menores que 5 e %f notas maiores ou iguais a 5.\n\nA media geral foi de %f.\n\nE a porcentagem de alunos com nota igual ou superior a 5 eh %f porcento.", menor, maior, soma/total, (maior*100)/(menor+maior));}
