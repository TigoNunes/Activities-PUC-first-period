/******************************************************************************

Faça um programa que receba uma frase, calcule e mostre a quantidade de palavras da frase digitada. Antes
de contar a quantidade de palavras da frase, esta deverá passar pelas seguintes correções:
a) Eliminação de espaços no início da frase.
b) Eliminação de espaços no fim da frase.
c) Eliminação de espaços duplicados entre palavras.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char frase[50];
    int cont2 = 1;

    printf("Digite uma frase de ate 50 caracteres e receba a quantidade de palavras\n");

    printf("\nFrase: ");
    fgets(frase, sizeof(frase), stdin);

    int cont = strlen(frase);

    printf("\nSaida:\n");

    for(int i = 0; i <= cont; i++)
    {
        if(frase[i] == ' ')
        {
            if(frase[i + 1] != ' ')
            {
                printf("%c", frase[i+1]);
                i++;
                cont2++;
            }            
        }
        else
        {
            printf("%c", frase[i]);
        }
    }

    printf("Numero de palavras na frase: %d", cont2);

    return 0;
}
