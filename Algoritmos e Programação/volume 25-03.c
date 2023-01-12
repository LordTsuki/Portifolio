#include <stdio.h>
#include <stdlib.h>
#include <math.h> //pow = potencia  (base, expoente)
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "portuguese");
	const float PI= 3.14159; 
	float raio, altura, volume;
	printf("\nDigite o valor da altura:\t");
	scanf("%f", &altura);
	printf("\nDigite o valor do raio:\t");
	scanf("%f", &raio);
	volume = PI * pow(raio, 2) * altura;  //pow = potencia  (base, expoente)
	
	printf("\nO volume do cilindro é de %.2f metros \n", volume);
	system("pause");
	return 0;
}
