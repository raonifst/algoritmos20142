/*
Questões:
1) Entenda e comente o código abaixo.
2) Olhe atentamente o trecho de código das linhas 53-56 e
    verifique a compatibilidade das dimensões das matrizes.
*/
#include <stdio.h>

void mostrarMatrizInteiros(int mat[100][100], int m, int n)
{
    int i, j;
    for(i = 0; i < m; i++)  {
        for(j = 0; j < n; j++)  {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int multiplicarMatrizesInteiros(int A[][100], int m, int n, int B[][100], int h, int g, int C[][100])
{
    int i, j, k;

    if(n != h || m > 100 || n > 100 || h > 100|| g > 100)
        return 0;

    for(i = 0; i < m; i++)
        for(j = 0; j < g; j++)  {
            C[i][j] = 0;
            for(k = 0; k < n; k++)
                C[i][j] += A[i][k]*B[k][j]; /*posicao (i,j) da matriz resultante*/
        }

    return 1;
}

int lerMatrizInteiros(int A[][100], int m, int n)
{
    int i, j;

    if(m > 100 || n > 100)
        return 1;

    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

}

int main()
{
    int A[100][100], B[100][100], C[100][100];

    lerMatrizInteiros(A, 3, 2)
    lerMatrizInteiros(B, 2, 3);
    multiplicarMatrizesInteiros(A, 3, 2, B, 2, 3, C);
    mostrarMatrizInteiros(C, 3, 3);


    return 0;
}

