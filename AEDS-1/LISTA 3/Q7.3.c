#include <stdio.h>

int
main ()
{
  // Variavel idade    
  // Variavel altura
  // Variavel peso

  int idade;
  float altura, peso, altura_pm = 0, pe = 0;
  int id = 0, al = 0;

  printf ("De a idade, a altura e o peso de 5 pessoas\n");

  for (int i = 1; i <= 5; i++)
    {
      printf ("Idade: ");
      scanf ("%d", &idade);

      printf ("Altura: ");
      scanf ("%f", &altura);

      printf ("Peso: ");
      scanf ("%f", &peso);

      if (idade > 50)
	{
	  id = id + 1;
	}
      else if (idade >= 10 && idade <= 20)
	{
	  al = al + 1;
	  altura_pm = altura_pm + altura;
	}
      if (peso < 40)
	{
	  pe = pe + 1;
	}
    }
  printf ("Quantidade de pessoas com idade superior a 50 anos: %d", id);

  float media_al;
  media_al = altura_pm / al;
  printf
    ("\nMedia das alturas das pessoas com idade entre 10 e 20 anos: %.2f",
     media_al);

  printf ("\nporcentagem de pessoas com peso inferior a 40 kg: %.2f",
	  pe * 100 / 5);

  return 0;
}
