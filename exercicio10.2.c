#include <stdio.h>

int main()
{
    int tamanho = 10;
    float vetor1[tamanho], vetor2[tamanho], vetor3[tamanho];
    char operacao;
    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite um número do vetor1[%d]: ", i);
        scanf("%f", &vetor1[i]);

        do
        {
            printf("Digite um número do vetor2[%d] diferente de zero: ", i);
            scanf("%f", &vetor2[i]);
        } while (vetor2[i] == 0);
    }
    getchar();
    printf("Digite a operação: [/,*,-,+] ");
    scanf("%c", &operacao);

    for (int i = 0; i < tamanho; i++)
    {
        switch (operacao)
        {
        case '/':
            vetor3[i] = vetor1[i] / vetor2[i];
            break;
        case '*':
            vetor3[i] = vetor1[i] * vetor2[i];
            break;
        case '+':
            vetor3[i] = vetor1[i] + vetor2[i];
            break;
        case '-':
            vetor3[i] = vetor1[i] - vetor2[i];
            break;
        default:
            printf("Opção invalida");
            return 0;
        }
        printf("\nvetor3[%d] = %.2f", i, vetor3[i]);
    }
}
