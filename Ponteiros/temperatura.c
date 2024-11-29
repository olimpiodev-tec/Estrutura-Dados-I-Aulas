#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *arquivo = fopen("datalog.txt", "r");

    char linha[100];
    char data[30];
    float temperatura;
    float menorTemperatura;
    float maiorTemperatura;
    char menorData[30];
    char maiorData[30];
    int contador = 0;

    fgets(linha, 100, arquivo);

    while (fgets(linha, 100, arquivo) != NULL)
    {
        sscanf(linha, "%s %f", data, &temperatura);

        if (contador == 0)
        {
            menorTemperatura = temperatura;
            maiorTemperatura = temperatura;
        }
        else
        {
            if (temperatura < menorTemperatura)
            {
                menorTemperatura = temperatura;
                strcpy(menorData, data);
            }
            if (temperatura > maiorTemperatura)
            {
                maiorTemperatura = temperatura;
                strcpy(maiorData, data);
            }
        }
        contador++;
    }

    printf("Menor temperatura %.2f no dia %s\n", menorTemperatura, menorData);
    printf("Maior temperatura: %.2f no dia %s\n", maiorTemperatura, maiorData);
    

    fclose(arquivo);

    return 0;
}
