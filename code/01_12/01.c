/*
 * Questões:
 1) Entenda e comente o código a seguir.

*/
#include <stdio.h>

int main()
{
    int i;
    char palavra[100];

    scanf("%s", palavra);

    i = 0;
    while(palavra[i] != '\0')
        i = i + 1;

    printf("A palavra digitada tem %d caracteres", i);

    return 0;
}
