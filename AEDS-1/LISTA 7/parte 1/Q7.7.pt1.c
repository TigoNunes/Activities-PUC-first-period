/******************************************************************************

7- Faça uma função recursiva para calcular (e imprimir) os elementos da seguinte sequência: 1+1/2+1/3+1/4+⋯+1/N

*******************************************************************************/
#include <stdio.h>

float Resultado(float x)
{
    if (x == 1)
        return 1;
    
    else
        return (1 / x) + Resultado(x - 1);
}

int main()
{
    int num;
    float resultado;
    
    printf("Digite um numero e receba a soma da sequência. 1 + 1/2 + 1/3 + ... 1/n \n");
    
    printf("Insira um numero: ");
    scanf("%d", &num);
    
    resultado = Resultado(num);
    
    printf("resultado igual: %.2f", resultado);

    return 0;
}
