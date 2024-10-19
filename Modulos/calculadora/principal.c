#include <stdio.h>
#include "calculadora.h"

int main()
{
    printf("\nOla sou a calculadora IFSP\n");
    int num1 = 0;
    int num2 = 0;

    printf("\nDigite o primeiro numero: \n");
    scanf("%i", &num1);

    printf("\nDigite o segundo numero: \n");
    scanf("%i", &num2);

    int result = soma(num1, num2);
    printf("\nO resultado da soma e: %i\n", result);

    subtracao(num1, num2);

    multiplicacao(num1, num2);

    return 0;
}