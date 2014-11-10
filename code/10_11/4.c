#include <stdio.h>

/*Comente*/
long fat(int n)
{
    long f = 1;
    for(; n > 1; n--)
        f = f * n;

    return f;
}

/*
    Considere o programa que calcula a soma
    dos quatro primeiros série:
        -1/2! + 2/4! - 3/6! + 4/8!....
    Entenda e comente este código.
*/
int main()
{
    int i, p = 2, sinal = -1;
    double soma = 0.0;

    for(i = 1; i <= 4; i++) {
        soma = soma + (i+0.0)/(fat(p)*sinal);
        p = p + 2;
        sinal *= -1;
    }

    printf("%lf", soma);


    return 0;
}
