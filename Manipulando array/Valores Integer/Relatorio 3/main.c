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

  soma = n[0] + n[99];
  printf("\n\nMédia dos termos de índice 0 e 99: %i.\n", soma/2);
  for(int i = 0; i < size; i++) 
  {
    if (n[i] > soma/2)
      printf("\nO termo %i é maior que a média.", n[i]);
  }
  return 0;
}