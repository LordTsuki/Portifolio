#include <stdio.h>

int main()
{
    int q=0, i, num[5], *p_num;
    char resp = 'Y';
    p_num = num; // Inicializing

    while(toupper(resp)=='Y' && q<5)
    {
        printf("%io Element: ", q+1);
        scanf("%i", p_num++);
        q++;
        printf("Wish to continue? (Y/N)\n");
        fflush(stdin);
        scanf("%c", &resp);
    }

    p_num = num;

    for(i=0;i<q;i++, p_num++)
    {
        printf("%io Element = %i\n", i+1,*p_num);
    }
return 0;
}