#include <stdio.h>
#include "lanche.h"

void mostrarCardapio(struct Lanche lanche)
{
    printf("\n---------------------------------------\n");
    printf("\nLanche: %s\n", lanche.nome);
    printf("\nValor: %.2f\n", lanche.preco);
    printf("\nComentario: %s\n", lanche.comentario);
}