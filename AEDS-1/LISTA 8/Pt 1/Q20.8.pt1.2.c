/******************************************************************************

20. Elabore um programa que preencha uma matriz 5 X 5 com números reais e encontre o maior valor da
matriz. A seguir, o programa deverá multiplicar cada elemento da diagonal principal pelo maior valor
encontrado e mostrar a matriz resultante após as multiplicações.

*******************************************************************************/
#include <stdio.h>

void Resultante(int x[][5])
{
    int res[5][5];
    int maior = 0;
    
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            if (x[i][j] > maior)
            {
                maior = x[i][j];
            }
        }
    }
    
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            if (j == i)
            {
                res[i][j] = x[i][j] * maior;
                printf("\nResultante[%d][%d]: %d", i, j, res[i][j]);
            }
            
            else
            {
                res[i][j] = x[i][j];
                printf("\nResultante[%d][%d]: %d", i, j, res[i][j]);
            }
        }
    }
}

int main()
{
    int mat[5][5];
    
    printf("Preencha a matriz 5 X 5 com numeros Rereais e receba uma matriz resultante da multiplicacao da diagonal principal pelo maior numero.\n\n");
    
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            printf("Matriz [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    
    Resultante(mat);

    return 0;
}
