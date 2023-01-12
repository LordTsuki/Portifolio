#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,num,cont=0;  //contadora=cont foi incializada com zero
for(i=0;i<5;i++)
	{
		printf("\nDigite o %i numero: ", i+1);
		scanf("%i", &num);
		fflush(stdin);
		if(num%2==0)
			cont++;
	}
printf("\nQuantidade de numeros pares = %i\n",cont);
return 0;
}
