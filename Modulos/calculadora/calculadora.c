#include "calculadora.h"

int soma(int n1, int n2)
{
    int rs = n1 + n2;
    return rs;
}

void subtracao(int n1, int n2)
{
    int sub = n1 - n2;
    printf("\nO resultado da subtracao e: %i\n", sub);
}

void multiplicacao(int n1, int n2)
{
    int rs = n1 * n2;
    printf("\nO resultado da multiplicacao e: %i\n", rs);
}