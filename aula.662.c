#include <stdio.h>
int main(void)
{
    int idade;        // int é valor inteiro
    float consciente; // float é numero real
    float resto;
    scanf("%d", &idade); // scanf é ler
    consciente = idade / 4;
    resto = idade % 4;
    printf("consciente: %.2f resto: %.2f", consciente, resto); //printf é mostrar
}