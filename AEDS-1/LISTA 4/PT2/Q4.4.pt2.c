#include <stdio.h>

int main()
{
    float s = 100;
    float dividendo, divisor;
    int controle;
    
    dividendo = 99;
    divisor = 1;
    controle = 1;
    
    while(dividendo >= 81)
    {
        s = s + (dividendo / divisor);
        
        controle++;
        
        divisor = divisor * controle;
        
        dividendo--;
    }
    
    printf("A soma dos 20 primeiros numeros da serie e: %f\n", s);
    
    return 0;
}
