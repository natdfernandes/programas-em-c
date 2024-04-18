#include <stdio.h>
int main(void)
{
    char tipotemperatura;
    float temperatura;
    float celsius;
    float farenheit;
    printf("digite o tipo de temperatura: 'f' para farenheit 'c' celsius\n");
    scanf("%c", &tipotemperatura);
    printf("digite a temperatura\n");
    scanf("%f", &temperatura);
    if (tipotemperatura == 'f')
    {
        celsius = (temperatura - 32) * 5 / 9;
        printf("%.2fº C", celsius);
    }
    else
    {
        farenheit = (temperatura * 9 / 5) + 32;
        printf("%.2fº F", farenheit);
    }
}