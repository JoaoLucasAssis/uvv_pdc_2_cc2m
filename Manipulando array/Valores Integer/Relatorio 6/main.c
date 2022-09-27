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

  contador = 0;
  for(int i = 0; i < size; i++) 
  {
    if (n[i] / 10 == 3 || n[i] % 10 == 3)
      contador++;
    if (n[i] / 10 == 3 && n[i] % 10 == 3)
      contador++;
  }
  printf("\n\nO numero 3 apareceu %i vezes.", contador);
  return 0;
}