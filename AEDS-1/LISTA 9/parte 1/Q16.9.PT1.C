/************************************************************************************************
Faça um programa que receba uma frase e mostre quantas letras, quantos números e quantos espaços
existem nela.
************************************************************************************************/

#include <stdio.h>
#include <string.h>

void Verificacao(char frase[], int size)
{
    int letras = 0, numeros = -1, espacos = 0;

    for(int i = 0; i < size; i++)
    {
        if(frase[i] >= 'a' && frase[i] <= 'z' || frase[i] >= 'A' && frase[i] <= 'Z')
        {
            letras++;
        }

        else if(frase[i] == ' ')
        {
            espacos++;
        }

        else
        {
            numeros++;
        }
    }

    printf("\nQuantidade de letras: %d", letras);
    printf("\nQuantidade de numeros: %d", numeros);
    printf("\nQuantidade de espacos: %d\n", espacos);

}

int main(void)
{
    char frase[51];

    printf("\nDigite uma frase de ate 50 caracteres e receba quantas letras, numeros e espacos essa frase tem.\n\n");
    
    printf("Digite a frase: ");
    fgets(frase, sizeof(frase), stdin);

    int size = strlen(frase);

    Verificacao(frase, size);

    return 0;
}

