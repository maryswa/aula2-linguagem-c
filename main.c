#include <stdio.h>

// fazendo a multiplicação
int main(void) {
  // declarando as variaveis
  float num1, num2, multiplicacao;
  printf("Digite o primeiro numero:");
  scanf("%f", &num1);

  printf("Digite o segundo numero:");
  scanf("%f", &num2);

  // calculo d multiplicacao
  multiplicacao = num1 * num2;

  // saida de resultado
  printf("0 resultado e : %f\n", multiplicacao);
  return 0;
}