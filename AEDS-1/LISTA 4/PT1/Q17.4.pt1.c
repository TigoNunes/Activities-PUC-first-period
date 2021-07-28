#include <stdio.h>

int main()
{
    int numero = 1;
    
    while(numero > 0)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        
        if(numero <= 0)
        {
            
        }
        
        else if(numero % 2 == 0)
        {
            printf("%d, PAR\n", numero);
        }
        else
        {
            printf("%d, IMPAR\n", numero);
        }
    }

    return 0;
}
