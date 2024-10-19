#include <stdio.h>

struct Aluno {
    char nome[20];
    char matricula[20];
    float nota1;
    float nota2;
    float media;
};

void imprimirAluno(struct Aluno aluno)
{
    printf("\n-----Informacoes do aluno-----\n");
    printf("\nAluno %s tem media %.2f\n", aluno.nome, aluno.media);
    
    if (aluno.media >= 6)
    {
        printf("\nO aluno esta aprovado\n");
    }
    else
    {
        printf("\nO aluno esta reprovado\n");
    }
}

void calcularMedia(struct Aluno aluno)
{
    aluno.media = (aluno.nota1 + aluno.nota2) / 2;
    imprimirAluno(aluno);
}

int main()
{
    struct Aluno alunos[3] = {
        {"Aluno 1", "ert45", 5.69, 3.49, 0},
        {"Aluno 2", "ui73e", 4.59, 8.9, 0},
        {"Aluno 3", "tu2w0", 9.89, 7.6, 0}
    };

    for (int i = 0; i < 3; i++)
    {
        
        calcularMedia(alunos[i]);
    }
    

    return 0;
}