#include <stdio.h>

int main(void) {
  float salarioAntigo = 3000;
  float valeAntigo = 20;
  float ajuste = 0.05;
  float valorDoAjuste = salarioAntigo * ajuste;
  float novoSalario = salarioAntigo + valorDoAjuste;
  float valenovo = 28;
  novoSalario = novoSalario + valenovo;
  printf("Salário %.2f ", novoSalario);

  int diasUteis = 20;
  int horasDeTrabalho = 6;
  float valorPorHora = novoSalario / (diasUteis * horasDeTrabalho);
  printf("\nSalário por hora %.2f ", valorPorHora);
  

  return 0;
}