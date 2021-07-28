/******************************************************************************

19. Faça um programa que preencha uma matriz 8 X 6 de inteiros, calcule e mostre a média dos elementos
das linhas pares da matriz.

*******************************************************************************/
#include <stdio.h>

void Media_Linhas_Pares(int x[][6])
{
    int soma = 0;
    
    for (int i = 0; i < 8; i++) 
    {
        for (int j = 0; j < 6; j++) 
        {
            if(i % 2 == 0)
            {
                soma = soma + x[i][j];
            }
        }
    }
    
    float media = soma / 24;
    
    printf("\nMedia dos elementos nas linhas pares: %.2f", media);
}

int main()
{
    int a[8][6];
    
    printf("Preencha uma matriz 8 X 6 de inteiros. Receba a media dos elementos nas linhas pares.\n\n");
    
    for (int i = 0; i < 8; i++) 
    {
        for (int j = 0; j < 6; j++) 
        {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    Media_Linhas_Pares(a);

    return 0;
}
