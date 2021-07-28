#include <stdio.h>

int main()
{
    float valor, acrescimo = 0.3;
    int parcela = 6;
    
    printf("Digite o valor do carro: ");
    scanf("%f", &valor);
    
    printf("O preco final para compra a vista é: %.2f\n", valor - (valor * 0.2));
    
    while(parcela <= 60)
    {
        printf("\nO preco final pagando em %d parcelas é: %.2f", parcela, valor + (valor * acrescimo));
        parcela = parcela + 6;
        acrescimo = acrescimo + 0.3;
    }
    
    
    
    
    
    return 0;
}
