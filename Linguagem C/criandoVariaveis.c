#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	int minhaIdade = 23;
	int maeIdade = 48; int paiIdade = 49; 
	
	printf("Minha idade é = %i.\n", minhaIdade);
    printf("Minha idade é = %i.\nPai idade = %i.\nMãe idade = %i.", minhaIdade, paiIdade, maeIdade);
	
	return 0;
}
