/*********************************************************************************************************
Faça um programa que receba uma frase e um caractere e verifique em que posição da frase o caractere digi-
tado aparece pela primeira vez.
*********************************************************************************************************/

#include <stdio.h>
#include <string.h>

void Verificador(char fra[], int tamanho, char caractere)
{
    int pts = 0;

    for(int i = 0; i < tamanho; i++)
    {
        if(fra[i] == caractere)
        {
            printf("O caractere (%c) apareceu pela primeira vez na posicao %d", caractere, i);
            pts++;
            break;
        }
    }

    if (pts == 0)
    {
        printf("\nO caractere (%c) nao esta presente na frase.\n", caractere);
    }
    
}

int main(void)
{
    char frase[51];
    char caractere;

    printf("\nDigite uma frase com ate 50 caracteres(letras, espacos, simbolos). Depois digite um caractere e veja em qual posicao ele aparece pela primeira vez\n\n");

    printf("Frase: ");
    fgets(frase, sizeof(frase), stdin);

    printf("Caractere: ");
    scanf(" %c", &caractere);

    int size = strlen(frase);    

    Verificador(frase, size, caractere);

    return 0;
}