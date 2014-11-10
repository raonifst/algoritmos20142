#include <stdio.h>

/*
Descrição: Função que calcula a potência base^expoente.

Entrada: Um número real que representa a base e um número inteiro
         que corresponde ao expoente.

Restrição: O expoente deve necessariamente ser um inteiro positivo

Saída:  Um número real com o resultado do cálculo da potência.
*/
float potip(float base, int expoente)
{
    int r = 1;
    for(; expoente > 0; expoente--)
        r = r*base;

    return r;
}


/*
Descrição: Função que calcula a potência base^expoente.

Entrada: Um número real que representa a base e um número inteiro
         que corresponde ao expoente.

Restrição: O expoente deve necessariamente ser um inteiro

Saída:  Um número real com o resultado do cálculo da potência.
*/
float poti(float base, int expoente)
{
    if(expoente >= 0)
        return potip(base, expoente);
    else
        return 1/potip(base,-expoente);
}

/*
Comente
*/
float pot(float base, float expoente)
{
    /*
      Escreva sua implementação aqui.
      Utilize o esquema de cálculo de raíz
      quadrada apresentado na lista de exercícios
      sobre comandos de repetição. */
    return poti(base,expoente);
}

int main()
{
    float a;
    int b;
    scanf("%f %d", &a, &b);
    printf("%.2f", pot(a,b));
    return 0;
}
