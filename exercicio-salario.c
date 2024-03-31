#include <stdio.h>

int main(void) {
  float salarioAntigo = 3000;
  float valeAntigo = 20;
  float ajuste = 0.05;
  float valorDoAjuste = salarioAntigo * ajuste;
  float novoSalario = salarioAntigo + valorDoAjuste;
  float valenovo = 28;
  int diasUteis = 20;
  int horasDeTrabalho = 6;
  float valorPorHora ; 

  novoSalario = novoSalario + (valenovo * diasUteis);
  valorPorHora = novoSalario / (diasUteis * horasDeTrabalho);

  printf("Salário %.2f ", novoSalario);
  printf("\nSalário por hora %.2f ", valorPorHora);

  return 0;
}