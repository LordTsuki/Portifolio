#include <stdlib.h>
#include <stdio.h>

float marea(float a,float b); //marea = media
float bota_mais(float a, float b); //soma

main()
{
    float n1,n2,med;
    printf("\nDigite dois valores: ");
    scanf("%f %f",&n1, &n2);
    fflush(stdin);
    med=marea(n1, n2);
    printf("\nA media = %.2f\n\n", med);
}

float marea(float a,float b) //marea = media
{
    float m;
    m=bota_mais(a,b)/2;
    return m;
}//mÃ©dia

float bota_mais(float a, float b) //soma
{
    return (a+b);
}