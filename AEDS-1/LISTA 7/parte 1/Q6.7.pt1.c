/******************************************************************************

6- Calcular o máximo divisor comum (MDC) de dois números

*******************************************************************************/
#include <stdio.h>

int MDC(int x, int y)
{
    if(x > y && x % y == 0)
        return y;
    
    else if(y > x && y % x == 0)
        return x;
    
    else if (x > y && x % y > 0)
        return MDC(y, x % y);
    
    else
        return MDC(x, y % x);
    
}

int main()
{
    int num1, num2;
    int mdc;
    
    printf("Digite 2 numeros inteiros e receba o MDC\n");
    
    printf("Numero: ");
    scanf("%d", &num1);
    
    printf("Numero: ");
    scanf("%d", &num2);
    
    mdc = MDC(num1, num2);
    
    printf("O MDC e: %d", mdc);

    return 0;
}
