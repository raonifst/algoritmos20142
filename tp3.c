#include <stdio.h>

#define NM 3
#define NA 10
#define M 100

void mostraMatriz(int ma[NM][NA], int n, int m)
{
    int i, j;
    for(i = 0; i < n; i++) {
            for(j = 0; j < m; j++) {
                printf("%d ", ma[i][j]);
            }
            printf("\n");

    }
}

void preencheBaseDados(int baseDadosImpressoes[NM][NA])
{
    int i, j;
    for(i = 0; i < NM; i++) {
            for(j = 0; j < NA; j++) {
                baseDadosImpressoes[i][j] = i*j;
            }
    }
}

int casamento(int musica[], int amostra[], int n)
{
    int i, j, k;

    for(i = 0; i < (NA-n); i++) {
        for(k = 0; k < n && musica[i+k] == amostra[k]; k++) ;

        if(k == n) return 1;
    }
    return 0;
}

int main()
{
    //int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 9}, b[]={1,2};
    //printf("%d ", casamento(a,b,2));
    int baseDadosImpressoes[NM][NA];
    char baseDadosMusicas[NM][M] = {"Hey", "Hey Brother	", "You"};

    int amostra[100], n, i;
    preencheBaseDados(baseDadosImpressoes);
    //mostraMatriz(baseDadosImpressoes, NM, NA);

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &amostra[i]);

    for(i = 0; i < NM && casamento(baseDadosImpressoes[i], amostra, n) != 1; i++) ;

    if(i < NM)
        printf("Musica: %s\n", baseDadosMusicas[i]);
    else
        printf("Musica nao encontrada\n");


    return 0;
}
