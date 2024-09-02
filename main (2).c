#include <stdio.h>

int main(void) {
  // declaraçao as variaveis
  int numeros[5]; // Array de inteiros com 5 elementos
  int soma = 0;   // Variavel recebe a soma dos inteiros
  int i;          // interador do for

  // entrada de dados
  printf("Digite os 5 numeros do array\n");
  for (i = 0; i < 5; i++) {
    printf("numero %d: ", i + 1);
    scanf("%d", &numeros[i]);
  }

  // calculando dos elementos do arrey
  for (i = 0; i < 5; i++) {
    soma += numeros[i];
  }

  // Exibindo o resultado
  printf("a soma dos numeros e : %d\d", soma);
  return 0;
}