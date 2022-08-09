#include <stdio.h>

int main(void) 

{
  float preco, desconto, semDesconto, comDesconto;
  int quantidade;
  printf("Informe o preço da mercadoria: ");
  scanf("%f", &preco);
  printf("Informe a quantidade dos produtos: ");
  scanf("%i", &quantidade);
  printf("Informe o desconto da mercadoria(porcentagem): ");
  scanf("%f", &desconto);

  semDesconto = preco * quantidade;
  comDesconto = semDesconto * (1 - (desconto / 100));

  printf("O total a pagar, sem desconto, é de %.2f\n", semDesconto);
  printf("O total a pagar, com desconto, é de %.2f\n", comDesconto);
  return 0;
}