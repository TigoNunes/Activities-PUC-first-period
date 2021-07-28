/******************************************************************************

2. Faça um programa que preencha um vetor com sete números inteiros, calcule e mostre:
■ os números múltiplos de 2;
■ os números múltiplos de 3;
■ os números múltiplos de 2 e de 3.

*******************************************************************************/
#include <stdio.h>

void Multiplos2 (int vet[])
{
    printf("Multiplos de 2: ");
    
    for (int i = 0; i < 7; i++)
    {
        if (vet[i] % 2 == 0)
        {
            printf("%d ", vet[i]);
        }
    }
}

void Multiplos3 (int vet[])
{
    printf("\nMultiplos de 3: ");
    
    for (int i = 0; i < 7; i++)
    {
        if (vet[i] % 3 == 0)
        {
            printf("%d ", vet[i]);
        }
    }
}

void Multiplos2_3 (int vet[])
{
    printf("\nMultiplos de 2 e 3: ");
    
    for (int i = 0; i < 7; i++)
    {
        if (vet[i] % 2 == 0 && vet[i] % 3 == 0)
        {
            printf("%d ", vet[i]);
        }
    }
}



int main()
{
    int vet[7];
    
    printf("Digite 7 numeros inteiros e receba:\nQuais sao multiplos de 2.\nQuais sao multiplos de 3.\nQuais sao multiplos de 2 e 3.\n\n");
    
    for (int i = 0; i < 7; i++)
    {
        printf("Digite o numero: ");
        scanf("%d", &vet[i]);
    }
    
    Multiplos2 (vet);
    
    Multiplos3 (vet);
    
    Multiplos2_3 (vet);

    return 0;
}

