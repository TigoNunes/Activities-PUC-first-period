/******************************************************************************

7. Elabore um programa que preencha uma matriz M de ordem 4 X 6 e uma segunda matriz N de ordem 6 X
4, calcule e imprima a soma das linhas de M com as colunas de N.

*******************************************************************************/
#include <stdio.h>

void Soma(int x[4][6], int y[6][4])
{
    int soma;
    
    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 6; j++) 
        {
            soma = x[i][j] + y[j][i];
            
            printf("\n%d + %d = %d",x[i][j], y[j][i], soma);
        }
    }
}

int main()
{
    int m[4][6], n[6][4];
    
    printf("Preencha 2 matrizes com numeros inteiros, uma M 4 X 6 e uma N 6 X 4.\nReceba a soma das linhas de M com as colunas de N.\n\n");
    
    // Preencher a matriz M
    
    printf("Matriz M: \n");
    
    for (int i = 0; i < 4; i++) 
    {
        for (int j = 0; j < 6; j++) 
        {
            printf("M[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    
    // Preencher a matriz N
    
    printf("\nMatriz N: \n");
    
    for (int i = 0; i < 6; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            printf("M[%d][%d]: ", i, j);
            scanf("%d", &n[i][j]);
        }
    }
    
    Soma(m, n);

    return 0;
}
