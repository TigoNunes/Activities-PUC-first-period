/******************************************************************************

Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para
isto, mandou digitar uma linha para cada mercadoria com o código, preço de compra e preço de venda
delas. Faça um algoritmo que determine e escreva quantas mercadorias proporcionam (lucro < 10%[lucro1]), (10%
≤ lucro ≤ 20%[lucro2]) e (lucro > 20%[lucro3]). Determine também e escreva o (valor total de compra e de venda) de todas as
mercadorias, assim como o (lucro total).

*******************************************************************************/
#include <stdio.h>

int main()
{
    int quantidade; // quantidade de mercadorias
    float codigo; // codigo das mercadorias
    float compra /* valores inseridos pelo usuario*/, compra_total = 0; /* soma de todos os valores de compra*/
    float venda /* valores inseridos pelo usuario*/, venda_total = 0; /* soma de todos os valores de compra*/
    float lucro/* venda - compra*/, lucro_total = 0; /* soma de todos os lucros*/
    int lucro1 = 0 /* lucro < 10%*/, lucro2 = 0 /* 10%≤ lucro ≤ 20%*/, lucro3 = 0; /* lucro > 20%*/
    
    printf("Digite quantos produtod o comerciante comercializou: ");
    scanf("%d", &quantidade);
    
    for(int i = 1; i <= quantidade; i++) 
    {
        printf("Digite o codigo do produto %d: ", i);
        scanf("%f", &codigo);
        
        printf("Digite o preco de compra do produto %d: ", i);
        scanf("%f", &compra);
        
        compra_total = compra_total + compra;
        
        printf("Digite o preco de venda do produto %d: ", i);
        scanf("%f", &venda);
        
        venda_total = venda_total + venda;
        
        lucro = venda - compra;
        printf("O lucro da venda do produto %d foi de: %.2f\n", i, lucro);
        
        lucro_total = lucro_total + lucro;
        
        if(lucro < (venda * 0.1))
        {
            lucro1++;
        }
        else if(lucro >= (venda * 0.1) && lucro <= (venda * 0.2))
        {
            lucro2++;
        }
        else
        {
            lucro3++;
        }
    }
    printf("O preco de compra de todos os produtos foi: %.2f\n", compra_total);
    printf("O preco de venda de todos os produtos foi: %.2f\n", venda_total);
    printf("O lucro da venda de todos os produtos foi: %.2f\n", lucro_total);
    
    printf("Tiveram lucro menor que 10 por cento: %d produtos\n", lucro1);
    printf("Tiveram lucro entre 10 e 20 por cento: %d produtos\n", lucro2);
    printf("Tiveram lucro maior que 20 por cento: %d produtos\n", lucro3);

    return 0;
}
