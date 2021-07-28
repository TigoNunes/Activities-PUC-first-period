#include<stdio.h>

int main()
{
    //input do sistema
    
    int a, b, c, d;
    
    printf("Digite quatro numeros\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    //compilar dado
    
    double soma;
    soma = (a + b + c +d);
    
    // output dos dados
    
    printf("O resultado da soma de %d, %d, %d e %d é %f", a, b, c, d, soma);
    
    return 0;
}

