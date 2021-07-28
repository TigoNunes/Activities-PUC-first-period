/******************************************************************************

9. Faça um programa que preencha uma matriz 3 X 3 com números reais e outro valor numérico digitado pelo
usuário. O programa deverá calcular e mostrar a matriz resultante da multiplicação do número digitado por
cada elemento da matriz.

*******************************************************************************/
#include <stdio.h>

void Resultante(int x[][3], int num)
{
    int resultante[3][3];
    
    for (int i = 0; i < 3; i++) 
    {
        for(int a = 0; a < 3; a++)
        {
            resultante[i][a] = x[i][a] * num;
            printf("\nResultante[%d][%d]: %d", i, a, resultante[i][a]);
            
        }
    }
}

int main()
{
    int matriz[3][3], num = 1, n;
    
    printf("Digite um numero pelo qual voce deseja que a matrix abaixo seja multiplicada. Receba uma nova matriz com os resultados.\n\n");

    for (int i = 0; i < 3; i++) 
    {
        for(int a = 0; a < 3; a++)
        {
            matriz[i][a] = num;
            printf("Matriz[%d][%d]: %d\n", i, a, matriz[i][a]);
            num++;
        }
    }

    printf("\nDigite o numero pelo qual deseja multiplicar:\n");
    printf("Numero: ");
    scanf("%d", &n);
    
    printf("\nresultado: \n");
    
    Resultante(matriz, n);
    
    return 0;
}
