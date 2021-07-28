#include <stdio.h>

int
main ()
{
  float valor;
  int negativo = 0;

  for (int i = 1; i <= 10; i++)
    {
      printf ("Digite o %d valor: ", i);
      scanf ("%f", &valor);

      if (valor < 0)
	{
	  negativo++;
	}
    }
  printf ("O numero de negativos e: %d", negativo);

  return 0;
}
