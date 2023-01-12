#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int caractere;
		caractere=getche();
	if(caractere>=97 && caractere<=122)
		printf("\nO caractere %i e minusculo", caractere);
	if(caractere>=65 && caractere<=90)
		printf("\nO caractere e maiusculo");
	if(caractere>=48 && caractere<=57)
		printf("\nO caractere e um numero");
	if(caractere>=32 && caractere<=47 || caractere>=58 && caractere<=64 || caractere>=91 && caractere<=96)
		printf("\nO caractere e especial");
	
	return 0;
}
