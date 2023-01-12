#include <stdio.h>
#include <stdlib.h>

void leitura(float *p, int q);
int busca_maior(float *p, int q);
void imprime(float *p, int pos);
main()
{
    int qtde, pos;
    float vet[10];

    do
    {
        printf("\nQtde elementos - max.10: ");
        scanf("%i", &qtde);
        fflush(stdin);
    } while (qtde < 1 || qtde > 10);
leitura(vet,qtde);
pos=busca_maior(vet, qtde);
imprime(vet,pos);
}//Main

void leitura(float *p, int q)
{
    int i;
    for (i = 0; i < q; i++, p++)
    {
        printf("\nVet[%i] = ", i);
        scanf("%f", p);
        fflush(stdin);
    }//For
}//Read
int busca_maior(float *p, int q)
{
    int i, pos;//1st elemente position
    float maior=*p;//1st element content
    p++;//Point to 2nd element
    for (i = 0; i < q; i++, p++)
    {
        if(maior<*p)
        {
            maior=*p;
            pos=i;
        }//If
    }//For
return pos;
}// Great Search

void imprime(float *p, int pos)
{
    printf("\nO maior valor = %.2f - position %i\n\n", *p, (*p+pos));
}
