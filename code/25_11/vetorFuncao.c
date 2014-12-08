/*
Questões:
1) Entenda e comente o código abaixo.
2) Crie outras funções utilizando vetores.
   Considere, por exemplo, os algoritmos de
   ordenação vistos no curso.
*/
#include <stdio.h>

void mostrarVetorInteiros(int v[], int n);
int buscaSequencial(int v[], int n, int k);

int main()
{
    int v[] = {1, 2, 3, 4};
    int k;

    /* Descomente estas linhas e teste a função de busca
    printf("%d\n", buscaSequencial(v, 4, 4));
    printf("%d\n", buscaSequencial(v, 4, 5));
    */

    scanf("%d", &k);

    if(!buscaSequencial(v, 4, k))   {
        printf("O numero %d NAO esta no vetor ", k);
        mostrarVetorInteiros(v, 4);
    } else {
        printf("O numero %d esta no vetor ", k);
        mostrarVetorInteiros(v, 4);
    }


    return 0;
}

void mostrarVetorInteiros(int v[], int n)
{
    int i;
    printf("[ ");
    for(i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("]\n");
}

int buscaSequencial(int v[], int n, int k)
{
    int i;
    for(i = 0; i < n && v[i] != k; i++) ;
    return !(i == n);
}
