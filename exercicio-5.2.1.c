#include <stdio.h>

int main(void) {
  char letra;
  int numerointeiro;
  float numeroReal;

  scanf("%c", &letra);
  scanf("%d", &numerointeiro);
  scanf("%f", &numeroReal);

  printf("%c\n", letra);
  printf("%d\n", numerointeiro);
  printf("%f", numeroReal);

  return 0;
}