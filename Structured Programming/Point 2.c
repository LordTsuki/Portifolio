#include <stdio.h>

void leitura(float *p, int q);
void resultante(float *pa, float *pb, float *pc, int q);

main()
{
    int qtde;
    float a[10], b[10], c[10];

    printf("\nSoma 2 vetores");
    do
    {
        printf("\nQtde de elementos - max.10: ");
        scanf("%i", &qtde);    
        fflush(stdin);
    }
    while(qtde<1 || qtde>10);
    printf("\nLeitura - vetor a: ");
    leitura(a, qtde);
    printf("\nLeitura - vetor b: ");
    leitura(b, qtde);
    resultante(a,b,c,qtde);
    system("cls");
    printf("\nImprime - vetor a:");
    imprime(a,qtde);
    printf("\nImprime - vetor b:");
    imprime(b,qtde);
    printf("\nImprime - vetor c:");
    imprime(c,qtde);
}// Main

void leitura(float *p, int q)
{
    int i;
    for(i=0;i<q;i++,p++)
    {
        printf("\nVet[%i] = ", i);
        scanf("%f", p);
        fflush(stdin);
    }// For
}// Read

void resultante(float *pa, float *pb,float *pc, int q)
{
    int i;
    for(i=0;i<q;i++,pa++,pb++,pc++)
    *pc=*pa+*pb;
}// Result

void imprime(float *p,int q)
{
    int i;
    for(i=0;i<q;i++,p++)
    {
        printf("\nVet[%i] = %.2f", i,*p);
    }
}// Print