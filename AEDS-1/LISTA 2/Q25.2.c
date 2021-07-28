#include <stdio.h>

int
main ()
{
  float H, he1, hf1, he2, hf2, p;

  printf ("Digite o numero de horas extras feitas pelo funsionario: ");
  scanf ("%f", &he1);

  printf ("Digite o numero de horas faltas feitas pelo funcionario: ");
  scanf ("%f", &hf1);

  //calculo, H = minutos = he * 60 - (2/3 * (hf * 60)
  he2 = he1 * 60;
  hf2 = hf1 * 60;
  H = he2 - (0.666666666667 * (hf2));

  if (H >= 2400)
    {
      p = 500;
    }
  else if (H >= 1800 && H < 2400)
    {
      p = 400;
    }
  else if (H >= 1200 && H < 1800)
    {
      p = 300;
    }
  else if (H >= 600 && H < 1200)
    {
      p = 200;
    }
  else
    {
      p = 100;
    }
  printf ("O premio e de: R$%.2f", p);
  return 0;
}
