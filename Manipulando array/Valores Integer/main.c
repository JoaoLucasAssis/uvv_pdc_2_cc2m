#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 100

int main(void) 
{
  int n[size];
  
  srand(time(NULL));

  printf("Valores do array:\n\n");
  for(int i = 0; i < size; i++) 
  {
    n[i] = rand() % 90 + 10; 
    printf("%i ", n[i]);
  }
  return 0;
}