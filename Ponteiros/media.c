#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo = fopen("./notas.txt", "r");

    if (arquivo == NULL)
    {
        printf("Erro ao ler arquivo");
        return 0;
    }

    char linha[100];
    int raAluno = 0;
    int nota1 = 0;
    int nota2 = 0;

    fgets(linha, 100, arquivo);

    while (fgets(linha, 100, arquivo) != NULL)
    {
        int dados = sscanf(linha, "%i|%i|%i", &raAluno, &nota1, &nota2);

        if (dados)
        {
            int media = (nota1 + nota2) / 2;

            if (media >= 6) 
            {
                printf("A media eh: %i, aluno %i aprovado\n", media, raAluno);
            }
        }
    }
    
    fclose(arquivo);

    return 0; 
}