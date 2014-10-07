/*
DESCRIÇÃO: Este programa lê os dígitos da placa de um determinado
           veículo e imprime o dia da semana em que este veículo
           não pode circular de acordo com as regras do rodízio
           em São Paulo.
ENTRADA:   Quatro números inteiros representando cada dígito da
           placa.
SAÍDA:     Uma cadeia de caracteres indicado o respectivo dia da
           da semana (Segunda-feira, Terça-feira, Quarta-feira,
           Quinta-feira, Sexta-feira)

AUTOR: <nome aluno> RGA: <2014...>
*/

#include <stdio.h>

int main()
{
    /**/
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(d == 1 || d == 2)
        printf("Segunda-feira\n");
    if(d == 3 || d == 4)
        printf("Terca-feira\n");
    if(d == 5 || d == 6)
        printf("Quarta-feira\n");
    if(d == 7 || d == 8)
        printf("Quinta-feira\n");
    if(d == 9 || d == 0)
        printf("Sexta-feira\n");


    return 0;
}
