/*
- variaveis numero = 0, maiorNumero = 0
- fazer: // (do)
    - ler(numero)
    - se(numero > maiorNumero)
        - maiorNumero = numero
- enquanto(numero != 0) // (while)
- escrever(maiorNumero)
*/
#include<stdio.h>
int main()
{
    float numero=0, maiorNumero=0;
    do
    {
        printf("Entre com um numero: ");
        scanf("%f",&numero);
        if (numero > maiorNumero)
        {
            maiorNumero = numero;
            printf("É o novo maior numero\n");
        } else{
            printf("Não é o maior numero\n");
        }
        
    } while(numero !=0);
    printf("O maior numero é %.2f",maiorNumero);
}