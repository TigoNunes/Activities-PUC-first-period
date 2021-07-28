/******************************************************************************

1. Faça um programa que preencha um vetor com seis elementos numéricos inteiros. Calcule e mostre:
■ todos os números pares;
■ a quantidade de números pares;
■ todos os números ímpares;
■ a quantidade de números ímpares..

*******************************************************************************/
#include <stdio.h>

void Pares(int vet[])
{
    int cont = 0;
    
    printf("Pares: ");
    
    for (int i = 0; i < 6; i++)
    {
        if(vet[i] % 2 == 0)
        {
            printf("%d ", vet[i]);
            
            cont ++;
        }
    }
    
    printf("\nQuantidade de pares: %d", cont);
}

void Impares(int vet[])
{
    int cont = 0;
    
    printf("\nImpares: ");
    
    for (int i = 0; i < 6; i++)
    {
        if(vet[i] % 2 != 0)
        {
            printf("%d ", vet[i]);
            
            cont ++;
        }
    }
    
    printf("\nQuantidade de impares: %d", cont);
}

int main()
{
    int vet[6];
    int quanti_par, quanti_impar;
    
    printf("Digite 6 numeros inteiros e receba:\nQuais sao pares.\nQuais sao impares.\nQuantidade de pares.\nQuantidade de impares\n\n");
    
    for (int i = 0; i < 6; i++)
    {
        printf("Digite o numero: ");
        scanf("%d", &vet[i]);
    }
    
    Pares(vet);
    
    Impares(vet);
    
    

    return 0;
}
