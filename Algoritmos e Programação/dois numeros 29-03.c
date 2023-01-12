#include <stdio.h>
#include <stdlib.h>

int main()
{
	float num1, num2;
    printf("Digite dois numeros: ");
	scanf("%f %f", &num1, &num2);
	    if(num1>num2)
	printf("\nO numero %.2f = maior\n",num1);
        else
	{
	if(num2>num1)
	    printf("\nO numero %f = maior\n", num2);
	else
	    printf("\nOs numeros sao iguais\n");
	}
	return 0;
}
