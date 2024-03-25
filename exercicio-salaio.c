#include <stdio.h>

int main(void) {
  float salarioantigo = 3000;
  float valeantigo = 20;
  float ajuste = 0.05;
  float valordoajuste = salarioantigo * ajuste;
  float novosalario = salarioantigo + valordoajuste;
  float valenovo = 28;
  novosalario = novosalario + valenovo;
  printf("Salario %.2f ", novosalario);

  return 0;
}