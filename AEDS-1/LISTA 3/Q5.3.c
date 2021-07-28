#include <stdio.h>

int
main ()
{
  for(int numero = 1; numero <= 10; numero++)
  {
    for(int multiplo = 0; multiplo <= 10; multiplo++)
    {
        printf("\n%d x %d = %d", numero, multiplo, numero * multiplo);
    }
  }

 
  return 0;
}

