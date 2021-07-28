/******************************************************************************

Elabore uma sub-rotina que calcule o máximo divisor comum (MDC) de dois números recebidos como
parâmetros.

*******************************************************************************/
#include <stdio.h>

int MDC(int num1, int num2)
{
    int i = 2;
    int mdc;
    
    while(i <= num1 || i <= num2)
    {
        if(num1 % i == 0 & num2 % i == 0)
        {
            mdc = i;
        }
        
        i++;
    }
    
    return mdc;
}


int main()
{
    int num1, num2;
    int mdc;
    
    
    printf("Digite 2 numeros inteiros e Receba o Maximo Divisor Comum\n");
    
    printf("Primeiro numero: ");
    scanf("%d", &num1);
    
    printf("Segundo numero: ");
    scanf("%d", &num2);
    
    mdc = MDC(num1, num2);
    printf("O mdc de %d e %d = %d", num1, num2, mdc);
    return 0;
}
