#include <stdio.h>

int main()
{
    float numero = 1;
    
    while(numero != 0)
    {
        printf("Digite um numero: ");
        scanf("%f", &numero);
        
        if(numero == 0)
        {
            
        }
        else if(numero > 0)
        {
            printf("%.2f, POSITIVO\n", numero);
        }
        else
        {
            printf("%.2f, NEGATIVO\n", numero);
        }
    }
    

    return 0;
}

