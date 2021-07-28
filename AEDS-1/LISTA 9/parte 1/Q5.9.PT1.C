/**************************************************************************************************************
5. Faça um programa que receba duas cadeias de caracteres e verifique se a primeira cadeia digitada é permuta-
ção da segunda cadeia, ou seja, se todos os caracteres da primeira cadeia estão presentes na segunda cadeia,

mesmo que em posições diferentes.
Exemplo:
“abccde” é uma permutação de “cbadce”, mas não é de “abcdef” nem de “abcde”
***************************************************************************************************************/

#include <stdio.h>
#include <string.h>

int Teste(char f1[], char f2[])
{
    int size1 = strlen(f1);
    int size2 = strlen(f2);

    char aux;

    if(size1 == size2)
    {
        for(int i = 1; i < size1; i++)
        {
            for(int j = i; j != 0 && f1[j] > f1[j - 1]; j--)
            {
                aux = f1[j];
                f1[j] = f1[j - 1];
                f1[j - 1] = aux;
            }
        }
        
        for(int i = 1; i < size2; i++)
        {
            for(int j = i; j != 0 && f2[j] > f2[j - 1]; j--)
            {
                aux = f2[j];
                f2[j] = f2[j - 1];
                f2[j - 1] = aux;
            }
        } 
        
        for (int i = 0; i < size1; i++) 
        {
            if(f1[i] != f2[i])
            {
                printf("\nNao e permutacao\n");
                return 1;
            }
        }
        
        printf("\nE permutacao\n");
    }

    else
    {
        printf("\nNao e permutacao\n");
    }
}

int main(void)
{
    char frase1[50], frase2[50];
    char maior;

    printf("Digite Duas frases e descubra se a primeira e permutacao da segunda\n");

    printf("Digite a primeira frase: ");
    fgets(frase1, sizeof(frase1), stdin);

    printf("Digite a segunda frase: ");
    fgets(frase2, sizeof(frase2), stdin);

    Teste(frase1, frase2);

    return 0;
}