/*
* Descrição: Programa que imprime os n primeiros números ímpares,
*            do maior para o menor.
*
* Entrada: Um número inteiro n que indica a quantidade de números a
*          a serem impressos.
*
* Saída: Os n primeiros números ímpares em ordem decrescente.
*
* Questões:
* 1) Simule o código para vários valores de n.
*/
#include <stdio.h>

int main()
{
    int an, n, k;

    scanf("%d", &n);

    an = 1 + (n-1)*2;
    for(k = 1; k <= n; k++) {
        printf("%d ", an);
        an = an - 2;
    }

    return 0;
}


