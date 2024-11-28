#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo = fopen("C:\\Users\\Moises\\Desktop\\GitHub\\Estrutura-Dados-I-Aulas\\Ponteiros\\pedagio.txt", "r");

    if (arquivo == NULL)
    {
        printf("Erro ao ler arquivo");
        return 0;
    }

    char linha[100];

    fgets(linha, 100, arquivo);

    while (fgets(linha, 100, arquivo) != NULL)
    {
        printf(linha);
    }
    
    fclose(arquivo);

    return 0; 
}