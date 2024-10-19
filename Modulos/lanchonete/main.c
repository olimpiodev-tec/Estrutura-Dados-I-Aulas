#include <stdio.h>
#include <locale.h>
#include "lanche.h"

#define QTDE_LACHES 3

int main()
{
    setlocale(LC_ALL, NULL);

    struct Lanche lanches[QTDE_LACHES] = {
        {"X-Bacon", 34.99, "Muito bacon"},
        {"X-Egg", 27.99, "Leve e saboroso"},
        {"X-Tudo", 39.99, "Para matar sua fome"}
    };
    
    for (int i = 0; i < QTDE_LACHES; i++)
    {
        mostrarCardapio(lanches[i]);
    }

    return 0;
}