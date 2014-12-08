/*
 * Questões:
 1) Entenda e comente o código a seguir.
 2) Crie uma versão deste programa que não
    utiliza um vertor auxiliar.
*/
#include <stdio.h>

int main()
{
    int t, i;
    char palavra[100], inv[100];

    scanf("%s", palavra);

    t = 0;
    while(palavra[t] != '\0')
        t = t + 1;

    /*Qual o significado de t neste ponto?*/

    t = t - 1;
    i = 0;

    while(t >= 0)   {
        inv[i] = palavra[t];
        t = t - 1;
        i = i + 1;
    }

    inv[i] = '\0';

    /*Qual o significado de inv neste ponto?*/

    /*Altere o código a seguir para considerar a comparação
      de cadeias de caracteres de tamanhos diferentes. Crie
      outro programa e teste.*/
    i = 0;
    while(palavra[i] != '\0' && palavra[i] == inv[i])
        i = i + 1;

    if(palavra[i] == '\0')
        printf("SIM\n");
    else
        printf("NAO\n");

    return 0;
}
