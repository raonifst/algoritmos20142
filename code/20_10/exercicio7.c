/*
* Exercício 7 - Segunda Lista de exercícios
*
* ENTRADA: Um número inteiro  que representa um valor em reais.
*
* SAÍDA: A menor quantidade de notas que somam este valor.
*
* RESTRIÇÃO: Assume-se que sempre há notas suficientes
* de 100, 50, 10, 5, 2 e 1.
*
*/
#include <stdio.h>

int main()
{
    int valor;
    scanf("%d", &valor);

    printf("%d notas de 100.\n", valor/100);
    valor = valor % 100;

    printf("%d notas de 50.\n", valor/50);
    valor = valor % 50;

    printf("%d notas de 10.\n", valor/10);
    valor = valor % 10;

    printf("%d notas de 5.\n", valor/5);
    valor = valor % 5;

    printf("%d notas de 2.\n", valor/2);
    valor = valor % 2;

    printf("%d moeda de 1.\n", valor);


    return 0;
}
