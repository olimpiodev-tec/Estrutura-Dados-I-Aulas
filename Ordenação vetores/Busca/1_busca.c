#include <stdio.h>
#include <locale.h>

/**
 * Função que faz a busca de um elemento dentro do vetor
 * Faz a varredura do maior para o menor
 * Retorna o índice do elemento, ou -1 caso não exista
*/
int busca(int numero, int vetor[], int qtdeElementosVetor)
{
    int k = qtdeElementosVetor - 1;
    int qtdeLoops = 0;

    printf("------------------------------------------------\n");

    while (k >= 0 && vetor[k] != numero) {
        printf("Passando pelo número: %d\n", vetor[k]);
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
    int vetor[10] = {45, 23, 908, 0, 456, 2, 43, 356, 1024, 9060};
    
    printf("---------------Algoritmo de busca---------------\n\n");
    printf("------Resultado da busca para número 89: %d ----\n\n", busca(89, vetor, 10));
    printf("------Resultado da busca para número 23: %d -----\n\n", busca(1024, vetor, 10));
    printf("------Resultado da busca para número 908: %d ---\n\n", busca(2, vetor, 10));
    
    return 0;
}