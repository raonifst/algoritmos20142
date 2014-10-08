/*
DESCRIÇÃO:
O programa recebe informações sobre os pedágios existentes em 5
cidades (A, B, C, D e E) e determina, com base em um mapa, o
caminho pelo qual quatro pessoas, partindo cidades A, B, C e D,
devem passar para chegar na cidade E, gastando o mínimo possível
com pedágios.

ENTRADA:
Valor do pedágio nas cidades A, B, C, D e E.

SAÍDA:
O melhor caminho a ser seguido para sair das cidades A, B, C e D
e chegar em E.

Questões:
1) Complete o código.
2) Simule o código com diferentes valores.
3) Imprima também o número a ser pago com pedágios.
*/


#include <stdio.h>

int main()
{
    int pedagioA, pedagioB, pedagioC, pedagioD, pedagioE;

    scanf("%d %d %d %d %d", &pedagioA, &pedagioB, &pedagioC, &pedagioD, &pedagioE);

    /*Caminho partindo da cidade A*/
    if((pedagioD+pedagioB) < (pedagioC))
        printf("Ana deve seguir o caminho: A, D, B e E");
    else
        printf("Ana deve seguir o caminho: A, C e E");

    /*Complete aqui*/

    return 0;
}
