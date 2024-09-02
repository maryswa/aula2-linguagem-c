#include <stdio.h>

// fazendo a multiplicação
int main(void) {
  // declarando as variaveis
  float num1, num2, divisao;
  printf("Digite o primeiro numero:");
  scanf("%f", &num1);

  printf("Digite o segundo numero:");
  scanf("%f", &num2);

  // calculo de divisao
  divisao = num1 * num2;

  // saida de resultado
  printf("0 resultado e : %f\n", divisao);
  return 0;
}