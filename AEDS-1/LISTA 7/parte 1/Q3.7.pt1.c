/******************************************************************************

3- Cálculo os n primeiros termos da sequência de Fibonacci

*******************************************************************************/
#include <stdio.h>

int Resultado(int n)
{
    if(n == 0)
        
        return 0;
        
    else if(n == 1)
        
        return 1;
        
    else if(n == 2)
        
        return 1;
        
    else
        return Resultado(n - 1) + Resultado(n - 2);
}

int main()
{
    int enesimo;
    int resultado;
    
    printf("Digite o enesimo numero que voce deseja ver da sequencia de Fibonacci: ");
    scanf("%d", &enesimo);
    
    resultado = Resultado(enesimo);
    
    printf("O %d da sequenciade Fibonacci e: %d", enesimo, resultado);

    return 0;
}
