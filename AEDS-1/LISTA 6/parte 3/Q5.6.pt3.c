/******************************************************************************

Calcular e retornar a soma e o produto (faça funções separadas) dos dígitos de um 
número inteiro informado pelo usuário.

*******************************************************************************/
#include <stdio.h>

void Soma(int num, int *soma)
{
    while(num > 0)
    {
        *soma += (num % 10);
        num /= 10;
    }
    
    
}

void Produto(int num, int *produto)
{
    while(num > 0)
    {
        *produto *= (num % 10);
        num /= 10;
    }
    
}



int main()
{
    int num;
    int soma;
    int produto = 1;
    
    printf("Digite um numero inteiro qualquer e receba a soma e o produto dos digitos.\n");
    printf("Digite o numero: ");
    scanf("%d", &num);
    
    printf("Soma antes = %d\n", soma);
    
    Soma(num, &soma);
    
    printf("Soma depois = %d\n", soma);
    
    printf("Produto antes = %d\n", produto);
    
    Produto(num, &produto);
    
    printf("Produto depois = %d\n", produto);
    
    return 0;
}

