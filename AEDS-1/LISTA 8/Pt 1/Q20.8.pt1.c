/******************************************************************************

20. Faça um programa que leia um vetor com dez posições para números inteiros e mostre somente os nú-
meros positivos.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vet[10];
    
    printf("Digite 10 numeros inteiro e receba apenas os positivos.\n\n");
    
    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }
    
    printf("\nResultado: ");
    
    for (int i = 0; i < 10; i++)
    {
        if (vet[i] >= 0)
        {
            printf("%d ", vet[i]);
        }
    }

    return 0;
}
