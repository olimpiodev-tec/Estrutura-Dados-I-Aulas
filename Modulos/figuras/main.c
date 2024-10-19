#include <stdio.h>
#include "fig.h"

int main()
{
    printf("\nOla sou calculadora de figuras\n");
    printf("\nEscolha uma opcao do menu\n");
    
    int opcao = 0;
    printf("\n[1]-Circulo[2]-Triangulo\n");
    scanf("%i", &opcao);

    if (opcao == 1)
    {
        float raio = 0;
        printf("Digite o raio");
        scanf("%f", &raio);
        calculaCirculo(raio);
    }
    else if (opcao == 2)
    {
        calculaTriangulo(56.8, 349.7);
    }

    return 0;
}