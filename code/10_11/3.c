#include <stdio.h>

long fat(int n)
{
    long f = 1;
    for(; n > 1; n--)
        f = f * n;

    return f;
}

int main()
{
    int i, p = 2;
    long soma = 0;

    for(i = 1; i <= 4; i++) {
        soma = soma + fat(p);
        p = p + 2;
    }

    printf("%ld", soma);


    return 0;
}
