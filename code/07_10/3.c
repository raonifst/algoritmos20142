/*
DESCRIÇÃO: Este programa lê os dígitos da placa de um determinado
           veículo e imprime o dia da semana em que este veículo
           não pode circular de acordo com as regras do rodízio
           em São Paulo.

ENTRADA:   Um número inteiro representando os dígitos da placa.

SAÍDA:     Uma cadeia de caracteres indicado o respectivo dia da
           da semana (Segunda-feira, Terça-feira, Quarta-feira,
           Quinta-feira, Sexta-feira)

AUTOR: <nome aluno> RGA: <2014...>
*/

#include <stdio.h>

int main()
{
    /**/
    int n, d;
    scanf("%d", &n);

    d = n % 10;

    switch(d) {
        case 1:
            printf("Segunda-feira\n");
        break;
        case 2:
            printf("Segunda-feira\n");
        break;
        case 3:
            printf("Terça-feira\n");
        break;
        case 4:
            printf("Terça-feira\n");
        break;
        case 5:
            printf("Quarta-feira\n");
        break;
        case 6:
            printf("Quarta-feira\n");
        break;
        case 7:
            printf("Quinta-feira\n");
        break;
        case 8:
            printf("Quinta-feira\n");
        break;
        case 9:
            printf("Sexta-feira\n");
        break;
        case 0:
            printf("Sexta-feira\n");
        break;
    }



    return 0;
}
