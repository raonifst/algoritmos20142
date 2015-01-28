/*
Questões:
1) Entenda, comente e simule o código abaixo.
2) Tente responder as seguintes questões:
  a) Qual o caso base da função repeticao?
  b) Como é realizada a divisão dos subproblemas
     e a combinação de suas soluções?
*/
#include <stdio.h>

int repeticao(int v[], int n)
{
    if(n == 1) return 0;
    return v[n-1] == v[n-2] || repeticao(v, n-1);
}

int main()
{
    int v[] = {1,2,3,4};
    printf("%d", repeticao(v,4));
    return 0;
}
