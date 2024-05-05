#include <stdio.h>
int main()
{
    int exercicio;
    printf("Escolha o exercicio para testar: (1 ou 5):\n");
    scanf("%i", &exercicio);

    if (exercicio == 1)
    {
        exercicio1();
    }
    else if (exercicio == 5)
    {
        exercicio5();
    }
    else
    {
        printf("Valor invalido!");
    }
}

void exercicio1()
{
    int numero1;
    int numero2;
    int resultado;
    int multiplicacao;

    scanf("%i", &numero1);
    scanf("%i", &numero2);

    resultado = numero1 + numero2;
    multiplicacao = resultado * numero1;
    printf("%i\n", resultado);
    printf("%i\n", multiplicacao);
}

void exercicio5()
{
    float quantidademinima;
    float quantidademaxima;
    float estoquemedio;

    scanf("%f", &quantidademinima);
    scanf("%f", &quantidademaxima);

    estoquemedio = (quantidademinima + quantidademaxima) / 2;

    printf("%f", estoquemedio);
}
