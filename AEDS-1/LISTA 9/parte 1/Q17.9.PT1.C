/******************************************************************************************************
Faça um programa que receba uma frase e, a cada duas palavras dela, realize uma criptografia, ou seja:

a primeira letra da primeira palavra da frase concatenada com a última letra da segunda palavra, conca-
tenada com a segunda letra da primeira palavra e com a penúltima letra da segunda palavra e assim por

diante. No caso de quantidade de palavras ímpares, a última palavra deve simplesmente ser invertida.

Exemplos:
Frase: Aula com bola
Saída: Amuolca alob
Frase: Casa com janelas coloridas
Saída: Cmaosca jsaandeilraosloc
******************************************************************************************************/

#include <stdio.h>
#include <string.h>

int Sep(char frase[], int size)
{
    int j = 0, k = 0;
    char subseq[size][size];

    // inicializar a subseq

    for(int i = 0; i < size; i++)
    {
        for(int a = 0; a < size; a++)
        {
            subseq[i][a] = 0;
        }
    }

    //Separando as palavras
    
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

    //Armazenar palavras

    char criptografia[j][100];

    if((j+1) % 2 == 0 && (j + 1) == 2)
    {        
        int m = strlen(subseq[0]), n = 0;

        while(m - 1 >= 0 && n > strlen(subseq[1]))
        {
            for(int i = 0; i <= 100; i++)
            {
                if (i % 2 != 0)
                {
                    
                }
            }
        }
    }
   
}

int main(void)
{
    char frase[51];

    printf("\nDigite uma frase de ate 50 caracteres e receba uma criptografia.\n\n");
    
    printf("Digite a frase: ");
    fgets(frase, sizeof(frase), stdin);

    int size = strlen(frase);

    printf("\nsize: %d\n", size);

    Sep(frase, size);

    return 0;
}