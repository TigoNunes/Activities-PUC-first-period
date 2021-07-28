/******************************************************************************

10. Faça um programa que preencha um vetor com dez números inteiros e um segundo vetor com cinco números 
inteiros, calcule e mostre dois vetores resultantes. O primeiro vetor resultante será composto pela soma
de cada número par do primeiro vetor somado a todos os números do segundo vetor. O segundo vetor resultante
será composto pela quantidade de divisores que cada numero impar do primeiro vetor tem no segundo vetor

*******************************************************************************/
#include <stdio.h>

void Resultante1 (int x[], int y[])
{
    int resultante1[10];
    
    for (int i = 0; i < 10; i++)
    {
        if(x[i] % 2 == 0)
        {
            resultante1[i] = x[i];
            
            for (int j = 0; j < 5; j++)
            {
                resultante1[i] = resultante1[i] + y[j]; 
            }
            
            printf("%d. ", resultante1[i]);
        }
    }
}

void Resultante2 (int x[], int y[])
{
    int resultante2[10];
    
    //inicializar vetor resultante2
    
    for(int i = 0; i < 10; i++)
    {
        resultante2[i] = 0;
    }
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (x[i] % y[j] == 0)
            {
                resultante2[i] = resultante2[i] + 1;
            }
        }
        
        printf("%d. ", resultante2[i]);
    }
}

int main()
{
    int primeiro[10], segundo[5];
    
    printf("Nesse programa voce ira preencher 2 vetores e receber 2 vetores resultantes.\n\n");
    
    printf("Primeiro vetor. Preencha com 10 numeros:\n");
    
    for(int i = 0; i < 10; i++)
    {
        printf("vetor[%d]: ", i);
        scanf("%d", &primeiro[i]);
    }
    
    printf("\nSegundo vetor. Preencha com 5 numeros:\n");
    
    for(int i = 0; i < 5; i++)
    {
        printf("vetor[%d]: ", i);
        scanf("%d", &segundo[i]);
    }
    
    printf("\nPrimeiro vetor resultante. Soma dos pares do primeiro vetor com os numeros do segundo: ");
    
    Resultante1 (primeiro, segundo);
    
    printf("\nSegundo vetor resultante. Soma dos pares do primeiro vetor com os numeros do segundo: ");
    
    Resultante2 (primeiro, segundo);

    return 0;
}
