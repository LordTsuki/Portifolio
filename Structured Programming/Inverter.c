#include<stdio.h>
#include<string.h>

int main()
{
    char texto[80], aux[80];

    printf("Digite uma frase:");
    gets(texto);
    //Chamada
    minuscula_s(texto);
    inverteString(texto, aux);
    printf("Resultado: %s", aux);
    return 0;
}

void minuscula_s(char s[80])
{
    int i, tam=strlen(s);

    for(i=0;i<tam;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]+=32;
        }
    }
}

char maiuscula(char letra)
{
    if(letra>='a' && letra <='z')
    {
        return (letra-=32);
    }
}

void inverteString(char s[80], char aux[80])
{
    int i, j, tam=strlen(s);

    for(i=tam-1,j=0   ;i>=0;   i--,j++)
    {
        if(s[i+1]==' ' || j==0)
        {
            aux[j]=maiuscula(s[i]);
        }
        else
        {
            aux[j]=s[i];
        }
    }
    aux[j]='\0'; // Finalizar a string
}