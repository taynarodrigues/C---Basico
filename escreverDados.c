#include <stdio.h>

int main(void){
	
	FILE *file;
	
	file = fopen("testeTaynaRodrigues.txt", "w");
	fprintf(file, "Treinando para gerar o arquivo txt de analise de algoritmo.");
	fclose(file);
	
	return 0;
}
