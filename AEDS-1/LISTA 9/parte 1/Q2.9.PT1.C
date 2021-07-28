/******************************************************************************

2. Faça um programa que receba uma frase e mostre cada palavra dela em uma linha separada.
Exemplo:
Frase: COMPUTADORES SÃO MÁQUINAS POTENTES
Saída:
COMPUTADORES
SÃO
MÁQUINAS
POTENTES

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char frase[50];

    printf("Digite uma frase de ate 50 caracteres e receba as palavras divididas por linhas.\n");

    printf("\nFrase: ");
    fgets(frase, sizeof(frase), stdin);

    int cont = strlen(frase);

    printf("\nSaida:\n");

    for(int i = 0; i <= cont; i++)
    {
        if(frase[i] == ' ')
        {
            printf("\n");
        }
        else
            printf("%c", frase[i]);
    }

    return 0;
}
