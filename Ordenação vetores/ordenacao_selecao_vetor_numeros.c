#include <stdio.h>

#define QTDE_ITENS 4

int main()
{
    // 46, 15, 91, 59
    // 15, 46, 59, 91
    int numeros[QTDE_ITENS] = {46, 15, 91, 59};
    int i, j; // variáveis para controle das repetições 
    int indiceMenorValor; // armazena índice do número com menor valor
    int armazenaTemporario; // armazena o número temporário para troca
    int contador = 0;
    
    for (i=0; i < QTDE_ITENS; i++)
    {
        indiceMenorValor = i;

        for (j=i+1; j < QTDE_ITENS; j++)
        {
            if (numeros[j] < numeros[indiceMenorValor])
            {
                indiceMenorValor = j;
            }      
            contador++;      
            
        }
        armazenaTemporario = numeros[i];
        numeros[i] = numeros[indiceMenorValor];
        numeros[indiceMenorValor] = armazenaTemporario;
        contador++;
    }
    
    printf("Rodou %d vezes \n", contador);
        
    for (int i=0; i < QTDE_ITENS; i++)
    {
        printf("Vetor [%d] = %d \n", i, numeros[i]);
    }

    return 0;
}