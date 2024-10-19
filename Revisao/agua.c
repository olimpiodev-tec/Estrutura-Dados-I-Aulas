#include <stdio.h>

int main()
{
    printf("\nCalculadora de consumo de agua\n");    

    int qtdePessoas = 0;
    printf("\nQuantas pessoas moram na casa? \n");
    scanf("%i", &qtdePessoas);

    int tempo = 0;
    int consumo = 0;

    for (int i = 0; i < qtdePessoas; i++)
    {
        int idade = 0;
        printf("\nQual a idade da %i pessoa? \n", i+1);
        scanf("%i", &idade);

        if (idade <= 10)
        {
            tempo += 3;
            consumo += 18;
        }
        else if (idade > 10 && idade <= 18)
        {
            tempo += 5;
            consumo += 30;
        }
        else if (idade > 19 && idade <= 25)
        {
            tempo += 7;
            consumo += 42;
        }
        else if (idade > 25)
        {
            tempo += 4;
            consumo += 24;
        }        
    }

    float valorTotal = consumo * 0.60;
    printf("\nO total gasto com agua R$ %.2f\n", valorTotal);
    
    return 0;
}