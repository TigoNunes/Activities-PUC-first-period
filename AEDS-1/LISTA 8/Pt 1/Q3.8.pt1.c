/******************************************************************************

3. Faça um programa para controlar o estoque de mercadorias de uma empresa. Inicialmente, o programa de-
verá preencher dois vetores com dez posições cada, onde o primeiro corresponde ao código do produto e o
segundo, ao total desse produto em estoque. Logo após, o programa deverá ler um conjunto indeterminado
de dados contendo o código de um cliente e o código do produto que ele deseja comprar, juntamente com a
quantidade. Código do cliente igual a zero indica fim do programa. O programa deverá verificar:

■ se o código do produto solicitado existe. Se existir, tentar atender ao pedido; caso contrário, exibir
mensagem Código inexistente;
■ cada pedido feito por um cliente só pode ser atendido integralmente. Caso isso não seja possível,
escrever a mensagem Não temos estoque suficiente dessa mercadoria. Se puder atendê-lo, escrever
a mensagem Pedido atendido. Obrigado e volte sempre;
■ efetuar a atualização do estoque somente se o pedido for atendido integralmente;
■ no final do programa, escrever os códigos dos produtos com seus respectivos estoques já atualizados.

*******************************************************************************/
#include <stdio.h>


int main()
{
    int codigo_produto[10], estoque[10];
    float cliente;
    int pedido, quantidade;
    int verificacao;
    
    // Codigo dos produtos e estoque.
    
    for (int i = 0; i < 10; i++)
    {
        codigo_produto[i] = i + 1;
        printf("codigo do produto %d: %d\n", codigo_produto[i], codigo_produto[i]);
        
        estoque[i] = 100;
        printf("Quantidade de produtos %d em estoque: %d\n\n", codigo_produto[i], estoque[i]);
    }
    
    // interacao do cliente
    
    do
    {
        printf("\nCliente, digite o seu codigo. Caso digite 0 o programa ira se encerrar.\n");
        printf("Codigo: ");
        scanf("%f", &cliente);
        
        if(cliente != 0)
        {
            printf("Digite o codigo do produto que deseja comprar: ");
            scanf("%d", &pedido);
            
            printf("Digite a quantidade de produto desejada: ");
            scanf("%d", &quantidade);
            
            // verificacao se o codigo e valido
            
            if(pedido == 0)
                printf("Codigo de produto invalido.Tente novamente ou digite (0) para sair do programa.\n");
            
            else if (codigo_produto[pedido - 1] <= 10 && codigo_produto[pedido - 1] > 0)
            {
                if (estoque[pedido - 1] - quantidade >= 0)
                {
                    estoque[pedido - 1] = estoque[pedido - 1] - quantidade;
                    printf("Pedido realizado com sucesso :)\n");
                }
                
                else
                {
                    printf("Estoque insuficiente.\n");
                }
            }
            
            else
            {
                printf("Codigo de produto invalido.Tente novamente ou digite (0) para sair do programa.\n");
            }
        }
        
    }while (cliente != 0);
    
    for (int i = 0; i < 10; i++)
    {
        codigo_produto[i] = i + 1;
        printf("codigo do produto %d: %d\n", codigo_produto[i], codigo_produto[i]);
        
        printf("Quantidade de produtos %d em estoque: %d\n", codigo_produto[i], estoque[i]);
    }

    return 0;
}

