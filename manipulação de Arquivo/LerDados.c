#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL, "");
	
	FILE *file;
	file = fopen("numero.txt", "r");
	
	/*Controle para verificar se o arquivo for nulo, e sair do programa! */
	if(file == NULL){
		printf("Arquivo não pode ser aberto\n");
		system("pause");
		return 0;
	}
	
	int x, y, z;
	
	fscanf(file, "%i %i %i", &x, &y, &z);
	
	printf("%i  %i  %i\n", x, y, z);
	
	fclose(file);
	
	system("pause");
	return 0;
}
