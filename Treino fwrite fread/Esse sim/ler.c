#include <stdio.h>
			
	int main() {
	FILE *pf;
	
	float pi = 3.1415, pilido;
	
	if(!(pf = fopen("arquivo.bin", "wb"))) exit(1);
	
	fwrite(&pi, sizeof(float), 1,pf);
	fclose(pf);
	
	if(!(pf = fopen("arquivo.bin", "rb"))) exit(1);
	
	fread(&pilido, sizeof(float), 1,pf);
	printf("\nO valor de PI, lido do arquivo e': %.4f", pilido);
		
	fclose(pf); 
	return(0);
		
}
