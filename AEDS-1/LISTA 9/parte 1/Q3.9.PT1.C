/******************************************************************************

3. Faça um programa que receba uma frase e gere uma nova, retirando os espaços excedentes no início e no fim
da frase e entre suas palavras.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char frase[50];

    printf("Digite uma frase de ate 50 caracteres e receba as palavras sem os espacos excedentes no inicio e no fim.\n");

    printf("\nFrase: ");
    fgets(frase, sizeof(frase), stdin);

    int cont = strlen(frase);

    printf("\nSaida:\n");

    for(int i = 0; i <= cont; i++)
    {
        if(frase[i] == ' ')
        {
            printf("%c", frase[i+1]);
            i++;
        }
        else
            printf("%c", frase[i]);
    }

    return 0;
}