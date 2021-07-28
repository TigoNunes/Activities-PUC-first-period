/************************************************************************************************************
Faça um programa para criptografar uma frase dada pelo usuário. Na criptografia, a frase deverá ser invertida
e as consoantes deverão ser trocadas por #.
Exemplo:
Frase: EU ESTOU NA ESCOLA
Saída: A#O##E A# UO##E UE
************************************************************************************************************/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char frase[51];
    char troca;
    
    printf("Digite uma frase e receba uma criptografia baseada nela, essa frase deve ter no maximo 50 caracteres.\n");
    printf("Frase: ");
    fgets(frase, sizeof(frase), stdin);

    int car = strlen(frase);
    int j = car;

    for(int i = 0; i <= j; i++)
    {
        troca = frase[i];
        frase[i] = frase[j];
        frase[j] = troca;

        j--;
    }

    for(int i = 0; i <= car; i++)
    {
        if(frase[i] != 'a' && frase[i] != 'A' && frase[i] != 'e' && frase[i] != 'E' && frase[i] != 'i' && frase[i] != 'I' && frase[i] != 'o' && frase[i] != 'O' && frase[i] != 'u' && frase[i] != 'U' && frase[i] != '\0' && frase[i] != ' ')
        {
            frase[i] = '#';
        }
    }

    printf("\nSenha: ");

    for(int i = 0; i <= car; i++)
    {
        printf("%c", frase[i]);
    }

    printf("\n");

    return 0;
}