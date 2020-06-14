#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL, "");
	
	FILE *file;
	file = fopen("grafo1.txt", "r");
	
	if(file == NULL){
		printf("Arquivo nao pode ser aberto\n");
		
		system("pause");
		return 0;
	}
	
	char c[1000];
	
	fscanf(file, "%s", c);// ler apenas uma string
	printf("%s\n\n", c);
	
	fclose(file);
	
	system("pause");
	return 0;
}
