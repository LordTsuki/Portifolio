#include <stdlib.h>
#include <stdio.h>

float converte(float t);
int main()
{
    float c,f;
    printf("\nDigite a temperatura em Fahrenheit: ");
    scanf("%f",&f);
    fflush(stdin);
    c=converte(f);
    printf("\nA temperatura = %.2f\xF8 C\n\n", c);
    system("pause");
}

float converte(float t)
{
    float celsius;
    celsius=(t-32)/1.8;
    return celsius;
}