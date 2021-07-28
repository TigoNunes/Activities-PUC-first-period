/******************************************************************************

24. Faça um programa que leia um vetor com quinze posições para números inteiros. Crie, a seguir, um vetor
resultante que contenha todos os números primos do vetor digitado. Escreva o vetor resultante.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vet[15], resultante[15];
    int primo = 1;
    
    printf("Preencha as 15 posicoes do vetor e receba um vetor resultante com todos os primos.\n");
    
    printf("\nPreencha o vetor com numeros inteiros: \n");
    
    for (int i = 0; i < 15; i++)
    {
        printf("Numero: ");
        scanf("%d", &vet[i]);
    }
    
    // inicializar o vetor resultante
    
    for (int i = 0; i < 15; i++)
    {
        resultante[i] = 0;
    }
    
    for (int i = 0; i < 15; i++)
    {
        if (vet[i] == 1)
        {
            resultante[i] = vet[i];
        } 
        
        else if (vet[i] == 2)
        {
            resultante[i] = vet[i];
        }    
        
        else
        {
            primo = 1;
            
            for (int j = 2; j < vet[i]; j++)
            {
                if (vet[i] % j == 0)
                {
                    primo = 0;
                }
                
            }
            
            if (primo == 1)
            {
                resultante[i] = vet[i];  
            }
        }
    }
    
    printf("\nVetor resultante:\n");
    
    for (int i = 0; i < 15; i++)
    {
        if(resultante[i] != 0)
        {
            printf("%d ", resultante[i]);
        }
    }

    return 0;
}
