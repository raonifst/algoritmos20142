/*
* Questões:
* 1) Entenda e comente o código a seguir.
* 2) Simule o código para vários valores de m e n.
*/
#include <stdio.h>

int main()
{
    int p, i, j, m, n, an, k;

    scanf("%d %d", &m, &n);

    p = 1;
    for(j = 1; j <= m; j++) {

        if( (j % 2) != 0)   {
            for(i = 1; i <= n; i++) {
                printf("%02d ", p);
                p = p + 2;
            }
            printf("\n");
        } else{

            p = p + (2*n);
            an = p - 2;
            for(k = 1; k <= n; k++) {
                printf("%02d ", an);
                an = an - 2;
            }

            printf("\n");
        }

    }

    return 0;
}
