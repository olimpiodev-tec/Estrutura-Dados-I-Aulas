#include <stdio.h>

struct Livro {
    char titulo[200];
    char autor[200];
    int qtdePaginas;
};

void imprimir(struct Livro livro)
{
    printf("\n-----Informacoes do livro-----\n");
    printf("\nAutor: %s\n", livro.autor);
    printf("\nTitulo: %s\n", livro.titulo);
    printf("\nQtde paginas: %i\n", livro.qtdePaginas);
}

int main()
{
    struct Livro livro1 = {
        "Criptografia e Segurança de Redes",
        "Willian Stallings",
        514
    };

    imprimir(livro1);

    struct Livro livro2 = {
        "Andre Backes",
        "Linguagem C completa e descomplicada",
        391
    };

    imprimir(livro2);

    return 0;
}