/******************************************************************************

22. Criar um programa que:
■ utilize uma sub-rotina para receber os elementos de uma matriz 10X5 de números reais;
■ utilize uma sub-rotina para calcular a soma de todos os elementos localizados abaixo da sexta linha
dessa matriz;

*******************************************************************************/
#include <stdio.h>

void Calcular(int x[10][5])
{
    int soma = 0;
    
    for (int i = 6; i < 10; i++) 
    {
        for (int j = 0; j < 5; j++)
        {
            soma = soma + x[i][j];
        }
    }
    
    printf("\nResultado: %d", soma);
}

int main()
{
    int mat[10][5];
    
    printf("Preencha a matriz 10X5 e receba a soma dos elemento localizados abaixo da sexta linha.\n\n");
    
    for (int i = 0; i < 10; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            printf("M[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    
    Calcular(mat);

    return 0;
}
