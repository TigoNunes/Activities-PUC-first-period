/******************************************************************************

18. Faça um programa que preencha um vetor com quinze números, determine e mostre:
■ o maior número e a posição por ele ocupada no vetor;
■ o menor número e a posição por ele ocupada no vetor.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float vet[15];
    float maior, menor;
    
    printf("Preencha 15 vetores e receba o maior e o menor numero e onde eles ocupam.\n\n");
    
    for(int i = 0; i < 15; i++)
    {
        printf("Preencha o vetor[%d]: ", i);
        scanf("%f", &vet[i]);
    }
    
    maior = vet[0];
    int j = 0;
    
    for (int i = 0; i < 15; i++)
    {
        if (vet[i] > maior)
        {
            maior = vet[i];
            j = i;
        }
    }
    
    printf("\nMaior: %.2f vet[%d]", maior, j);
    
    menor = vet[0];
    int k = 0;
    
    for (int i = 0; i < 15; i++)
    {
        if (vet[i] < menor)
        {
            menor = vet[i];
            k = i;
        }
    }
    
    printf("\nMenor: %.2f vet[%d]", menor, k);

    return 0;
}
