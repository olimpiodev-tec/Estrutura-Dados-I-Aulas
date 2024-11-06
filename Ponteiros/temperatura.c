#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_LINHA 100

int main()
{
    FILE *arquivo = fopen("C:\\Users\\Moises\\Desktop\\GitHub\\Estrutura-Dados-I-Aulas\\Ponteiros\\datalog.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 0;
    }
    
    char linha[TAMANHO_LINHA];
    char data[20];
    float temperatura;

    fgets(linha, TAMANHO_LINHA, arquivo);

    while (fgets(linha, TAMANHO_LINHA, arquivo) != NULL)
    {
        int dadosLidos = sscanf(linha, "%s %f", data, &temperatura);

        printf("Data: %s, Temperatura: %.2f\n", data, temperatura);
    }

    fclose(arquivo);
    

    return 0;
}