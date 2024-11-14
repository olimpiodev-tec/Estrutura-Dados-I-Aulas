#include <stdio.h>
#include <locale.h>

int busca(int numero, int vetor[], int qtdeElementosVetor)
{
    int indiceProcurado = -1;
    int qtdeLoops = 0;

    printf("------------------------------------------------\n");

    for (int k = qtdeElementosVetor -1; k >= 0; k--)
    {
        printf("Passando pelo número: %d\n", vetor[k]);
        qtdeLoops++;

        if (vetor[k] == numero)
        {
            indiceProcurado = k;
        }
    }

    printf("Qtde de loops: %d \n", qtdeLoops);
    printf("------------------------------------------------\n");

    return indiceProcurado;    
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