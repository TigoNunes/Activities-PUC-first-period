#include <stdio.h>

int
main ()
{
  int numero;
  int par = 0;
  int primo = 0;

  for (int i = 1; i <= 10; i++)
    {
      printf ("Digite um numero: ");
      scanf ("%d", &numero);

      if (numero != 2 && numero % 2 == 0)
	{
	  par = par + numero;
	}
      else
	{
	  primo = primo + numero;
	}
    }
  printf ("\nSoma dos pares = %d", par);
  printf ("\nSoma dos primos = %d", primo);

  return 0;
}
