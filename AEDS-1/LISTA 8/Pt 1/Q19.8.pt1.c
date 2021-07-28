/******************************************************************************

19. Faça um programa que leia dois vetores de dez posições e faça a multiplicação dos elementos de mesmo
índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float a[10], b[10], c[10];
    
    printf("Preencha 2 vetores de 10 posicoes e receba um terceiro vetor resultante da multiplicacao dos vetores de mesmo indice.\n");

    printf("\nPreencha o vetor 1:\n");

    for(int i = 0; i < 10; i++)
    {
        printf("Vet 1[%d]: ", i);
        scanf("%f", &a[i]);
    }
    
    printf("\nPreencha o vetor 2:\n");

    for(int i = 0; i < 10; i++)
    {
        printf("Vet 2[%d]: ", i);
        scanf("%f", &b[i]);
    }
    
    printf("\nVetor Resultante:\n");
    
    for(int i = 0; i < 10; i++)
    {
        c[i] = a[i] * b[i];
        
        printf("Vet Resultante[%d]: %.2f\n", i, c[i]);
    }
    

    return 0;
}
