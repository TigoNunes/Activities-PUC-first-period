/******************************************************************************

2- Calcular o fatorial de x

*******************************************************************************/
#include <stdio.h>

float Fatorial(float num)
{
    if(num == 0)
        return 1;
    else
        return num * Fatorial(num - 1);
}

int main()
{
    float num;
    float resultado;
    
    printf("Digite um numero e receba seu fatorial\n");
    
    printf("Numero: ");
    scanf("%f", &num);
    
    resultado = Fatorial(num);
    
    printf("%.2f! = %.2f", num, resultado);
    
    return 0;
}
