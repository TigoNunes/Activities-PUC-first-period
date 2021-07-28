/******************************************************************************
Faça uma sub-rotina que receba um valor inteiro e positivo, calcule e mostre seu fatorial.
*******************************************************************************/
#include <stdio.h>

void Fatorial(int numero)
{
    int fatorial = 1;

    while (numero > 0)
	{
	  fatorial = fatorial * numero;
	  numero = numero - 1;
	}
    
    printf ("Fatorial = %d\n", fatorial);
}


int main()
{
    int numero;
  
    printf("Digite um valor inteiro e positivo e receba o seu fatorial.\n");
    printf ("Digite o numero: ");
    scanf ("%d", &numero);
    
    Fatorial(numero);


    return 0;
}
