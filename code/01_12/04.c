#include <stdio.h>

int main()
{
    int inicio, fim;
    char palavra[100];

    scanf("%s", palavra);

    for(fim = 0; palavra[fim] != '\0'; fim++) ;

    /*Qual o valor de fim neste ponto*/

    inicio = 0;
    fim = fim - 1;
    while(inicio < fim && palavra[inicio] == palavra[fim])  {
        inicio = inicio + 1;
        fim = fim - 1;
    }


    if(inicio == fim)
        printf("SIM");
    else
        printf("NAO");


    return 0;
}
