/******************************************************************************

Faça uma sub-rotina que receba um valor inteiro e verifique se ele é positivo ou negativo.

*******************************************************************************/
#include <stdio.h>

void Verificacao(int numero)
{
    numero >= 0 ? printf("%d e POSITIVO", numero) : printf("%d e NEGATIVO", numero);
}

int main()
{
    int numero;
    
    printf("De um numero inteiro e o sistema ira verificar se ele e positivo ou negativo\n");
    printf("Numero: ");
    scanf("%d", &numero);
    
    Verificacao(numero);

    return 0;
}
