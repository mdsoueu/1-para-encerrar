#include <stdio.h>

int main() 
{
  int contador=0;
  float valor, media, total=0;

  printf("Digite um valor (-1 para encerrar): ");
  scanf("%d", &valor);

    while(valor!=-1)
    {
      total=total+valor;
      contador++;
      printf("Digite um valor (-1 para encerrar): ");
      scanf("%f", &valor);
    }
    media=total/contador;
    printf("Valor médio: %.2f\n", media);
    return 0;
}