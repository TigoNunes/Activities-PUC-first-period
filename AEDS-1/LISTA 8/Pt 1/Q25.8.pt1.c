/******************************************************************************

25. Faça um programa que leia um vetor com quinze posições para números inteiros. Depois da leitura, divida 
todos os seus elementos pelo maior valor do vetor. Mostre o vetor após os cálculos.

*******************************************************************************/
#include <stdio.h>

float Maior (float vet[])
{
    int maior = 0;
    
    for (int i = 0; i < 15; i++) 
    {
        if (vet[i] > maior)
        {
            maior = vet [i];
        }
    }
    
    return maior;
}

void Divisao (float vet[])
{
    int divisor = Maior(vet);
    
    for (int i = 0; i < 15; i++) 
    {
        float divisao = vet[i] / divisor;
        
        printf("\n%.2f / %d = %.2f", vet[i], divisor, divisao);
    }
}

int main()
{
    float vet[15];
    
    printf("Preencha os 15 elementos de um vetor com numeros inteiros e receba todos os numeros divididos pelo maior.\n\n");
    
    for (int i = 0; i < 15; i++) 
    {
        printf("Vetor[%d]: ", i);
        scanf("%f", &vet[i]);
    }
    
    printf("\nResultado:\n");
    
    Divisao(vet);

    return 0;
}
