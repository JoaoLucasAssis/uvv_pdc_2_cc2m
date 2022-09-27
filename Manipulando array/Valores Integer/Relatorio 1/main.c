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

  for(int i = 0; i < size; i++) 
  {
    if (n[i] % 2 != 0 && n[i] % 7 == 0)
      printf("\n\nO termo %i de índice %i é ímpar e múltiplo de 7.", n[i], i);
  }
  return 0;
}