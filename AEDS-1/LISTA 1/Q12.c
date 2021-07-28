#include <stdio.h>

int main()
{
    // Input de dados
    
    float a;
    
    printf("Forneça um numero real em decimal: ");
    scanf("%f", &a);
    
    //compilação
    
    int b;
    b = (int) a;
    
    //output
    
    printf("A parte inteira de %f é: %d", a, b);

    return 0;
}
