#include <stdio.h>

int main()
{
    int q, i, aswner[2], num[5], *p_num;

    p_num = num; // Inicializing

    do
    {
        printf("Type a element quantity: ");
        scanf("%i", &q);
    } while (q<=0 || q>5);
    
    printf("Reading elements of vector: \n");
    for (i=0; i<q; i++)
    {
        printf("%i\xA7 element - emd %i: \n", i+1, p_num);
        scanf("%i", p_num++);
    }

    p_num = num; //Resetting

    printf("Printing elements of vector: \n");
    for(i=0;i<q;i++)
    {
        printf("%i\xA7 elements - end %i = %i\n", i+1, p_num, *p_num);
    }
return 0;
}