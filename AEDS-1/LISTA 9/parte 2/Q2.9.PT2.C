/*******************************************************
Faça um programa que inverta os caracteres de uma string
*******************************************************/

#include <stdio.h>
#include <string.h>

int main(void){
    
    char frase[51];
    char troca;

    printf("\nDigite uma string de 50 caracteres e receba ela invertida.\n\n");

    printf("String: ");
    fgets(frase, sizeof(frase), stdin);

    // descobrindo o tamanho da string e criando um controle para troca

    int size = strlen(frase);
    int j = size; // controle para troca

    for(int i = 0; i <= j; i++)
    {
        troca = frase[i];
        frase[i] = frase[j];
        frase[j] = troca;

        j--;
    }

    for(int i = 0; i <= size; i++)
    {
        printf("%c", frase[i]);
    }

    return 0;
}