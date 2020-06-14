#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *file;
	file = fopen("string2.txt", "a");
	
	if(file == NULL)
	{
	   printf("Arquivo não pode ser aberto")	;
	   getchar();
	   exit(1);
	}
	
	fprintf(file, "Primeira linha\n");
	
	char frase[] = "Segunda linha\n";
	fputs(frase, file);
	
	char caractere = '3';
	fputc(caractere, file);
	
	fclose(file);
	
	
	
	system("pause");
	return 0;
}
