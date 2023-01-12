#include <stdio.h>

int main()
{
	int C, F, FC;
	scanf("%i %i %i", &C, &F, &FC);
	if(C*FC<=F)
		printf("S\n");
	else
		printf("N\n");
	
	return 0;
}
