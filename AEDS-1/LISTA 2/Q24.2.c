#include <stdio.h>

int
main ()
{
  /* receber as variaveis: preC'o(p); categoria(c); situaC'C#o(s); 
     valor do aumento (va); valor do imposto(vi); novo preC'o(np); classificaC'C#o(cl) */
  float p, va, vi, np;
  int s;
  int categoria;

  // parte 1: 
  printf ("Digite o preco do produto: ");
  scanf ("%f", &p);

  printf ("Escolha a categoria do produto:\n");
  printf ("1 - Limpeza\n");
  printf ("2 - Alimentacao\n");
  printf ("3 - Vestuario\n");
  scanf ("%d", &categoria);

  printf ("Escolha uma das situacoes:\n");
  printf ("1 - Produtos que necessitam refrigerecao\n");
  printf ("2 - Produtos que nao necessitam refrigeracao\n");
  scanf ("%d", &s);

  switch (categoria)
    {
    case 1:
      if (p <= 25)
	{
	  va = p * 0.05;
	}
      else
	{
	  va = p * 0.12;
	}
      if (s == 1)
	{
	  vi = p * 0.05;
	}
      else if (s == 2)
	{
	  vi = p * 0.08;
	}
      break;
    case 2:
      if (p <= 25)
	{
	  va = p * 0.08;
	}
      else
	{
	  va = p * 0.15;
	}
      vi = p * 0.05;
      break;
    case 3:
      if (p <= 25)
	{
	  va = p * 0.1;
	}
      else
	{
	  va = p * 0.18;
	}
      if (s == 1)
	{
	  vi = p * 0.05;
	}
      else if (s == 2)
	{
	  vi = p * 0.08;
	}
      break;
    }

  np = p + va + vi;

  printf ("O valor do aumento e: %.2f\n", va);
  printf ("O valor do imposto e: %.2f\n", vi);
  printf ("O novo preco e: %.2f\n", np);
  if (np <= 50)
    {
      printf ("Barato");
    }
  else if (np > 50 && np < 120)
    {
      printf ("Normal");
    }
  else
    {
      printf ("Caro");
    }
  return 0;
}
