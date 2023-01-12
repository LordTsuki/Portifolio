#include <stdio.h>
#include <stdlib.h>

int main()
{
int corsa;
float celta;
	for(corsa=1;corsa<4;corsa++)
	{
		printf("\nDigite um numero: ");
		scanf("%f", &celta);
		fflush(stdin);
			if(celta<0)
				printf("\nO numero %.2f \x82 negativo\n\n", celta);
			else
				printf("\nO numero %.2f nao \x82 negativo\n\n", celta);	
	}
	return 0;
}
