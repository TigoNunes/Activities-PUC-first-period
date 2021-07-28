#include <stdio.h>

int
main ()
{
  float multiplo = 0;
  float numero;

  printf ("Digite um numero: ");
  scanf ("%f", &numero);

  while (multiplo <= 10)
    {
      printf ("%.2f X %.2f = %.2f\n", numero, multiplo, numero * multiplo);
      multiplo++;
    }
  return 0;
}

