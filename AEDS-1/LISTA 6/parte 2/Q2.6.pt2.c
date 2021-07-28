/******************************************************************************

Calcular e retornar o enésimo termo de uma progressão aritmética onde o primeiro 
termo e a razão são informados pelo usuário.
*******************************************************************************/
#include <stdio.h>

int PGSoma(float primeiro, float razao, int quantidade, float enesimo, float soma)
{
    
    while(quantidade > 1)
    {
        enesimo = enesimo + razao;
        soma = soma + enesimo;
        quantidade--;
    }
    
    return soma;
    
}


int main()
{
    float primeiro, razao;
    int quantidade;
    float soma;
    float enesimo;
    
    printf("Determine o primeiro numero e a razao da progressao geometrica\n");
    
    printf("Primeiro numero: ");
    scanf("%f", &primeiro);
    
    enesimo = primeiro;
    
    printf("Razao: ");
    scanf("%f", &razao);
    
    printf("Determine quantos numeros que voce deseja ver.\n");
    printf("Quantidade: ");
    scanf("%d", &quantidade);
    
    soma = PGSoma(primeiro, razao, quantidade, enesimo, soma);
    
    printf("Enesimo numero: %.2f\n", soma);
    return 0;
}


