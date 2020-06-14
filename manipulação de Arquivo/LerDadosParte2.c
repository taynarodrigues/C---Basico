#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL,"");
	
	FILE *file;
	file = fopen("string2.txt", "r");
	
	if(file == NULL){
		printf("Não foi possível abrir o arquivo.\n");
		getchar(); //pausar
		exit(0); //sair do programa.
	}
	
	//criar variável
	char frase[100];
	
	//Retornar o contéudo do arquivo de texto, enquanto o delimitador for diferente de Null, interrompe o ciclo while
	while(fgets(frase, 100, file) != NULL){ // função fgets ler até o final, e encontrar a quebra da última linha.
		printf("%s", frase)	;
	}
	
	fclose(file);
	
	printf("\n");
	system("pause");
	return 0;
}
