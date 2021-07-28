#include <stdio.h>

int main()
{
    //input dos dados
    float b, h;
    
    printf("digite o valor da base do triangulo:");
    scanf("%f", &b);
    
    printf("digite o valor da altura:");
    scanf("%f", &h);
    
    //compilar dados 
    
    double area;
    area = (b * h)/2.0;
    
    //outpu dos dados
    
    printf("A area do triangulo é %.3f", area);

    return 0;
}
