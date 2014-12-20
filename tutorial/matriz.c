#include <stdio.h>

float maior_valor_matriz(float M[100][100], int m, int n)
{
    int i, j;
    float maior = M[0][0];

    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            if(maior < M[i][j])
                maior = M[i][j];

    return maior;
}

int main()
{
    float M[100][100];
    int i, j, m, n;

    scanf("%d %d", &m, &n);

    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%f", &M[i][j]);

    printf("Maior Valor da Matriz: %f", maior_valor_matriz(M, m, n));

    return 0;
}
