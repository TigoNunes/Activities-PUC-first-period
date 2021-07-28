/*****************************************************************************************************
Faça um programa que receba uma frase e faça a criptografia dela, utilizando a representação ASCII de
cada caractere mais um espaço, e depois proceda à sua descriptografia.
*****************************************************************************************************/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char frase[51];


    printf("\nDigite uma frase de ate 50 caracteres e receba sua criptografia.\n\n");
    printf("frase: ");
    fgets(frase, sizeof(frase), stdin);

    int size = strlen(frase);

    char senha[size];

    printf("\nCriptografia: ");

    for(int i = 0; i < size; i++)
    {
        printf("%d", frase[i] + 2);
        senha[i] = frase[i] + 2;
    }

    printf("\n\n");

    printf("Decriptografia: ");

    for(int i = 0; i < size; i++)
    {
        printf("%c", senha[i]);
        
    }


    return 0;
}
