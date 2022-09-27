#define size 5

int main(void) 
{
  float b1[size], soma = 0;
  int pos = 0;
  int a = 0, pf = 0, r = 0;

  while (pos < size) 
  {
    printf("Nota [0-10] aluno %i ", pos + 1);
    scanf("%f", &b1[pos]);
    
    if (b1[pos] < 0 || b1[pos] > 10) 
      printf("[ERRO] Erro na digitação das notas.");
    else 
      pos++;
  }
  
  
  //Relatório 1 - Notas Indexadas:
  for(pos = 0; pos < size; pos++) 
    printf("\nAs notas indexadas são %.1f", b1[pos]);

  //Relatório 2 - Média das notas:
  for(pos = 0; pos < size; pos++) 
    soma = soma + b1[pos];
  printf("\n\nA média da notas é %.1f\n\n", soma / size);

  //Relatório 3 - Porcentagem de aprovação, prova final e recuperação:
  for(pos = 0; pos < size; pos++) 
  {
    if (b1[pos] >= 7.0)
      a++;
    else if (b1[pos] >= 3.0)
      pf++;
    else 
      r++;
  }
  printf("Aprovação: %.1f%%\n", a * 100.0 / size);
  printf("Prova final: %.1f%%\n", pf * 100.0 / size);
  printf("Reprovação: %.1f%%\n", r * 100.0 / size);
}