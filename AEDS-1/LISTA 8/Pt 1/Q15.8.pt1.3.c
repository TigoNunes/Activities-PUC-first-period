/******************************************************************************

15. Elabore uma sub-rotina que receba um vetor X de 15 números inteiros como parâmetro e retorne a
quantidade de valores pares em X.

*******************************************************************************/
#include <stdio.h>

int Cont(int x[])
{
    int cont = 0;
    
    for (int i = 0; i < 15; i++) 
    {
        if(x[i] % 2 == 0)
        {
            cont += 1;
        }
    }
    
    return cont;
}

int main()
{
    int vet[15];
    int contador;
    
    printf("Preencha o vetor de 15 numeros com numeros inteiros e receba quantos sao pares.\n\n");
    
    for (int i = 0; i < 15; i++) 
    {
        printf("X[%d]: ", i);
        scanf("%d", &vet[i]);
    }
    
    contador = Cont(vet);
    
    printf("\nTotal de pares: %d", contador);

    return 0;
}

