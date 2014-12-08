/*
 *      90000002 - 2014/2
 *      Laboratório 01
 *
 *      Nome: < nome do aluno >
 *      RGA: < RGA do aluno >
 *
 *      Código fonte: ouro.c
 *
 *      O programa recebe informações sobre os tesouros existentes em 4
 *      ilhas, além do limite de carga de um navio, e determina, com base em
 *      um mapa, o caminho pelo qual deve-se passar para acumular o máximo
 *      possível de riquezas.
 *
 *      -Entrada: Quantidade de tesouro em cada ilha, além da capacidade de
 *      carga do navio.
 *      -Saída: O valor máximo de tesouro que é possível obter, além da
 *      descrição do melhor caminho.
 */

#include <stdio.h>

int main(){
    int t1, t2, t3, t4;     /* Tesouros existentes em cada uma das 4 ilhas */
    int capacidade;         /* Capacidade máxima do navio */
    int max = 0;            /* Máximo tesouro obtido */
    int melhorCaminho = 0;  /* O melhor caminho já encontrado */

    scanf("%d %d %d %d %d", &t1, &t2, &t3, &t4, &capacidade);

    /* Caminho 1: 1, 3, F */
    if( ((t1 + t3) > max) && ((t1 + t3) <= capacidade) ){
        melhorCaminho = 1;
        max = t1 + t3;
    }

    /* Caminho 2: 1, 3, 2, 4, F */
    if( ((t1 + t2 + t3 + t4) > max) && ((t1 + t2 + t3 + t4) <= capacidade) ){
        melhorCaminho = 2;
        max = t1 + t2 + t3 + t4;
    }

    /* Caminho 3: 1, 3, 4, F */
    if( ((t1 + t3 + t4) > max) && ((t1 + t3 + t4) <= capacidade) ){
        melhorCaminho = 3;
        max = t1 + t3 + t4;
    }

    /* Caminho 4: 1, 4, F */
    if( ((t1 + t4) > max) && ((t1 + t4) <= capacidade) ){
        melhorCaminho = 4;
        max = t1 + t4;
    }

    /* Caminho 5: 1, 4, 2, 3, F  (Já coberto pelo Caminho 2) */

    /* Caminho 6: 1, 4, 3, F  (Já coberto pelo Caminho 3) */

    /* Caminho 7: 2, 3, F */
    if( ((t2 + t3) > max) && ((t2 + t3) <= capacidade) ){
        melhorCaminho = 7;
        max = t2 + t3;
    }

    /* Caminho 8: 2, 3, 1, 4, F  (Já coberto pelo Caminho 2) */

    /* Caminho 9: 2, 3, 4, F */
    if( ((t2 + t3 + t4) > max) && ((t2 + t3 + t4) <= capacidade) ){
        melhorCaminho = 9;
        max = t2 + t3 + t4;
    }

    /* Caminho 10: 2, 4, F */
    if( ((t2 + t4) > max) && ((t2 + t4) <= capacidade) ){
        melhorCaminho = 10;
        max = t2 + t4;
    }

    /* Caminho 11: 2, 4, 1, 3, F  (Já coberto pelo Caminho 2) */

    /* Caminho 12: 2, 4, 3, F  (Já coberto pelo Caminho 9) */


    printf("Tesouro: %d\n", max);

    /* Imprime o melhor caminho através de análise da variável coletada durante
     * os testes de caminhos possíveis */
    switch(melhorCaminho){
        case 0:
            printf("Caminho: F.\n");
            break;
        case 1:
            printf("Caminho: 1, 3, F.\n");
            break;
        case 2:
            printf("Caminho: 1, 3, 2, 4, F.\n");
            break;
        case 3:
            printf("Caminho: 1, 3, 4, F.\n");
            break;
        case 4:
            printf("Caminho: 1, 4, F.\n");
            break;
        case 7:
            printf("Caminho: 2, 3, F.\n");
            break;
        case 9:
            printf("Caminho: 2, 3, 4, F.\n");
            break;
        case 10:
            printf("Caminho: 2, 4, F.\n");
            break;
        default:
            printf("Erro! Não encontrou caminho.\n");
            break;
    }


    return 0;
}
