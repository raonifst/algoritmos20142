/*
 * Questões:
 1) Entenda e comente o código a seguir.
 2) Teste o programa utilizando as instruções
    de leitura das linhas 16 e 17.
 3) Resolva o exercício descrito no pdf em anexo.
*/
#include <stdio.h>

int main()
{
    int i, cont;
    char frase[100];

    /*leitura de uma cadeia de caracteres contendo espaços*/
    fgets(frase, 100, stdin);
    /*scanf("%[^\n]%*c", frase)*/

    i = 0;
    cont = 0;
    while(frase[i] != '\0')
    {
        if(frase[i]==' ')
            cont = cont + 1;

        i = i + 1;
    }

    printf("A frase digitada possui %d espacos", cont);

    return 0;
}
