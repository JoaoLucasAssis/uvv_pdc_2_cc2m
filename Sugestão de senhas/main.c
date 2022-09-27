
int main(void) 
{
  int d1, d2, d3 ,d4, qtd = 0;

  printf("Sugestão de senhas(4 dígitos): \n");
  
  for(int i = 1000; i < 9999; i++) 
  {
    //Números ímpares e múltiplos de 39
   if (i % 2 != 0 && i % 39 == 0) 
    {
      d1 = i / 1000; //Primeiro dígito
      d2 = (i % 1000) / 100; //Segundo dígito
      d3 = ((i % 1000) % 100) / 10; //Terceiro dígito
      d4 = ((i % 1000) % 100) % 10; //Quarto dígito

      //Todos os dígitos diferentes
      if (d1 != d2 && d1 != d3 && d1 != d4 && d2 != d3 && d2 != d4 && d3 != d4)
      {
        qtd ++;
        printf("%i° %i\n", qtd, i);
      }
    }
  }
  return 0;
}