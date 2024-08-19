#include <stdio.h>
			
	int main() {
	FILE *pf;
	
	float pi = 3.1415, pilido;
	
	if(!(pf = fopen("arquivo.bin", "wb"))) exit(1);
	
	if(fwrite(&pi, sizeof(float), 1,pf) != 1) {
		printf("Erro na escrita do arquivo!");
		exit(2); }
		fclose(pf);
		
	if(!(pf = fopen("arquivo.bin", "rb"))) exit(1);
	
	if(fread(&pilido, sizeof(float), 1,pf) != 1) {
		printf("Erro na leitura do arquivo!");
		exit(3); }
		printf("\nO valor de PI, lido do arquivo e': %.4f", pilido);
		fclose(pf); return(0);
		
}
