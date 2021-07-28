/*******************************************************************************************************
11. Faça um programa que receba uma frase e mostre quantas vezes cada palavra aparece na frase digitada.
*******************************************************************************************************/

#include <stdio.h>
#include <string.h>

int Sep(char frase[], int size)
{
    int j = 0, k = 0;
    char subseq[size][size];
    
    //inicializar subseq
    
    for (int i = 0; i <= size; i++) {
        for (int a = 0; a < size; a++) {
            subseq[i][a] = 0;
        }
    }

    //separacao

    for(int i = 0; i < size; i++)
    {
        if(frase[i] == ' ')
        {
            j++;
            k = 0;
        }
        
        else
        {
            subseq[j][k] = frase[i];
            k++;
        }
    }
    
    for(int i = 0; i <= j; i++)
    {
        printf("\nFrase: %s ", subseq[i]);
    } 
    
    // verificacao

    int verificacao[j];

    for (int i = 0; i <= j; i++) 
    {
        
        verificacao[i]= 0;
        
    }
    
    for(int i = 0; i <= j; i++)
    {
        for(int x = i; x <= j; x++)
        {
            if(strcmp(subseq[i], subseq[x]) == 0)
            {
                verificacao[i] += 1;
            }
        }
    }
    
    for(int i = 0; i <= j; i++)
    {
        printf("\nA frase %s repetiu %d vezes", subseq[i], verificacao[i]);
    }    
}


int main(void)
{
    char frase[51];

    printf("\nDigite uma frase de ate 50 caracteres e receba quantas vezes cada palavra foi escrita.\n\n");
    
    printf("Digite a frase: ");
    fgets(frase, sizeof(frase), stdin);

    int size = strlen(frase);

    Sep(frase, size);

    return 0;
}