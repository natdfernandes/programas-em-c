/*
int numero
for
if (numero%10==0)
*/

#include<stdio.h>
int main()
{
    int numero=1;
    for (numero=1;numero<=100;numero++)
    {
        if(numero%10==0)
        {
            printf("O numero %d, é multiplo de 10\n",numero);
        }
    }
}