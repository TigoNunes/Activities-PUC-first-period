#include <stdio.h>

int
main ()
{
  float multiplo = 0;
  float numero;

  printf ("Digite um numero de 1 a 10: ");
  scanf ("%f", &numero);
  
  if(numero >= 1 && numero <= 10)
  {
      while (multiplo <= 10)
    {
      printf ("%.2f X %.2f = %.2f\n", numero, multiplo, numero * multiplo);
      multiplo++;
    }
  }
  else
  {
    printf("O numero deve ser de 1 a 10");
    return 1;
  }
  
  return 0;
}
