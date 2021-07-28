/******************************************************************************

8. Crie um programa que preencha duas matrizes 3 X 8 com números inteiros, calcule e mostre:
■ a soma das duas matrizes, resultando em uma terceira matriz também de ordem 3 x 8;
■ a diferença das duas matrizes, resultando em uma quarta matriz também de ordem 3 X 8.

*******************************************************************************/
#include <stdio.h>

void Soma(int x[3][8], int y[3][8])
{
    int soma[3][8];
    
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 8; j++) 
        {
            soma[i][j] = x[i][j] + y[i][j];
            
            printf("\nSoma[%d][%d]: %d", i, j, soma[i][j]);
        }
    }
}

void Diferenca(int x[3][8], int y[3][8])
{
    int diferenca[3][8];
    
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 8; j++) 
        {
            diferenca[i][j] = x[i][j] - y[i][j];
            
            printf("\nDiferenca[%d][%d]: %d", i, j, diferenca[i][j]);
        }
    }
}

int main()
{
    int a[3][8], b[3][8];
    
    printf("preencha duas matrizes 3 X 8 com numeros inteiros.\nReceba uma terceira matriz tambem de ordem 3 x 8 resultante da soma das matrizes e outra resultante da diferenca das matrizes.\n");

    printf("\nPreencha a primeira matriz:\n");
    
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 8; j++) 
        {
            printf("Matriz 1[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("\nPreencha a segunda matriz:\n");
    
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 8; j++) 
        {
            printf("Matriz 2[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    
    printf("\nMatriz resultante da soma:\n");
    
    Soma(a, b);
    
    printf("\n\nMatriz resultante da diferenca:\n");
    
    Diferenca(a, b);

    return 0;
}
