#include <stdio.h>

int main(void)
{
    float nota1, nota2, nota3, media = 0;
    // printf("Nota1: %f \nNota2: %f \nMedia: %f\n", nota1, nota2, media);
    printf("\nInforme uma nota 1: ");
    scanf("%f", &nota1);
    printf("Informe uma nota 2: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    printf("Média: %.2f", media);
    // uma linha de comentário
    if (media >= 7)
        printf("\nAprovado");
    else
    {
        if (media < 5)
            printf("\nReprovado");
        else
        {
            printf("\nRecuperação");
            /* se media estiver entre 5.0 e 6.9
               o aluno faz uma prova para
               recuperacao. A nova nota será
               somada com a maior nota e se
               a nova media for maior ou igual
               a 7.0 o aluno será aprovado,
               senão está reprovado apos a
               recuperação
            */
            printf("\nInforme a nota da recuperação: ");
            scanf("%f", &nota3);

            if (nota1 > nota2)
                media = (nota1 + nota3) / 2;
            else
                media = (nota2 + nota3) / 2;

            if (media >= 7)
                printf("\nAprovado");
            else
                printf("\nReprovado após recuperação");

            printf("\nMédia: %.2f", media);
        }
    }

    return 0;
}
