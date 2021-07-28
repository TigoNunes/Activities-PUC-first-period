/******************************************************************************

13. Elabore um programa que: preencha uma matriz 6 X 4; recalcule a matriz digitada, onde cada linha deverá 
ser multiplicada pelo maior elemento da linha em questão; mostre a matriz resultante.

*******************************************************************************/
#include <stdio.h>

void Resultante(int x[][4])
{
    int res[6][4];
    
    for (int i = 0; i < 6; i++) 
    {
        int maior = 0;
        
        for (int j = 0; j < 4; j++) 
        {
            if (x[i][j] > maior)
            {
                maior = x[i][j];
            }
            
        }
        
        for (int j = 0; j < 4; j++)
        {
           res[i][j] = x[i][j] * maior;
           
           printf("\nResultante[%d][%d]: %d", i, j, res[i][j]);
        }
        
    }
}

int main()
{
    int mat[6][4];
    
    printf("Preencha a matriz 6 X 4 e receba a resultante.\n");
    
    for (int i = 0; i < 6; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            printf("Matriz [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    
    printf("\nResultado:\n");
    
    Resultante(mat);

    return 0;
}
