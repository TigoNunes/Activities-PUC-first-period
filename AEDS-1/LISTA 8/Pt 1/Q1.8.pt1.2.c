/******************************************************************************

1. Faça um programa que preencha uma matriz 3 X 5 com números inteiros, calcule e mostre a quantidade de
elementos entre 15 e 20.

*******************************************************************************/
#include <stdio.h>

int Contador(float matriz[3][5])
{
    int count = 0;
    
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            if (matriz[i][j] >= 15 && matriz[i][j] <= 20)
            {
                count++;
            }
        }
    }
    
    return count;
}

int main()
{
    float matriz[3][5];
    int contador;
    
    printf("Preencha a tabela e receba a quantidade de elementos entre 15 e 20.\n\n");
    
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            printf("Digite um numero para a posicao [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
    
    contador = Contador(matriz);
    
    printf("\nA quantidade de numeros entre 15 e 20 e: %d", contador);

    return 0;
}
