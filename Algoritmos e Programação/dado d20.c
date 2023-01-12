#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	srand(time(NULL));
	printf("%i \n", 1+(rand() %20)	);
	
	int valor;
	valor = rand()%21;
		
		printf("\n %i", valor);
	
			system("pause");
			return 0;
	}
