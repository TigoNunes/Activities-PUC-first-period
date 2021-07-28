#include <stdio.h>

int
main ()
{
  // pedir idade
  float id;

  printf ("Digite a idade de um nadador e descubra a sua categoria");
  printf ("\nIdade: ");
  scanf ("%f", &id);

  if (id < 5)
    {
      printf ("Muito novo");
    }
  else if (id >= 5 && id <= 7)
    {
      printf ("Infantil");
    }
  else if (id >= 8 && id <= 10)
    {
      printf ("Juvenil");
    }
  else if (id >= 11 && id <= 15)
    {
      printf ("Adolescente");
    }
  else if (id >= 16 && id <= 30)
    {
      printf ("Adulto");
    }
  else
    {
      printf ("Senior");
    }
  return 0;
}
