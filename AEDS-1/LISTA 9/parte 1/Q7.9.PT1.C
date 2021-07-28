/***********************************************************************************
Faça um programa que receba uma frase e mostre quantas letras diferentes ela contém.
************************************************************************************/

#include <stdio.h>
#include <string.h>

int Calculo(int size, int cont)
{
    int quantidade = size - cont;
    
    return quantidade;
}

int main(void)
{
    char frase[50];
    int cont = 0;
    
    printf("\nDigite uma frase de ate 50 caracteres e receba quantas letras diferentes ela tem.\nLetras maiusculas serao consideradas letras diferentes das minusculas.\n");

    printf("\nFrase: ");
    fgets(frase, sizeof(frase), stdin);

    int size = strlen(frase);

    for(int i = 0; i <= (size - 1); i++)
    {
        if(frase[i] != ' ')
        {
            for(int j = i; j <= (size); j++)
            {
                if(frase[i] == frase[j + 1])
                {
                    cont++;
                }
            }
        }
        
        else
        {
            cont++;
        }
    }
    
    
    int quantidade_palavras = Calculo(size - 1, cont);
    
    printf("A quantidade de letras diferentes na frase e: %d", quantidade_palavras);
    

    return 0;
}