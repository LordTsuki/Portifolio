#include <stdio.h>
#include <stdlib.h>

int main()
{
int i;
float num,menor; //menor variavel
for(i=0;i<=4;i++)
  	{
  		printf("\nDigite o %i numero: ",i+1);
  		scanf("%f", &num);
  		fflush(stdin);
  		if(i==0 || num<menor)
  			menor=num;
	  }
	  printf("\nMenor valor digitado = %.2f\n\n",menor);
	  return 0;
}
