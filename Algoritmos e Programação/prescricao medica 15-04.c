#include <stdio.h>
#include <stdlib.h>

int main()
{
	char codigo;
	    scanf("%c", &codigo); //codigo=getche();
	switch(codigo)
    {
		case '1': case '2': printf("\nDescricao Diagnosticada: Virose\nMedicamento indicado: Descanso");
			break;
		case '3': case '5': printf("\nDescricao Diagnosticada: Dor de cabeca\nMedicamento indicado: Analgesico");
		    break;
		case '4': printf("\nDescricao Diagnosticada: Gripe\nMedicamento indicado: Vitamina C");
		    break;
		case '6': printf("\nDescricao Diagnosticada: Nao definida\nMedicamento indicado: Exames");
		    break;
		default: printf("\nCodigo invalido");
    }
    return 0;	
}
