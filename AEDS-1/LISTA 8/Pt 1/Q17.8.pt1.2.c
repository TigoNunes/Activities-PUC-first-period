/******************************************************************************

17 - Faça um programa que preencha e mostre a média dos elementos da diagonal principal de uma matriz
10 X 10.

*******************************************************************************/
#include <stdio.h>

int Diagonal_principal(int x[][10])
{
    int soma = 0;
    int media;
    
    for (int i = 0; i < 10; i++) 
    {
        soma = soma + x[i][i];
    }
    
    media = soma / 10;
    
    return media;
}

int main()
{
    int mat[10][10];
    
    printf("Preencha as 100 posicoes da matriz e receba a media da diagonal.\n\n");
    
    for (int i = 0; i < 10; i++) 
    {
        for (int j = 0; j < 10; j++) {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    
    int media = Diagonal_principal(mat);
    
    printf("\nMedia dos numeros na diagonal: %d", media);

    return 0;
}
