/**************************************************************
Verificar se uma palavra digitada pelo usuário é um palíndromo.
**************************************************************/

#include <stdio.h>
#include <string.h>

int main(void){
    
    char frase[51];
    char troca;
    char segundaFrase[51]; // frase para comparação
    int pts = 0;

    printf("\nDigite uma palavra e descubra se ela e um palindromo\n\n");

    printf("String: ");
    fgets(frase, sizeof(frase), stdin);
    
    // copiando a frase para a string de comparacao

    strcpy(segundaFrase, frase);
    
    // descobrindo o tamanho da string e criando um controle para troca

    int size = strlen(frase);
    int j = size; // controle para troca
    
    // invertendo a string
    
    for(int i = 0; i < j; i++)
    {
        troca = frase[i];
        frase[i] = frase[j];
        frase[j] = troca;

        j--;
    }
    
    printf("\nFrase invertida: ");
    
    for(int i = 0; i <= size; i++)
    {
        printf("%c", frase[i]);
    }
    
    printf("\n\nFrase normal:\n");
    
    for(int i = 0; i <= size; i++)
    {
        printf("%c", segundaFrase[i]);
    }
    
    // comparando a frase normal com ela invertida
    
    for(int i = 0; i < size; i++)
    {
        if(segundaFrase[i] == frase[i+2])
        {
            pts++;
        }
    }

    if(pts == size - 1) // size - 1 para evitar bug
    {
        printf("\nA frase %s e um palindromo\n", segundaFrase);
    }
    else
    {
        printf("\nA frase %s nao e um palindromo\n", segundaFrase);
    }

    return 0;
}