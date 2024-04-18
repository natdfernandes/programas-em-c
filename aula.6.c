#include <stdio.h>
#include <math.h>

int main(void) {
  float entrada = 0;
  printf("informe um valor numerico:");
  scanf("%f", &entrada);
  printf("o valor absoluto de %f é %f", entrada, fabs(entrada));

  return 0;
}