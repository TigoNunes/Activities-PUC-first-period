#include <stdio.h>

int
main ()
{
  /* pu = preC'o unitario, x = quantidade de produto, cp = codigo produto, 
     pt = preC'o total da nota, d = desconto,pf = preC'o final */
  int cp, x, pu;
  float pt, pf, d;

  printf ("Digite o codigo do produto commprado, indo de 1 a 40: ");
  scanf ("%d", &cp);
  printf ("Digite a quantidade comprada de produto: ");
  scanf ("%d", &x);

  //calculo parte 1, descobrir o preC'o total
  if (cp >= 1 && cp <= 10)
    {
      (pu = 10);
      pt = (x * pu);
    }
  else if (cp >= 11 && cp <= 20)
    {
      (pu = 15);
      pt = (x * pu);
    }
  else if (cp >= 21 && cp <= 30)
    {
      (pu = 20);
      pt = (x * pu);
    }
  else if (cp >= 31 && cp <= 40)
    {
      (pu = 30);
      pt = (x * pu);
    }
  else
    {
      printf ("O codigo digitado nao e valido");
    }

  //calculo parte 2, preC'o desconto e preC'o total
  if (pt <= 250)
    {
      d = (pt * 0.05);
      pf = (pt - d);
    }
  else if (pt > 250 && pt <= 500)
    {
      d = (pt * 0.1);
      pf = (pt - d);
    }
  else
    {
      d = (pt * 0.15);
      pf = (pt - d);
    }

  printf ("Preco unitario do produto: %d", pu);
  printf ("\nPreco total da nota: %.2f", pt);
  printf ("\nValor do desconto: %.2f", d);
  printf ("\nPreco final: %.2f", pf);

  return 0;
}
