#include <stdio.h>

int main()
{
    // ações
    //preço de compra
    //preço de venda
    
    // lucro p/ ação = preço de venda - preço de compra
    // quantas ações tiveram lucro maior q 1000
    // quantas tiveram lucro inferior a 200
    
    printf("As acoes devem ser digitadas como numeros\n");
    printf("Considere F = 0");
    
    int acao = 1;
    float pc, pv, lucro, lucro_total = 0;
    int lu_alt = 0, lu_baixo = 0;
    
    while(acao != 0)
    {
        printf("\nDigite a acao: ");
        scanf("%d", &acao);
        
        printf("Digite o preco de compra: ");
        scanf("%f", &pc);
        
        printf("Digite o preco de venda: ");
        scanf("%f", &pv);
        
        lucro = pv - pc;
        printf("lucro: %.2f", lucro);
        
        lucro_total = lucro_total + lucro;
        
        if(lucro > 1000)
        {
            lu_alt++;
        }
        else if(lucro < 200)
        {
            lu_baixo++;
        }
        
    }
    printf("\nQuantidade de aces com lucro superior a R$ 1.000,00: %d\n", lu_alt);
    printf("Quantidade de acos com lucro inferior a R$ 200,00: %d\n", lu_baixo);
    printf("Lucro total da empresa: %.2f", lucro_total);

    return 0;
}
