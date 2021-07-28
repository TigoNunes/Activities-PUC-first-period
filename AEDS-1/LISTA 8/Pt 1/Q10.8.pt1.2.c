/******************************************************************************

10. Crie um programa que preencha uma matriz 5 X 5 com números inteiros, calcule e mostre a soma:
■ dos elementos da linha 4;
■ dos elementos da coluna 2;
■ dos elementos da diagonal principal;
■ dos elementos da diagonal secundária;
■ de todos os elementos da matriz.

*******************************************************************************/
#include <stdio.h>

int Soma_linha(int x[][5])
{
    int soma = 0;
    
    for (int i = 0; i < 5; i++) 
    {
        soma = soma + x[4][i];
    }
    
    return soma;
}

int Soma_coluna(int x[][5])
{
    int soma = 0;
    
    for (int i = 0; i < 5; i++) 
    {
        soma = soma + x[i][i];
    }
    
    return soma;
}

int Diagonal_principal(int x[][5])
{
    int soma = 0;
    
    for (int i = 0; i < 5; i++) 
    {
        soma = soma + x[i][i];
    }
    
    return soma;
}

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

int Soma_total(int x[][5])
{
    int soma = 0;
    
    for (int i = 1; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            soma = soma + x[i][j];
        }
    }
    
    return soma;
}

int main()
{
    int mat[5][5];
    
    printf("Preencha a matriz 5 X 5 e receba:\nSoma dos elementos da linha 4;\nSoma dos elementos da coluna 2;\nSoma dos elementos da diagonal principal;\nSoma dos elementos da diagonal secundaria;\nSoma de todos os elementos da matriz.\n\n");

    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            printf("V[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    
    int soma_linha4 = Soma_linha(mat);
    
    int soma_coluna2 = Soma_coluna(mat);
    
    int diagonal_principal = Diagonal_principal(mat);
    
    int diagonal_secundaria = Diagonal_secundaria(mat);
    
    int soma_total = Soma_total(mat);
    
    printf("\nSoma dos elementos da linha 4: %d", soma_linha4);
    
    printf("\nSoma dos elementos da coluna 2: %d", soma_coluna2);
    
    printf("\nSoma dos elementos da diagonal principal: %d", diagonal_principal);
    
    printf("\nSoma dos elementos da diagonal secundaria: %d", diagonal_secundaria);
    
    printf("\nSoma de todos os elementos da matriz: %d", soma_total);
    
    return 0;
}
