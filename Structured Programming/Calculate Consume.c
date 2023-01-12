#include <stdlib.h>
#include <stdio.h>

float calculaConsumo(float km, float l);

main (){
	float distancia, volume, consumo;
	printf("\nDigite a distancia (km) e o volume (litros): ");
	scanf("%f %f", &distancia, &volume);
	fflush(stdin);
	//Chamada
	consumo=calculaConsumo(distancia, volume);
	printf("\nConsumo medio = %.2f km/L\n", consumo);
	system("pause");
}
float calculaConsumo(float km, float l){
	
	return (km/l);
}
