#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 100

int main(void) 
{
  int n[size], soma = 0, contador = 0;
  
  srand(time(NULL));

  printf("Valores do array:\n\n");
  for(int i = 0; i < size; i++) 
  {
    n[i] = rand() % 90 + 10; 
    printf("%i ", n[i]);
  }

  int a;
  soma = 0;
  contador = 0;
  printf("\n\nDigite um numero(a >= 10): ");
  scanf("%i", &a);
  if (a >= 10)
  {
    for(int i = 0; i < size; i++)
    {
      if (n[i] % a == 0) 
      {
        soma += n[i];
        contador++;
      }
    }
    printf("\n\nMédia dos termos múltiplos de %i: %i.", a, soma/contador);
  }
  else 
    printf("\n\n[ERRO] a >= 10.");
  return 0;
}