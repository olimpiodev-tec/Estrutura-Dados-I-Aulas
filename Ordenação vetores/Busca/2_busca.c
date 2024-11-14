#include <stdio.h>
#include <locale.h>
#include <string.h>

struct Carro {
    char modelo[20];
    int ano;
};

/**
 * Função que faz a busca de um elemento dentro do vetor
 * Faz a varredura do maior para o menor
 * Retorna o índice do elemento, ou -1 caso não exista
*/
int busca(int anoCarro, struct Carro vetorCarros[], int qtdeElementosVetor)
{
    int k = qtdeElementosVetor - 1;
    int qtdeLoops = 0;

    printf("------------------------------------------------\n");

    while (k >= 0 && vetorCarros[k].ano != anoCarro) {
        printf("Passando pelo número: %d\n", vetorCarros[k]);
        qtdeLoops++;
        k -= 1;
    }
    printf("Qtde de loops: %d \n", qtdeLoops);
    printf("------------------------------------------------\n");
    return k;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    struct Carro vetorCarros[3];

    strcpy(vetorCarros[0].modelo, "Escort Hobby");
    vetorCarros[0].ano = 1992;

    strcpy(vetorCarros[1].modelo, "Fusca ");
    vetorCarros[1].ano = 1991;
    
    
    printf("---------------Algoritmo de busca---------------\n\n");
    printf("------Resultado da busca para número 89: %d ----\n\n", busca(89, vetor, 10));
    printf("------Resultado da busca para número 23: %d -----\n\n", busca(1024, vetor, 10));
    printf("------Resultado da busca para número 908: %d ---\n\n", busca(2, vetor, 10));
    
    return 0;
}