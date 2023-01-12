#include <stdio.h>
#include <stdlib.h>

int main()
{
	int pacdope, qtda, ocvirose, ocgripe, ocdordecabeca, ocnaodefinida;
	ocvirose=ocgripe=ocdordecabeca=ocnaodefinida=0;
	
	char codigo;
		printf("Quantos atendimentos serao feitos ?");
		scanf("%i", &qtda);
			for(pacdope=1; pacdope<=qtda; pacdope++)
			{
				printf("\nAtendimento do paciente %i\n", pacdope);
				printf("\nCodigo");
					codigo = getche();
					switch(codigo)
    							{
									case '1': case '2': printf("\nDescricao Diagnosticada: Virose\nMedicamento indicado: Descanso");
														printf("Total de Viroses %i", ++ocvirose);
										break;
									case '3': case '5': printf("\nDescricao Diagnosticada: Dor de cabeca\nMedicamento indicado: Analgesico");
														printf("Total de Dor de Cabeca %i", ++ocdordecabeca);
									    break;
									case '4': printf("\nDescricao Diagnosticada: Gripe\nMedicamento indicado: Vitamina C");
														printf("Total de Gripe %i", ++ocgripe);
									   break;
									case '6': printf("\nDescricao Diagnosticada: Nao definida\nMedicamento indicado: Exames");
														printf("Total de Nao Diagnosticada %i", ++ocnaodefinida);
									    break;
									default: printf("\nCodigo invalido");
											--pacdope;
    								}
    							
				}	
			printf("\nRelatorio Diario\n");
			printf("===================");
			printf("\nQuantidade de ocorrencias de gripe %i Virose %i", ocvirose, ocgripe);
			printf("\nQuantidade de ocorrencias de dor de cabeca %i Nao definido %i", ocdordecabeca, ocnaodefinida);
		
		return 0;		
	}
