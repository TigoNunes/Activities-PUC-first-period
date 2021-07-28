/******************************************************************************

Elabore uma sub-rotina que receba como parâmetro um valor N (inteiro e maior ou igual a 1) e determi-
ne o valor da sequência S, descrita a seguir:

S = 1 + 1/2 + 1/3...

*******************************************************************************/
#include <stdio.h>
#include <math.h>

void S(float numero)
{
    float s;
    
    for(float i = 1; i <= numero; i++)
    {
        float a = 1 / i;
        s = s + a;
    }
    printf("S = %.2f", s);
}

int main()
{
    float numero;
    
    printf("Digite um numero para servir de parametro para a sequencia\n S = 1 + 1/2 + 1/3...\n");
    printf("Numero: ");
    scanf("%f", &numero);
    
    S(numero);

    return 0;
}
