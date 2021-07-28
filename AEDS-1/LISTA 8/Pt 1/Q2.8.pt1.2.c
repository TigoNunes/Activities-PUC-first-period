/******************************************************************************

2. Crie um programa que preencha uma matriz 2 X 4 com números inteiros, calcule e mostre:
■ a quantidade de elementos entre 12 e 20 em cada linha;
■ a média dos elementos pares da matriz.

*******************************************************************************/
#include <stdio.h>

int Contador(int matriz[2][4])
{
    int count = 0;
    
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            if (matriz[i][j] >= 12 && matriz[i][j] <= 20)
            {
                count++;
            }
        }
    }
    
    return count;
}

float Media_Pares(int matriz[2][4])
{
    int count = 0;
    float media;
    
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            if (matriz[i][j] % 2 == 0);
            {
                count++;
            }
        }
    }
    
    media = (count / 8);
    
    return media;
}

int main()
{
    int matriz[2][4];
    int contador;
    float media;
    
    printf("Preencha a tabela e receba a quantidade de elementos entre 12 e 20.\n");
    printf("Tambem receba a media de numeros pares.\n\n");
    
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 4; j++) 
        {
            printf("Digite um numero para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    contador = Contador(matriz);
    
    printf("\nA quantidade de numeros entre 12 e 20 e: %d", contador);
    
    media = Media_Pares(matriz);
    
    printf("\nA media de numeros pares e de: %.2f", media);

    return 0;
}
