#include <stdio.h>

int
main ()
{
  // a) Quantidade de pesoas em cada faixa etaria
  // entrada de variaveis
  int i = 0;			// Variavel de controle
  int idade;			// Variavel de idade
  int pg1 = 0, pg2 = 0;		//quantidade de pessoas na faixa 1/ faixa 2

  printf ("Digite um idade e descubra sua faixa etaria");

  while (i < 8)
    {
      printf ("\nIdade: ");
      scanf ("%d", &idade);

      if (idade <= 15)
	{
	  printf ("Faixa etaria 1");
	  pg1 = pg1 + 1;
	}
      else if (idade <= 30 && idade >= 16)
	{
	  printf ("Faixa etaria 2");
	}
      else if (idade <= 45 && idade >= 31)
	{
	  printf ("Faixa etaria 3");
	}
      else if (idade <= 60 && idade >= 46)
	{
	  printf ("Faixa etaria 4");
	}
      else
	{
	  printf ("Faixa etaria 5");
	  pg2 = pg2 + 1;
	}

      i++;
    }
  // b) Porcentagem de pessoas na primeira faixa etaria

  float porcentagem1;
  printf ("\nQuantidade de pessoas na faixa 1: %d", pg1);
  porcentagem1 = (pg1 * 100) / 8;
  printf ("\nA porcentagem de pessoas na faixa 1 e: %.2f", porcentagem1);

  // c) Porcentagem de pessoas na ultima faixa etaria
  float porcentagem2;
  printf ("\nQuantidade de pessoas na faixa 2: %d", pg2);
  porcentagem2 = (pg2 * 100) / 8;
  printf ("\nA porcentagem de pessoas na faixa 5 e: %.2f", porcentagem2);
  return 0;
}
