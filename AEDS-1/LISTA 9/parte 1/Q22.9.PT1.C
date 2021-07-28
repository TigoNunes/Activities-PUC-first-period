/**************************************************************************************************
Considere uma string composta por várias subsequências, por exemplo, cccaaaabbbbxdddddddddaaannn.
A menor subsequência é a da letra x, com apenas um elemento; a maior subsequência é a da letra d,
com nove elementos. Faça um programa para ler uma string e mostrar qual é a letra que ocorre na
maior subsequência e o tamanho dessa subsequência.
Exemplo:
Entrada: aaabbbbaaa
Saída: maior b, tamanho 4
**************************************************************************************************/

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
        if(frase[i] != frase[i + 1])
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

    // descobrir qual e o maior
    
    char maior[j][size];
    
    strcpy(maior[0], subseq[0]);
    
    for (int i = 0; i <= j; i++) 
    {
        if(strlen(subseq[i]) > strlen(maior[0]))
        {
           strcpy(maior[0], subseq[i]); 
        }
    }
    int tamanho = strlen(maior[0]);
    printf("\nMaior subsequencia: %s. Tamanho: %d\n", maior[0], tamanho);
    
}

int main(void)
{
    char seq[51];

    printf("\nDigite uma sequencia de subsequencias de ate 50 caracteres (EX: cccaaaabbbbxdddddddddaaannn) e descubra qual subsequencia e a maior.\n\n");

    printf("Sequencia: ");
    fgets(seq, sizeof(seq), stdin);

    int size = strlen(seq) - 1;

    Sep(seq, size);


    return 0;
}