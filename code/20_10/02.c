/*
* Descrição: Programa que imprime m sequencias de números ímpares,
*            em linhas separadas. Cada linha contém os n primeiros
*            números ímpares.
*
* Entrada: Dois números inteiros m e n que representam a quantidade
*          de linhas e números a serem impressos.
*
* Saída: m sequências com os n primeiros números ímpares em cada.
*
* Questões:
* 1) Simule o código para vários valores de m e n.
* 2) Como você faria para imprimir os números com o seguinte
*    formato (para m = 3 e n = 4).
*
*    01 03 05 07
*    09 11 13 15
*    17 19 21 23
*
*/
#include <stdio.h>

int main()
{
    int i, j, n, m, p;

    scanf("%d %d", &m, &n);

    for(j = 1; j <= m; j++) {
        p = 1;
        for(i = 1; i <= n; i++) {
            printf("%02d ", p);
            p = p + 2;
        }
        printf("\n");
    }

    return 0;
}
