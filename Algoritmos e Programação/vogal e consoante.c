#include <stdio.h>
#include <stdlib.h>

int main()
{
	char celta;
printf("\nDigite uma letra: ");
	scanf("%c", &celta);
fflush(stdin); 
    if(celta=='a' ||celta=='e' ||celta=='i' ||celta=='o' ||celta=='u')
printf("\nA letra \x82 vogal\n\n");
    else
printf("\nA letra \x82 consoante\n\n");
return 0;
}
