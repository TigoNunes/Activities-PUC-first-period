/************************************************************************************************
Faça um programa que criptografe cada palavra de uma frase, substituindo por ? a última metade de
seus caracteres.
Exemplo:
A aula é boa mas poderia ser mais curta.
? au?? ? b?? m?? pod???? s?? ma?? cu???.
************************************************************************************************/
#include <stdio.h>
#include <string.h>

void Sep(char frase[], int size)
{
    int j = 0, k = 0;
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

    //criptografia

    int crip[j];

    for(int i = 0; i <= j; i++)
    {
        crip[i] = strlen(subseq[i]) - 1;
    }

    for(int i = 0; i <= j; i++)
    {
        printf(" ");
        for(int x = 0; x <= crip[i]; x++)
        {
            if(x < (crip[i] / 2))
            {
                printf("%c", subseq[i][x]);
            }

            else
            {
                printf("?");
            }
        }
    }

    

}

int main(void)
{
    char frase[51];

    printf("\nDigite uma frase com ate 50 caracteres e receba a criptografia.\n\n");

    printf("frase: ");
    fgets(frase, sizeof(frase), stdin);

    int size = strlen(frase) - 1;

    Sep(frase, size);    
}