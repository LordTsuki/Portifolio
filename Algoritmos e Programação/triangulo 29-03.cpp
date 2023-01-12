#include <stdio.h>
#include<stdlib.h>

int main()
{
	float x, y, z;
	printf("\nDigite x y z :");
	scanf("%f %f %f", &x, &y, &z);
	if(x<y+z && y<y+z && z<y+x)
	{
	if(x==y && x==z)
	    printf("\nO triangulo eh equilatero\n");
	else
	    {
	    if(x==y || y==z || x==z)
	    printf("\nO triangulo eh isoceles\n");
        else
        printf("\nO triangulo eh escaleno\n");
		}
    }
	else
	printf("\nNao eh um triangulo seu mongol\n");
	return 0;
}
