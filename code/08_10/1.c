/*
DESCRIÇÃO:
Este Programa encontra o menor valor entre cinco números lidos do teclado.
ENTRADA:
Cinco números inteiros 'a', 'b', 'c', 'd', e 'e'.
SAÍDA:
O menor número lido.

Questões (responda para você mesmo):
1) Simule este código com diferentes valores de a, b, c, d e e.
2) São necessárias cinco variáveis para a leitura dos cinco números?
   Crie uma versão deste programa utilizando o menor número de variáveis possível.
3) É possível resolver este problema utilizando menos comparações?
4) Complete este código para imprimir também o maior número lido.


Autor: <aluno> RGA: <rga>
*/
#include <stdio.h>

int main()
{
    int a, b, c, d, e; /*Estes nomes de variáveis são apropriados? Por que?*/
    int menor;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if(a < b)
        menor = a;
    else
        menor = b;

    if(menor > c) /*Por que não é preciso comparar 'c' com a e b? */
        menor = c;

    if(menor > d)
        menor = d;

    if(menor > e)
        menor = e;

    printf("Menor n.o digitado: %d", menor);

    return 0;
}
