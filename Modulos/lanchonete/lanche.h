#ifndef LANCHE_H
#define LANCHE_H

struct Lanche {
    char nome[20];
    float preco;
    char comentario[200];
};

void mostrarCardapio(struct Lanche lanche);

#endif