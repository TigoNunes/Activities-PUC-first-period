/******************************************************************************

21. Faça uma sub-rotina que receba uma matriz 10X10 e determine o maior elemento acima da diagonal
principal. Esse valor deverá ser mostrado no programa principal.

*******************************************************************************/
#include <stdio.h>

void Maior(int x[][10])
{
    int maior = 0;
    
    for (int i = 0; i < 10; i++) 
    {
        for(int j = i + 1; j < 10; j++)
        {
            if (x[i][j] > maior)
            {
                maior = x[i][j];
            }
        }
    }
    
    printf("\nMaior numero: %d", maior);
}

int main()
{
    int mat[10][10];
    
    printf("Preencha a matriz e receba o maior numero acima da diagonal principal.\n\n");
    
    for (int i = 0; i < 10; i++) 
    {
        for (int j = 0; j < 10; j++) 
        {
            printf("Numero[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    
    Maior(mat);

    return 0;
}
