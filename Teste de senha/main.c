#include <stdio.h>

int main(void) 
{
  int senha;
  printf("Digite a sua senha (4 digitos): ");
  scanf("%i", &senha);

  if (senha >= 1000 && senha <= 9999) {
   if (senha % 2 != 0) {
    printf("Senha ta ok.");
    } else {
     printf("Senha ta fraca.");
    }
  } else {
    printf("Apenas senhas com quatro digitos.");
  }
  return 0;
}