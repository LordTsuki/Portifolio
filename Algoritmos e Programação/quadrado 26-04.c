#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main()
{
char op='s';
float lado,p,a;
while(toupper(op)=='S')	
	{
		printf("\nDigite o lado de um quadrado: ");
			scanf("%f", &lado);
			fflush(stdin);
				a=pow(lado,2);
				p=4*lado;
					printf("\nArea: %.2f\nPerimetro: %.2f\n",a,p);
					printf("\nDeseja continuar ?  [S]im ou [N]ao: ");
		scanf("%c", &op);
		fflush(stdin);
	}//while
	return 0;
} //main
