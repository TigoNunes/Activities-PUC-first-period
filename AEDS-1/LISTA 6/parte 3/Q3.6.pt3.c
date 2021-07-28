/******************************************************************************

Calcular e retornar o enésimo termo de uma progressão geométrica onde o primeiro 
termo e a razão são informados pelo usuário.
*******************************************************************************/
#include <stdio.h>

void PG(float primeiro, float razao, int quantidade, float *enesimo)
{
    while(quantidade > 1)
    {
        *enesimo = *enesimo * razao;
        quantidade--;
    }
    
}


int main()
{
    float primeiro, razao;
    int quantidade;
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
    
    printf("Enesimo numero antes: %.2f\n", enesimo);
    
    PG( primeiro, razao, quantidade, &enesimo);
    
    printf("Enesimo numero depois: %.2f\n", enesimo);
    
    return 0;
}


