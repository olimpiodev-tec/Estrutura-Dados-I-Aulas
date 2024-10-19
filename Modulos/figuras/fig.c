#include "fig.h"
#include <stdio.h>

void calculaCirculo(float raio)
{
    float area = 3.14 * raio * raio;
    printf("\nA area do circulo e: %.2f\n", area);
}

void calculaTriangulo(float base, float altura)
{
    float area = (base * altura) / 2;
    printf("\nA area do triangulo e: %.2f\n", area);
}