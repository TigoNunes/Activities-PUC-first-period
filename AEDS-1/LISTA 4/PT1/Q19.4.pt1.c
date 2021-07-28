/******************************************************************************

Deseja-se fazer um levantamento a respeito da ausC*ncia de alunos C  primeira prova de Fundamentos
de ComputaC'C#o para cada uma das (14) turmas existentes. Para cada turma, C) fornecido um conjunto de
valores, sendo que os dois primeiros valores do conjunto correspondem C  identificaC'C#o da turma (A, ouB, ou C, ...) 
e ao nC:mero de alunos matriculados, e os demais valores deste conjunto contC*m o nC:mero de
matrC-cula do aluno e a letra A ou P para o caso de o aluno estar ausente ou presente, respectivamente.
//FaC'a um algoritmo que, para cada turma, calcule a porcentagem de ausC*ncia e escreva a identificaC'C#o da
turma e a porcentagem calculada; determine e escreva quantas turmas tiveram porcentagem de ausC*ncia
superior a 5%.//
*******************************************************************************/
#include <stdio.h>

int
main ()
{
  // 2 sistemas de repetiC'C#o 'for', um dentro do outro
  // variavel para codigo da turma 'char'
  // variavel numero de alunos 'int'
  // numero de matricula dos alunos 'float'
  // opC'C5es A e P para presente ou ausente, variavel 'char'
  // porcentagem de ausencia 'float'
  // quantas turmas tiveram ausencia superior a 5%

  char id, opcao;
  int alunos, ausencia = 0, po_alta = 0;
  float porcentagem, matricula, codigo;

  for (int i = 0; i < 14; i++)
    {
      printf ("\nDigite a identificacao da turma: ");
      scanf (" %c", &id);

      printf ("Digite o numero de alunos desta turma: ");
      scanf ("%d", &alunos);

      for (int x = 1; x <= alunos; x++)
	{
	  printf ("Digite o codigo do %d aluno: ", x);
	  scanf ("%f", &codigo);

	  printf
	    ("Digite A se o aluno estava ausente e P caso estava presente: ");
	  scanf (" %c", &opcao);

	  if (opcao == 'A')
	    {
	      ausencia++;
	    }
	}
      porcentagem = (ausencia * 100) / alunos;

      if (porcentagem > 5)
	{
	  po_alta++;
	}

      ausencia = 0;
      printf ("A porcentagem de faltas na turma %c foi de: %.2f\n", id,
	      porcentagem);
    }
  printf
    ("O numero de turmas que tiveram falta maior que 5 por cento foi : %d",
     po_alta);



  return 0;
}
