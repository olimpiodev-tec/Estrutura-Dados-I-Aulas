#ifndef ACADEMIA_C
#define ACADEMIA_C

#define QTDE_EXERCICIOS 7

struct Exercicio {
    char descricao[200];
    int tempo;
    char diaSemana[20];
    int idadeMinima;
};

struct Pessoa {
    char nome[20];
    int idade;
    struct Exercicio exercicios[QTDE_EXERCICIOS];
};

void relatorioSemanal(struct Pessoa pessoa);

#endif