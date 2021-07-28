/******************************************************************************

Faça uma função para calcular a multiplicação de duas matrizes n x n.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    
    printf("Preencha duas matrizes n x n e receba a multiplicacao das matrizes.\n\n");
    
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    int x[n][n], y[n][n], res[n][n];
    
    printf("\nPreencha a matriz 1:\n");
    
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("Matriz 1[%d][%d]: ", i, j);
            scanf("%d", &x[i][j]);
        }
    }
    
    printf("\nPreencha a matriz 2:\n");
    
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("Matriz 2[%d][%d]: ", i, j);
            scanf("%d", &y[i][j]);
        }
    }
    
    // calculo da multiplicacao
    
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            res [i][j] = 0;
        }
    }
    
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            for (int l = 0; l < n; l++) 
            {
                res[i][j] = res[i][j] + (x[i][l] * y[l][j]);
            }
        }
    }
    
    printf("\nResultado:\n");
    
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("\nResultado[%d][%d]: %d", i, j, res[i][j]);
        }
    }

    return 0;
}
