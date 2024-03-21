#include <stdio.h>

int main(void)
{
  int a, b;
  scanf("%d", &a);
  scanf("%d", &b);
  a = a + b;

  // imprime resultado na tela
  printf("A: %d ", a);
  printf("B: %d", b);
  return (0);
}