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

soma = 0;
  contador = 0;
  for(int i = 0; i < size; i++) 
  {
    if (n[i] % 2 == 0 && n[i] % 5 == 0)
    {
      soma += n[i];
      contador++;
    }
  }
  printf("\n\nA média dos termos múltiplos de 2 e 5 é %i.", soma/contador);
  return 0;
}