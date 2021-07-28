/**************************************************************************************************
Faça um programa que receba uma frase e realize a criptografia dela, trocando a primeira e a última
palavra de lugar.
Exemplo:
Frase: ESTRELAS E LUA ESTÃO NO CÉU
Saída: CÉU E LUA ESTÃO NO ESTRELAS
**************************************************************************************************/
#include <stdio.h>
#include <string.h>

void Sep(char frase[], int size)
{
    int j = 0, k = 0;
    char senha[size][size];
    
    //inicializar senha
    
    for (int i = 0; i <= size; i++) {
        for (int a = 0; a < size; a++) {
            senha[i][a] = 0;
        }
    }

    for(int i = 0; i < size; i++)
    {
        if(frase[i] == ' ')
        {
            j++;
            k = 0;
        }
        
        else
        {
            senha[j][k] = frase[i];
            k++;
        }
    }

    for (int i = 0; i <= j; i++) 
    {
        for (int a = 0; a < size; a++) 
        {
            if(senha[i][a] < 'A' || senha[i][a] > 'z')
            {
                senha[i][a] = '\0';
            }
        }
    }
    
    // criptografia
    
    char troca[size][size];
    
    for (int i = 0; i <= size; i++) {
        for (int a = 0; a < size; a++) {
            troca[i][a] = 0;
        }
    }
    
    for (int i = 0; i <= size; i++) 
    {
        troca[j][i] = senha[0][i];
        senha[0][i] = senha[j][i];
        senha[j][i] = troca[j][i];
    }
    
    for (int i = 0; i <= j; i++) {
        for (int a = 0; a < size; a++) {
            
            printf("%c", senha[i][a]);
            
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

    Sep(frase, size);

    return 0;
}