/******************************************************************************

14. Faça um programa que preencha uma matriz 2 X 3, calcule e mostre a quantidade de elementos da ma-
triz que não pertencem ao intervalo [5,15].

*******************************************************************************/
#include <stdio.h>

int Contador(float matriz[][3])
{
    int count = 0;
    
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            if (matriz[i][j] > 15 || matriz[i][j] < 5)
            {
                count++;
            }
        }
    }
    
    return count;
}

int main()
{
    float mat[2][3];
    
    printf("Preencha a matriz e receba quantos numeros nao fazem parte do intervalo [5,15]\n\n");
    
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%f", &mat[i][j]);
        }
    }
    
    int contador = Contador(mat);
    
    printf("\nQuantidade de numeros que nao se encaixam no intervelo [5,15]: %d", contador);

    return 0;
}
