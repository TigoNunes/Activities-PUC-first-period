#include <stdio.h>

int main()
{
    //input
    
    float R;
    
    printf("digite o valor de R:");
    scanf("%f", &R);
    
    //compilação
    
    double area;
    area = (R * R) * 3.14;
    
    //output
    
    printf("A area do circulo é %.3f", area);
    
    return 0;
}
