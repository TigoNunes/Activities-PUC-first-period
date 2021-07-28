/***************************************************************************************************
Faça um programa que receba uma frase, calcule e mostre a quantidade de palavras da frase digitada.
***************************************************************************************************/

#include <stdio.h>
#include <string.h>

int Sep(char frase[], int size)
{
    int j = 1, k = 0;
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
            subseq[j][k] = frase[i];
            j++;
            k = 0;
        }
        
        else
        {
            subseq[j][k] = frase[i];
            k++;
        }
    }

    return j;    
}

int main(void){

    char frase[51];

    printf("\nDigite uma frase e receba a quantidade de palavras que foram digitadas\n\n");

    printf("Frase: ");
    fgets(frase, sizeof(frase), stdin);

    int size = strlen(frase);

    int quantidadePalavras = Sep(frase, size);

    printf("\nA quantidade de palavras digitadas foi: %d\n", quantidadePalavras);

    return 0;
}