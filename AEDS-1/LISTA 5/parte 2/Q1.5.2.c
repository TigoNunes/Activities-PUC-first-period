/******************************************************************************

Faça uma sub-rotina que receba um número inteiro e positivo N como parâmetro e retorne a soma dos 
números inteiros existentes entre o número 1 e N (inclusive).

*******************************************************************************/
#include <stdio.h>

void SomaInteiros(int n)
{
    int soma = 0;
    
    while(n >= 1)
    {
       soma = soma + n;
       n -= 1;
    }
    printf("Resultado: %d", soma);
}

int main()
{
    int n;
    
    printf("Digite um valor inteiro positiivo para N e receba a soma dos numeros inteiros ");
    printf("que estao ente 1 e N\n");
    printf("Valor de N: ");
    scanf("%d", &n);
    
    SomaInteiros(n);

    return 0;
}
