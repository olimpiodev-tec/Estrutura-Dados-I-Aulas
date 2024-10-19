#include <stdio.h>

void classificaImc(float imc)
{
if (imc < 18.5)
    {
        printf("Classificado como baixo peso");
    }
    else if (imc >= 18.5 && imc <= 24.9)
    {
        printf("Classificado como peso normal");
    }
    else if (imc >= 25.0 && imc <= 29.9)
    {
        printf("Classificado como sobrepeso");
    }
    else if (imc >= 30.0 && imc <= 34.9)
    {
        printf("Obesidade Grau I");
    }
    else if (imc >= 35.0 && imc <= 39.9)
    {
        printf("Obesidade Grau II");
    }
    else if (imc > 39.9)
    {
        printf("Obesidade Grau III");
    }
}

int main()
{
    int peso = 0;
    float altura = 0;

    printf("\nOla sou a calculadora de IMC\n");
    
    printf("Qual seu peso? ");
    scanf("%i", &peso);

    printf("Qual sua altura? ");
    scanf("%f", &altura);

    float imc = peso / (altura * altura);

    classificaImc(imc);

    return 0;
}