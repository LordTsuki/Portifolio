#include <stdio.h>
#include <stdlib.h>

int main()
{	int tempesta, temp;

	printf("\nQuanto esta a tempertaura ?\n");
	scanf("%i", &tempesta);
		for(temp= tempesta; temp<50; temp+= 5) //aumenta de 5 em 5
		{
			printf("\nAquecendo %i", temp);
			_sleep(500); //temporizador
			}
				for(temp= tempesta; temp>50; temp-= 5) //diminui de 5 em 5
				{
					printf("\nEsfriando %i", temp);
					_sleep(500); //temporizador
					}
			printf("\nEstabilizada em %i", temp);
	
	printf("\nFim do programa");
	return 0;
}
