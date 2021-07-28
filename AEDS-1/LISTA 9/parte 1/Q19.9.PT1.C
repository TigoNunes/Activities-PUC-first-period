/*********************************************************************************************************
Faça um programa que receba uma frase e faça a criptografia dela, substituindo as vogais pelos seguintes
números: a = 1, e = 2, i = 3, o = 4 e u = 5.
*********************************************************************************************************/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char frase[51];
    char troca;
    
    printf("\nDigite uma frase e receba uma criptografia baseada nela, essa frase deve ter no maximo 50 caracteres.\n\n");
    printf("Frase: ");
    fgets(frase, sizeof(frase), stdin);

    int car = strlen(frase) - 1;
    int j = car;

    for(int i = 0; i <= car; i++)
    {
        if(frase[i] == 'a' || frase[i] == 'A') 
        {
            frase[i] = 1;
        }

        if(frase[i] == 'e' || frase[i] == 'E')
        {
            frase[i] = 2;
        }

        if(frase[i] == 'i' || frase[i] == 'I')
        {
            frase[i] = 3;
        }

        if(frase[i] == 'o' || frase[i] == 'O')
        {
            frase[i] = 4;
        }

        if(frase[i] == 'u' || frase[i] == 'U')
        {
            frase[i] = 5;
        }
    }

    printf("\nSenha: ");

    for(int i = 0; i <= car; i++)
    {
        if(frase[i] >= 'a' && frase[i] <= 'z' || frase[i] >= 'A' && frase[i] <= 'Z')
        {
            printf("%c", frase[i]);
        }
        
        else if(frase[i] != ' ')
        {
            printf("%d", frase[i]);
        }
        
        else
        {
            printf("%c", frase[i]);
        }
    }

    printf("\n");

    return 0;
}