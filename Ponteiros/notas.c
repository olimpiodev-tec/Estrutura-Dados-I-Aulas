#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Cadastro das notas dos alunos\n");

    int qtdeNotasIniciais = 0;
    printf("Ola quantas notas deseja cadastrar? ");
    scanf("%i", &qtdeNotasIniciais);

    int *vetorNotas;
    vetorNotas = malloc(qtdeNotasIniciais * sizeof(int));

    for (int i=0; i < qtdeNotasIniciais; i++) {
        printf("Digite a %i uma nota: ", i+1);
        scanf("%i", &vetorNotas[i]);
    }

    int qtdeNotasAdd = 0;

    printf("Quantas notas deseja adicionar?");
    scanf("%i", &qtdeNotasAdd);

    int totalEspacos = qtdeNotasAdd + qtdeNotasIniciais;
    vetorNotas = realloc(vetorNotas, totalEspacos * sizeof(int));

    for (int z=qtdeNotasIniciais; z < totalEspacos; z++) {
        printf("Digite a %i uma nota: ", z+1);
        scanf("%i", &vetorNotas[z]);
    }
    
    free(vetorNotas);

    return 0;
}