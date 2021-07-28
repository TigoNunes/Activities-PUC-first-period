/**********************************************************************************************************
8. Faça um programa que receba uma frase e um caractere e verifique se o caractere digitado é encontrado na
frase ou não e, se for encontrado, quantas vezes isso acontece.
***********************************************************************************************************/
#include <stdio.h>
#include <string.h>

void Verificador(char fra[], int tamanho, char caractere)
{
    int pts = 0;

    for(int i = 0; i < tamanho; i++)
    {
        if(fra[i] == caractere)
        {
            pts++;
        }
    }

    if (pts > 0)
    {
        printf("\nO caractere (%c) se repetiu %d vezes.\n", caractere, pts);
    }

    else
    {
        printf("\nO caractere (%c) nao esta presente na frase.\n", caractere);
    }
}

int main(void)
{
    char frase[51];
    char caractere;

    printf("\nDigite uma frase com ate 50 caracteres(letras, espacos, simbolos). Depois digite um caractere e veja se ele esta presente na frese\n\n");

    printf("Frase: ");
    fgets(frase, sizeof(frase), stdin);

    printf("Caractere: ");
    scanf(" %c", &caractere);

    int size = strlen(frase);    

    Verificador(frase, size, caractere);

    return 0;
}