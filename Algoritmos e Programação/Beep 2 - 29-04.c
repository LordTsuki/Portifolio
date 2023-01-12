#include <stdio.h>
#include <stdlib.h>

int main()
{
	//de 1 em 1 a frequência - até o 100
	char tecla;
do{
	
	tecla = getche();
	if (tecla == 'a')
     	Beep( 261, 500);
    else if (tecla == 's')
    	Beep( 293, 500);
    else if (tecla == 'd')
    	Beep( 329, 500);
    else if (tecla == 'f')
    	Beep( 349, 500);
    else if (tecla == 'g')
    	Beep( 392, 500);
    else if (tecla == 'h')
    	Beep( 440, 500);
    if (tecla == 'j')
    	Beep( 493, 500);

	}while(tecla!=27);	
	
	
	system("pause");
	return 0;
}
