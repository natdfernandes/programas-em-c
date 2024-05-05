#include <stdio.h>
int main()
{
    int controle, qtdeNumeros;
    float soma=0.0, numero;
    printf("Entre com a quantidade de numeros a serem somados:");
    scanf("%d", &qtdeNumeros);
    controle=1;
    while (controle<= qtdeNumeros)
    {
        printf("Digite o %do. numero: ", controle);
        scanf("%f",&numero);
        soma= soma + numero;
        controle= controle + 1;
    }
    printf("o resultado da soma e` %g\n",soma);
    return 0;
}