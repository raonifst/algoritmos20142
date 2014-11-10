#include <stdio.h>


/*
Comente aqui
*/
long fat(int n)
{
    long f = 1;
    for(; n > 1; n--)
        f = f * n;

    return f;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fat(n));

    return 0;
}
