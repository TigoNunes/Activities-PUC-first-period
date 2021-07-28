#include <stdio.h>

int main()
{
    float a, b, c;
    
    printf("Digite 3 numeros\n");
    
    printf("Primeiro Numero: ");
    scanf("%f", &a);
    
    printf("Segundo Numero: ");
    scanf("%f", &b);
    
    printf("Terceiro Numero: ");
    scanf("%f", &c);
    
    if(a > b && a > c) 
    {
        printf("O maior numero é %.2f", a);
    } 
    else if(b > a && b > c) 
    {
        printf("O maior numero é %.2f", b);    
    } 
    else if(c > a && c > b) 
    {
        printf("O maior numero é %.2f", c);    
    }
    return 0;
}
