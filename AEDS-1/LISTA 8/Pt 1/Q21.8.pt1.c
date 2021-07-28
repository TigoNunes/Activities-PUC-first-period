/******************************************************************************

21. Faça um programa que leia um vetor com dez posições para números inteiros. Crie um segundo vetor,
substituindo os valores nulos por 1. Mostre os dois vetores.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vet[10];
    
    printf("Preencha 10 posicoes de um vetor com numeros inteiros e receba esse mesmo vetor com os numeros nulos substituidos por 1.\n\n");
    
    for (int i = 0; i < 10; i++)
    {
        printf("vetor[%d]: ", i);
        scanf("%d", &vet[i]);
    }
    
    printf("\nResultado:\n");
    
    for (int i = 0; i < 10; i++)
    {
        if (vet[i] == 0)
        {
            vet[i] = 1;
        }
        
        printf("\nvetor[%d]: %d", i, vet[i]);
       
    }

    return 0;
}
