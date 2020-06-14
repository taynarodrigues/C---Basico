#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	
	int minhaIdade;
	
	minhaIdade = 23;
	
	printf("Minha idade é = %i.\n", minhaIdade);
	
	return 0;
}
