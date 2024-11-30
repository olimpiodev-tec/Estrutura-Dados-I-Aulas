#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Pedagio {
    float totalValoresPagos;
    float totalValoresDescontados;
};


struct Pedagio pedagio;


void imprimirRelatorio()
{
    printf("----------Relatório de pagamentos dos pedágios----------\n");
    printf("Total de valores pagos: R$ %.2f\n", pedagio.totalValoresPagos);
    printf("Total de valores descontados: R$ %.2f\n", pedagio.totalValoresDescontados);
    printf("Saldo final do dia R$ %.2f\n", pedagio.totalValoresPagos - pedagio.totalValoresDescontados);
}


void lerArquivo()
{
    FILE *arquivo = fopen("pedagio.txt", "r");

    char linha[100];
    int cabine = 0;
    float valor = 0;
    float desconto = 0;

    fgets(linha, 100, arquivo);

    while (fgets(linha, 100, arquivo) != NULL)
    {
        sscanf(linha, "%i;%f;%f", &cabine, &valor, &desconto);
        pedagio.totalValoresPagos += valor;
        pedagio.totalValoresDescontados += desconto;
    }

    fclose(arquivo);
}

int main()
{
    setlocale(LC_ALL, NULL);
    printf("Seja bem vindo ao sistema que opera os semáforos da cidade\n");
    lerArquivo();
    imprimirRelatorio();

    return 0;
}
