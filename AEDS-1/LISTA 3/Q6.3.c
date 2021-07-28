#include <stdio.h>

int main()
{
    //variavel de controle
    //opções V e P
    //Variavel quantidade de V e P
    //Variavel preço
    // variavel valor
    
    int v, p;
    float valor, preco_v = 0, preco_p = 0;
    float prestacao;
    
    printf("Serao feitas 15 transacoes\n"); 
    printf("escolha quantas serao feitas das seguintes formas: \n");
    
    printf("V - Transacao a vista: ");
    scanf("%d", &v);
    
    printf("P - Transacao a prazo: ");
    scanf("%d", &p);
    
    if(v + p > 15 || v + p < 15)
    {
        printf("[ERRO!] Devem ser feitas 15 tresnsacoes");
        return 0;
    }
    
    for(int i = 1; i <= v; i++)
    {
        printf("Digite o valor da transacao a vista: ");
        scanf("%f", &valor);
        
        preco_v = preco_v + valor;
    }
    for(int i = 1; i <= p; i++)
    {
        printf("Digite o valor da transacao a prazo: ");
        scanf("%f", &valor);
        
        preco_p = preco_p + valor;
        prestacao = preco_p/3;
    }
    
    printf("Valor total das compras a vista: %.2f", preco_v);
    printf("\nValor total das compras a prazo: %.2f", preco_p);
    printf("\nValor total das compras efetuadas: %.2f",preco_v + preco_p);
    printf("\nValor da primeira prestação das compras a prazo juntas: ") ;
    printf("%.2f", prestacao);
    

    return 0;
}

