/******************************************************************************

8- Calcular e retornar o máximo divisor comum entre dois números informados pelo usuário a partir
do algoritmo de Euclides.

*******************************************************************************/
#include <stdio.h>

int MDC(int numero1, int numero2)
{
    int divisao;
    int sobra;
    int maior, menor;
    
    if(numero1 > numero2)
    {
        maior = numero1; 
        menor = numero2;
    }
    else
    {    
        maior = numero2; 
        menor = numero1;
    }
    
    divisao = maior % menor;
    sobra = divisao;
    
    while(sobra > 0)
    {
        sobra = menor % divisao;
        
        menor = divisao;
        
        divisao = sobra;
        
        
    }
    
    return menor;
    
    
}

int main()
{
    int numero1, numero2;
    int menor;
    
    printf("Digite 2 numeros inteiros e descubra o MDC deles\n");
    
    printf("Primeiro numero: ");
    scanf("%d", &numero1);
    
    printf("Segundo numero: ");
    scanf("%d", &numero2);
    
    menor = MDC(numero1, numero2);
    
    printf("O mdc de %d e %d e: %d", numero1, numero2, menor);
    
    return 0;
}

