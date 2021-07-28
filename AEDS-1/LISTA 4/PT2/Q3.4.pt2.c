/******************************************************************************

3. Faça um algoritmo que calcule o seguinte somatório:
S= 1/225 + 2/196 + 4/169 + 8/144 ... 16384/1

*******************************************************************************/
#include <stdio.h>

int main()
{
    float s = 0;
    float dividendo, divisor;
    int sub = 29;
    
    dividendo = 1;
    divisor = 225;
    
    while(divisor >= 1)
    {
        s = s + (dividendo / divisor);
        dividendo = dividendo * 2;
        divisor = divisor - sub;
        sub -= 2;
    }
    printf("S = %.2f", s);

    return 0;
}


