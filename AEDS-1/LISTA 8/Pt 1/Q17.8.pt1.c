/******************************************************************************

17. Faça um programa que preencha dois vetores de dez posições cada, determine e mostre um terceiro contendo 
os elementos dos dois vetores anteriores ordenados de maneira decrescente.

*******************************************************************************/
#include <stdio.h>

void Ordenador_Decrescente(int num[])  
{  
    int i, j, min, swap; 
    
    for (i = 0; i < 19; i++)
    { 
        min = i;
        
        for (j = (i+1); j < 20; j++) 
        { 
          if(num[j] > num[min]) 
          { 
            min = j; 
          } 
        }
        
        if (i != min) 
        { 
          swap = num[i]; 
          num[i] = num[min]; 
          num[min] = swap; 
        } 
    } 
    
    for (int k = 0; k < 20; k++)
    {
        printf("Vetor 3[%d]: %d\n", k, num[k]);
    }
}

int main()
{
    int a[10], b[20], c[20];
    int aux;
    
    printf("Preencha 2 vetores de 10 numeros cada e depois veja 1 vetor que junta e ordena os numeros dos outros vetores.\n\n");

    printf("Vetor 1:\n");
    
    for (int i = 0; i < 10; i++) 
    {
        printf("Vetor 1[%d]: ", i);
        scanf("%d", &a[i]);
    }
    
    printf("\nVetor 2:\n");
    
    for (int i = 10; i < 20; i++) 
    {
        printf("Vetor 2[%d]: ", i);
        scanf("%d", &b[i]);
    }

    for (int j = 0; j < 10; j ++)
    {
        c[j] = a[j];
    }
    
    for (int j = 10; j < 20; j ++)
    {
        c[j] = b[j];
    }
    
    printf("\nVetor 1 e 2 juntos ordenados de forma decrescente:\n");
    
    Ordenador_Decrescente(c);
    
    


    return 0;
}

