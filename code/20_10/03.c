/*
* Descrição: Programa que imprime uma tabela de números ímpares com m
*            linhas e n colunas. Os números são impressos em ordem.
*
* Entrada: Dois números inteiros m e n que representam a quantidade
*          de linhas e números a serem impressos.
*
* Saída: m sequências com os n*m primeiros números ímpares.

* Questões:
* 1) Simule o código para vários valores de m e n.
* 2) Como você faria para imprimir os números com o seguinte
*    formato (para m = 3 e n = 4).
*
*    01 03 05 07
*    15 13 11 09
*    17 19 21 23
*
* 3) Qual a diferença
*
*/
#include <stdio.h>

int main()
{
    int i, j, n, m, p;

    scanf("%d %d", &m, &n);

    p = 1; /*AQUI*/
    for(j = 1; j <= m; j++) {

        for(i = 1; i <= n; i++) {
            printf("%02d ", p);
            p = p + 2;
        }
        printf("\n");
    }

    return 0;
}
