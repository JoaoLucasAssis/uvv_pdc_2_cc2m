#include <stdio.h>

int main(void) 
{
  float preco, total;
  int qnt;
  printf("Informe o preço: ");
  scanf("%f", &preco);
  printf("Informe a quantidade: ");
  scanf("%i", &qnt);

  total = preco * qnt;
  
  if (total > 1000) {
    total *= 0.97;
  }

  printf("O valor total pago é de %.2f", total);
  
  return 0;
}
