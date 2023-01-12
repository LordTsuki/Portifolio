#include <stdio.h>
#include <stdlib.h>

int main()
{
int freq;
char tecla;
	{
	tecla = getche();
	printf("\n %i - Do", tecla, tecla);
	if(tecla == 'A')	
		Beep(261,1000);
		}while(tecla == 'A');
			do
			{
			tecla = getche();
		printf("\n %i - Re", tecla, tecla);
		if(tecla == 'S')	
			Beep(293,1000);
			}while(tecla == 'S');	
				do
				{
				tecla = getche();
			printf("\n %i - Mi", tecla, tecla);
			if(tecla == 'D')	
				Beep(329,1000);
				}while(tecla == 'D');	
					do
					{
					tecla = getche();
				printf("\n %i - Fa", tecla, tecla);
				if(tecla == 'F')	
					Beep(349,1000);
					}while(tecla == 'F');	
						do
						{
						tecla = getche();
					printf("\n %i - Sol", tecla, tecla);
					if(tecla == 'G')	
						Beep(392,1000);
						}while(tecla == 'G');
							do
							{
							tecla = getche();
						printf("\n %i - La", tecla, tecla);
						if(tecla == 'H')	
							Beep(440,1000);
							}while(tecla == 'H');
								do
								{
								tecla = getche();
							printf("\n %i - Si", tecla, tecla);
							if(tecla == 'J')	
								Beep(493,1000);
								}while(tecla == 'J');
				
												
return 0;
}
