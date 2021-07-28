/*****************************************************************************************************
Faça um programa que receba uma frase e faça a criptografia, retirando das palavras suas vogais. O
programa deverá armazenar essas vogais e suas posições originais em vetores, mostrar a frase cripto-
grafada e posteriormente descriptografá-la.
*****************************************************************************************************/
#include <stdio.h>
#include <string.h>

void Sep(char frase[], int size)
{
    int j = 0, k = 0;
    char subseq[size][size];
    char *crip[size];
    
    //inicializar crip
    
    for (int i = 0; i <= size; i++) 
    {        
        for(int a = 0; a <= size; a++)
        {
            crip[i] = 0;
            subseq[i][a] = 0;
        }
                
    }

    //separacao

    strcpy(subseq[0], frase);

    for(int i = 0; i < size; i++)
    {
        for(int a = 0; a < size; a++)
        {
            if(subseq[i][a] == 'a' || subseq[i][a] == 'e' || subseq[i][a] == 'i' || subseq[i][a] == 'o' || subseq[i][a] == 'u' ||subseq[i][a] == 'A' || subseq[i][a] == 'E' || subseq[i][a] == 'I' || subseq[i][a] == 'O' || subseq[i][a] == 'U')
            { 
                *crip[j] = subseq[i][a];
                j++;                      
            }
            
            else
            {                
                printf("%c", subseq[i][1]); 
            }
        }
    }
}

int main(void)
{
    char frase[51];

    printf("\nDigite uma frase com ate 50 caracteres e receba a criptografia.\n\n");

    printf("Sequencia: ");
    fgets(frase, sizeof(frase), stdin);

    int size = strlen(frase);

    Sep(frase, size);


    return 0;
}