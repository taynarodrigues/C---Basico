#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	int minhaIdade = 23;
	int maeIdade = 48; int paiIdade = 49; 
	
	printf("Minha idade � = %i.\n", minhaIdade);
    printf("Minha idade � = %i.\nPai idade = %i.\nM�e idade = %i.", minhaIdade, paiIdade, maeIdade);
	
	return 0;
}
