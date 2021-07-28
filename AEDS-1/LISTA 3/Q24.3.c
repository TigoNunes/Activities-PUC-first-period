#include <stdio.h>

int main()
{
    int numero = 1, maior = 0, menor = 0, i = 0;
    
    while(numero != 0)
    {
        printf("\nDigite um numero inteiro positivo: ");
        scanf("%d", &numero);
        
        if(i == 0)
        {
            maior = numero;
            menor = numero;
            i++;
        }
        if(numero > 0)
        {
            if(numero > maior)
            {
                maior = numero;
            }
            if(numero < menor)
            {
                menor = numero;
            }
        }
        else if(numero < 0)
        {
            printf("Numeros negativos sao invalidos\n");
        }
    }
    printf("O maior numero do conjunto e: %d", maior);
    printf("\nO menor numero do conjunto e: %d", menor);
    

    return 0;
}
