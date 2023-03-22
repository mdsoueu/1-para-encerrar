#include <stdio.h>

int main() {
  int contador = 0;
  float valor, media, total = 0;

  printf("Digite qualquer valor (para encerrar, digite 1): ");
  scanf("%f", &valor);

  while (valor != 1) {     /* Início do while */
    total = total + valor; /* Guardo o valor */
    contador++;
    printf("Digite um valor (1 para encerrar): ");
    scanf("%f", &valor);
  } /* Fim do while */
  media = total /
          contador; /* Soma dos valores dividido pela quantidade do contador */
  printf("\nValor médio: %.2f\n", media);
  return 0;
}