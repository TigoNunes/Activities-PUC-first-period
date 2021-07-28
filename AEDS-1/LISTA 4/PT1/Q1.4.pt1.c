#include <stdio.h>

int
main ()
{
  printf ("Este programa conta de 1 a 10\n");

  int num = 1;
  while (num < 11)
    {
      printf ("%d\n", num);
      num++;
    }

  return 0;
}

