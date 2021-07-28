/******************************************************************************

23. Faça um programa que leia dois vetores (A e B) com cinco posições para números inteiros. O programa
deve, então, subtrair o primeiro elemento de A do último de B, acumulando o valor, subtrair o segundo
elemento de A do penúltimo de B, acumulando o valor e assim por diante. Ao final, mostre o resultado
de todas as subtrações realizadas.

*******************************************************************************/
#include <stdio.h>

void Subtracao(int x[], int y[])
{
    int crescente = 0;
    int decrescente = 4;
    
    do
    {
        int subtracao = x[crescente] - y[decrescente];
        
        printf("\n%d - %d = %d", x[crescente], y[decrescente], subtracao);
        
        crescente++;
        decrescente--;
        
    }while (crescente <= 4 && decrescente >= 0);
}

int main()
{
    int a[5], b[5];
    
    printf("Preencha 2 vetores de 5 posicoes com numeros inteiros e receba o resultado de todas as subtracoes feitas.\n As subtracoes serao feitas do primeiro vetor de A pelo ultimo de B e assim por diante.\n\n");

    printf("Vetor A: \n");
    
    for (int i = 0; i < 5; i++)
    {
        printf("Numero: ");
        scanf("%d", &a[i]);
    }
    
    printf("\nVetor B: \n");
    
    for (int i = 0; i < 5; i++)
    {
        printf("Numero: ");
        scanf("%d", &b[i]);
    }
    
    Subtracao(a, b);
    
    return 0;
}
