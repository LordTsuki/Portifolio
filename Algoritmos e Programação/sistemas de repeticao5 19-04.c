#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x,y;  //for aninhado
	for(x+1;x<=10;x++)
	{
	 	printf("\nTabuada do %i \n\n",x);
	 		for(y=1;y<=10;y++)
	 		printf("%i x %i = %i\n",x,y,x*y);
	 	system("pause");
	}
	return 0;
}
