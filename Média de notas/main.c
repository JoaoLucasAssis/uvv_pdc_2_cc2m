#include <stdio.h>

int main(void) {
  float b1, b2, media;
  printf("b1? ");
  scanf("%f", &b1);
  printf("b2? ");
  scanf("%f", &b2);

  if ((b1 >= 0 && b1 <= 10) &&(b2 >= 0 && b2 <= 10)) {
    media = (b1+b2)/2;
    printf("A média do aluno é de %.1f.\n", media);
    if (media >= 7) {
      printf("O aluno foi aprovado.");
    } else {
      printf("O aluno foi reprovado.");
    }
  } else {
    printf("As notas inseridas devem ser entre 0 e 10.");
  }
  return 0;
}