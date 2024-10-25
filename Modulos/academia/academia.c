#include <stdio.h>
#include "academia.h"

void relatorioSemanal(struct Pessoa pessoa)
{
    printf("\n###### Relatório Semanal de Exercícios Físicos###### \n");
    printf("\nPrezado %s siga a rotina abaixo para preservar sua saúde\n", pessoa.nome);
    
    for (int i=0; i < QTDE_EXERCICIOS; i++)
    {
        if (pessoa.idade >= pessoa.exercicios[i].idadeMinima) {
            printf("\n%s: você deve realizar\n", pessoa.exercicios[i].diaSemana);
            printf("\nExercício: %s\n", pessoa.exercicios[i].descricao);
            printf("\nTempo dedicação: %i \n", pessoa.exercicios[i].tempo);        
            printf("\n----------------------------------------------------------\n");
        }
        else
        {
            printf("\nO exercício %s você não pode realizar\n", pessoa.exercicios[i].descricao);
        }
    }        
}