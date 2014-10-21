/*
* Descrição: Programa que imprime os n primeiros números ímpares.
*
* Entrada: Um número inteiro n que indica a quantidade de números a
*          a serem impressos.
*
* Saída: Os n primeiros números ímpares em ordem crescente.
*
* Questões:
* 1) Simule o código para vários valores de n.
*/
#include <stdio.h>

int main()
{
    int i, n, p;

    scanf("%d", &n);

    p = 1;
    for(i = 1; i <= n; i++)
    {
        printf("%02d ", p);
        p = p + 2;
    }

    return 0;
}
