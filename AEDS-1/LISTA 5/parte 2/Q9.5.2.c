/******************************************************************************

Crie uma sub-rotina que receba como parâmetro um valor inteiro e positivo e retorne a soma dos divisores
desse valor.

*******************************************************************************/
#include <stdio.h>

void Soma(int numero)
{
    int soma = 0;
    int divisor = numero;
    
    while(divisor > 0)
    {
        if(numero % divisor == 0)
            soma = soma + divisor;
        
        divisor --;
    }
    printf("%d", soma);
}

int main()
{
    int numero;
    
    printf("Digite um numero inteiro positivo e receba a soma de seus divisores\n");
    printf("Digite o numero: ");
    scanf("%d", &numero);
    
    Soma(numero);

    return 0;
}

