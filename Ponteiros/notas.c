#include <stdio.h>
#include <stdlib.h>

#define QTDE_NOTAS 5

int main()
{
    int *notas;
    notas = malloc(QTDE_NOTAS * sizeof(int)); 

    printf("---Cadastro de notas dos alunos---\n");

    for (int i=0; i < QTDE_NOTAS; i++) {
        printf("Digite uma nota: ");
        scanf("%i", &notas[i]);
    }

    int novoTamanhoVetor = QTDE_NOTAS + 1;
    notas = realloc(notas, novoTamanhoVetor * sizeof(int));

    printf("Adicione mais uma nota: ");
    scanf("%i", &notas[5]);

    for (int i=0; i < novoTamanhoVetor; i++) {
        printf("A nota eh: %i\n", notas[i]);
    }

    free(notas);

    return 0;
}