#include <stdio.h>


int main()
{
    int base, expoente, potencia;

    printf("Digite um calculo de potencia (b^e): ");
    scanf("%i^%i",&base,&expoente);

    potencia=calculaPotencia(base, expoente);

    printf("Potencia = %i",potencia);

    return 0;
}

int calculaPotencia(int b, int e)
{
    int i, resultado=1;
    for(i=1;i<=e;i++)
    {
        resultado*=b; //soma += valor -> soma=soma+valor
    }
    return resultado;
}