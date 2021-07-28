#include <stdio.h>

int
main ()
{
  // senha 4531
  int senha;
  printf ("Digite a senha de acesso: ");
  scanf ("%d", &senha);

  if (senha == 4531)
    {
        printf("Acesso permitido");
    }
    else
    {
        printf("Acesso negado");
    }
  return 0;
}
