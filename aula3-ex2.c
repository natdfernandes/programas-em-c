#include <stdio.h>
#include <math.h>

#define pi 3.1416

void main()
{
    // raio= 5 int
    // pi constante= 3.1416
    // variavel resultado float
    int raio = 5;
    float resultado;

    // calcular area do circulo
    resultado = pi * pow(raio, 2);
    printf("Área do Circulo %.2f", resultado);
}