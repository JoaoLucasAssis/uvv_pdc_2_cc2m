#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 10

int main(void) 
{
  float n[size];
  int i;
  
  srand(time(NULL));
  
  printf("\n\nValores [10.0, 99.9]:\n\n");
  //Atribuindo valores aleatórios [10.0, 99.9] para o array n[]
  for(int i = 0; i < size; i++) 
  {
    /*
    resto da divisão por 900 = rand(0, 889)
    divisão por 10.0 = (0.0, 88.9)
    soma de 10 = (10.0, 99.9)
    */
    n[i] = rand() % 900 / 10.0 + 10; 
    printf("%.1f ", n[i]);
  }
  
  printf("\n\nMédia dos termos nos indices 0, 4 e 9:\n\n");
  //Cálculo da média dos termos nos índices 0, 4 e 9
  float media = (n[0] + n[4] + n[9]) / 3;
  printf("%.1f", media);

  printf("\n\nValores maiores que a média calculada:\n\n");
  //Exibe os valores do array meiores que a média calculada
  for(int i = 0; i < size; i++) 
  {
    if (n[i] > media)
      printf("%.1f ", n[i]);
  }
  return 0;
}