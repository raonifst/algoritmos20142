/*
Questões:
1) Entenda e comente o código abaixo.
2) Por que a função 'atribuirValorAMatrizInteiros' não retorna uma matriz
*/
#include <stdio.h>

/*Observe que a primeira dimensao pode ficar livre*/
void atribuirValorAMatrizInteiros(int mat[][3], int m, int n, int valor)
{
    int i, j;
    for(i = 0; i < m; i++)  {
        for(j = 0; j < n; j++)  {
            mat[i][j] = valor;
        }
    }
}

void mostrarMatrizInteiros(int mat[3][3], int m, int n)
{
    int i, j;
    for(i = 0; i < m; i++)  {
        for(j = 0; j < n; j++)  {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}


int main()
{
    int m[3][3];
    atribuirValorAMatrizInteiros(m, 3, 3, 0);
    mostrarMatrizInteiros(m, 3, 3);


    return 0;
}
