#include <stdio.h>

void main() {
    float nota1;
    float nota2;
    float mediaFinal;

    scanf("%f", &nota1);
    scanf("%f", &nota2);

    mediaFinal =(nota1 + nota2)/2;

    printf("Media Final %.2f",mediaFinal);

}