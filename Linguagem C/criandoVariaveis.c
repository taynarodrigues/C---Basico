#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	int minhaIdade;
	
	minhaIdade = 23;
	
	printf("Minha idade � = %i.\n", minhaIdade);
	
	return 0;
}
