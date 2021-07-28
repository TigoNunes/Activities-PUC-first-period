/******************************************************************************

Calcular e retornar a soma e o produto (faça funções separadas) dos dígitos de um 
número inteiro informado pelo usuário.

*******************************************************************************/
#include <stdio.h>

int Soma(int num)
{
    int soma = 0;
    
    while(num > 0)
    {
        soma += (num % 10);
        num /= 10;
    }
    
    return soma;
}

int Produto(int num)
{
    int produto = 1;
    
    while(num > 0)
    {
        produto *= (num % 10);
        num /= 10;
    }
    
   return produto;
}



int main()
{
    int num;
    int produto;
    int soma;
    
    printf("Digite um numero inteiro qualquer e receba a soma e o produto dos digitos.\n");
    printf("Digite o numero: ");
    scanf("%d", &num);
    
    soma = Soma(num);
    
    printf("Soma = %d\n", soma);
    
    produto = Produto(num);
    
    printf("Soma = %d\n", produto);
    return 0;
}

