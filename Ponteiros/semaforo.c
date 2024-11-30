#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Semaforo {
    long int totalMinutosLigado;
    long int totalMinutosParado;
};

struct Semaforo semaforo;

void imprimirRelatorio()
{
    printf("----------Relatório do tempo dos semáforos----------\n");
    printf("Tempo que ficou parado em minutos: %i\n", semaforo.totalMinutosParado / 60);
    printf("Tempo que ficou funcionando em minutos: %i\n", semaforo.totalMinutosLigado / 60);
}


void lerArquivo()
{
    FILE *arquivo = fopen("semaforo.txt", "r");

    char linha[100];
    int semaforo_cod = 0;
    int status = 0;
    int minutos = 0;

    fgets(linha, 100, arquivo);

    while (fgets(linha, 100, arquivo) != NULL)
    {
        sscanf(linha, "%i|%i|%i", &semaforo_cod, &status, &minutos);

        if (status == 0)
        {
            semaforo.totalMinutosParado += minutos;
        }
        else if (status == 1)
        {
            semaforo.totalMinutosLigado += minutos;
        }
    }

    fclose(arquivo);
}

int main()
{
    setlocale(LC_ALL, NULL);
    printf("Seja bem vindo ao sistema que opera os semáforos da cidade\n");
    
    semaforo.totalMinutosLigado = 0;
    semaforo.totalMinutosParado = 0;

    lerArquivo();
    imprimirRelatorio();

    return 0;
}
