/******************************************************************************

18. Crie um programa que preencha uma matriz 5 X 5 de números reais, calcule e mostre a soma dos ele-
mentos da diagonal secundária.

*******************************************************************************/
#include <stdio.h>

int Diagonal_secundaria(int x[][5])
{
    int soma = 0;
    int j = 0;
    for (int i = 1; i < 5; i++) 
    {
        soma = soma + x[i][j];
        j++;
    }
    
    return soma;
}

int main()
{
    int mat[5][5];
    
    printf("Preencha a matriz 5 X 5 e receba a soma dos numeros da diagonal secundaria.\n\n");
    
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    
    int soma = Diagonal_secundaria(mat);
    
    printf("\nSoma da diagonal secundaria: %d", soma);

    return 0;
}
