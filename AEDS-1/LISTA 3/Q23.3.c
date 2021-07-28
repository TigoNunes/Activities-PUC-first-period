#include <stdio.h>

int
main ()
{
  //pt 1
  // Dar as opC'C5es ao ususario
  // variaveis gerais

  float salario;
  int op;

  printf ("Menu de opcoes\n");

  printf ("1. Novo salC!rio\n");
  printf ("2. Ferias\n");
  printf ("3. Decimo terceiro\n");
  printf ("4. Sair\n");
  scanf ("%d", &op);

  if (op == 1)
    {
      float novo_salario;

      printf ("Digite o salario: ");
      scanf ("%f", &salario);

      if (salario <= 210.00)
	{
	  novo_salario = (salario * 0.15) + salario;
	}
      else if (salario > 210.00 && salario <= 600.00)
	{
	  novo_salario = (salario * 0.1) + salario;
	}
      else
	{
	  novo_salario = (salario * 0.05) + salario;
	}
      printf ("O novo salario e de: %.2f", novo_salario);
    }
  else if (op == 2)
    {
      float ferias;

      printf ("Digite o salario: ");
      scanf ("%f", &salario);

      ferias = salario + (salario / 3);

      printf ("O valor de suas ferias e de: %.2f", ferias);
    }
  else if (op == 3)
    {
      int meses;
      float decimo_terceiro;

      printf ("Digite o salario: ");
      scanf ("%f", &salario);

      printf ("Digite quantos meses o funcionario trabalhou (maximo 12): ");
      scanf ("%d", &meses);

      if (meses > 12)
	{
	  printf ("Limite de meses ultrapassado");

	  return 3;
	}

      decimo_terceiro = (salario * meses) / 12;

      printf ("O decimo terceiro e de: %.2f", decimo_terceiro);
    }
  else if (op == 4)
    {
      return 4;
    }
  else
    {
      printf ("Opcao invalida");
      return 5;
    }
  return 0;
}
