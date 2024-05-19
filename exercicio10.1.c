#include <stdio.h>
int main()
{
    int vetor1[10], vetor2[10], vetor3[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Digite um número do vetor1[%d]: ", i);
        scanf("%d", &vetor1[i]);

        printf("Digite um número do vetor2[%d]: ", i);
        scanf("%d", &vetor2[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        vetor3[i] = vetor1[i] + vetor2[i];
        printf("\nvetor3[%d] = %d", i, vetor3[i]);
    }
}
