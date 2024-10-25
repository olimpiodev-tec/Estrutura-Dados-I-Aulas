#include <locale.h>
#include "academia.h"

int main()
{
    setlocale(LC_ALL, NULL);

    struct Pessoa pessoa = {
        "Pessoa 01", 17, {
            {"caminhada", 30, "Segunda-feira", 15},
            {"corrida", 50, "Terça-feira", 14},
            {"pular corda", 20, "Quarta-feira", 13},
            {"bicicleta", 50, "Quinta-feira", 16},
            {"flexão", 10, "Sexta-feira", 18},
            {"levantamento peso", 20, "Sábado", 18},
            {"alongamento", 30, "Domingo", 18}
        }        
    };

    relatorioSemanal(pessoa);

    return 0;
}