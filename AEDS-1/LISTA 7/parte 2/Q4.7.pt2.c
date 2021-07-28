/******************************************************************************

4- Faça uma função recursiva para verificar se uma palavra é palíndromo (Ex. aba, abcba).

*******************************************************************************/
#include <stdio.h>

int Revisao (int x, char vet[])
{
    static int y = 0;
    
    if (vet[x - 1] == vet[y] && x - 1 != y)
    {
        y++;
        return Revisao (x - 1, vet);
    }
    
    else if (vet[x - 1] == vet[y] && x - 1 == y)
    {
        return 1;
    }
    
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    
    printf("Digite quantas letras sua palavra tera e depois digite cada letra separadamente.\n");
    
    printf("Numero de letras: ");
    scanf("%d", &n);
    
    char A[n];
    
    for (int i = 0; i <= n; i++)
    {
        printf("Digite a letra: ");
        scanf(" %c", &A[i]);
    }
    
    int resposta = Revisao (n, A);
    
    if (resposta == 1)
        printf("Palindromo");
    
    else
        printf("Nao palindromo");
    

    return 0;
}
