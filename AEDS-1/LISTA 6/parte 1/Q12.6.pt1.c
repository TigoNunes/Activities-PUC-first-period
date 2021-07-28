/******************************************************************************

Crie uma sub-rotina que receba como parâmetro dois valores X e Z, calcule e retorne Xz

sem utilizar funções ou operadores de potência prontos.

*******************************************************************************/
#include <stdio.h>

int Resultado(float x, int z)
{
    float resultado;
    int i;
    
    resultado = 1;
    i = 1;
    
    while(i <= z)
    {
        resultado = resultado * x;
        i++;
    }
    
    return resultado;
}




int main()
{
    float x, resultado;
    int z;
    
    
    printf("Digite 2 numeros, 1 qualquer e 1 inteiro e receba o primeiro elevado pelo segundo.\n");
    
    printf("Digite o numero qualquer: ");
    scanf("%f", &x);
    
    printf("Digite o numero inteiro: ");
    scanf("%d", &z);
    
    resultado = Resultado(x, z);
    
    printf("Resultado = %.2f", resultado);
    return 0;
}
