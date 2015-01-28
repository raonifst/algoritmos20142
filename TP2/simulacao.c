/*
 *      90000002 - 2014/2
 *      Laboratório 02
 *
 *      Nome: < nome do aluno >
 *      RGA: < RGA do aluno >
 *
 *      Código fonte: simulacao.c
 *
 *      O programa recebe informações sobre a quantidade de canoas em uma
 *      expedição fluvial e calcula a probabilidade de ao menos m delas
 *      chegarem em segurança no destino.
 *      Esta probabilidade é calculada várias simulações de expedições com
 *      n canoas. Cada simulada utilizando um gerador de números pseudo-aleatórios
 *      com probabilidade de 50% de sucesso e fracasso.
 *
 *      -Entrada: O número total de canoas, n, a quantidade mínima esperada de
 *                canoas, m,  e o número de repetições, nrepeticoes.
 *
 *      -Saída: Um valor real indicando a probabilidade de ao menos m canoas
 *              chegarem no destino em segurança.
 *
 */

#include <stdio.h>

/* Descrição: Esta função simula o comportamento de uma canoa em uma
 *            expedição fluvial. A probabilidade de uma canoa chegar
 *            ou não ao destino é de 50%.*
 *  Entrada: (não há).*
 *  Saída: A função devolve o valor 1 (um) se a canoa chegou ao destino.
 *         Caso contrário, o valor 0 (zero) é devolvido.
 */
int sucesso()
{
    // Código que gera uma sequencia pseudo-aleatória
    static unsigned long long int seed = 123456789;
    seed = (1103515245 * seed + 12345) % 2147483648;
    // Teste da probabilidade de a conoa chegar ao destino
    return seed >= 2147483648/2;
}

/* Descrição: Esta função simula uma expedição com n canoas.
 *            A função sucesso é utilizada para simular o
 *            comportamento de cada canoa.
 *  Entrada: Um número inteiro n indicando a quantidade de
 *           canoas em uma expedição.
 *  Saída: A função devolve o número de canoas que chegam em
 *         segurança em uma determinada expedição.
 */
int simulacao(int n)
{
    int i, canoasSeguranca = 0;

    for(i = 0; i < n; i++)
        if(sucesso() == 1) canoasSeguranca++;

    return canoasSeguranca;
}


int main()
{

    int i, n, m, nrepeticoes, canoasSeguras;
    float porcentagem = 0.0;

    scanf("%d %d %d", &n, &m, &nrepeticoes);

    //Calculando a porcentagem de expedições em que
    // ao menos m canoas chegaram em segurança
    for(i = 0; i < nrepeticoes; i++) {
        canoasSeguras = simulacao(n);
        if(canoasSeguras >= m) porcentagem++;
    }

    porcentagem *=  100.0/nrepeticoes;

    printf("P: %.2f%%.\n", porcentagem);

    return 0;
}
