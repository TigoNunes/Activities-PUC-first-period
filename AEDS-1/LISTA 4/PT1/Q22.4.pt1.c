/******************************************************************************

Um posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes. 
Faça um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma:
1.Álcool 2.Gasolina 3.Diesel 4.Fim). 
Caso o usuário informe um código inválido (fora da faixa de 1 a 4) deve ser solicitado um novo código (até que seja válido). 
Ao ser informado o código do combustível, o seu respectivo nome deve ser impresso na tela. 
O programa será encerrado quando o código informado for o número 4 escrevendo então a mensagem : 
"MUITO OBRIGADO" e a quantidade de clientes que abasteceram cada tipo de combustível.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int q1 = 0, q2 = 0, q3 = 0;
    int tipo;
    
    do
    {
        printf("\nDigite um codigo para escolher o tipo de combustivel ou se deseja encerrar o programa\n");
        printf("1 - Alcool\n");
        printf("2 - Gasolina\n");
        printf("3 - Diesel\n");
        printf("4 - Fim\n");
        scanf("%d", &tipo);
        
        if(tipo == 1)
        {
            printf("Alcool\n");
            q1++;
        }
        else if(tipo == 2)
        {
            printf("Gasolina\n");
            q2++;
        }
        else if(tipo == 3)
        {
            printf("Diesel\n");
            q3++;
        }
        else if(tipo == 4)
        {
            printf("MUITO OBRIGADO\n");
        }
        else
        {
            printf("\nCodgo invalido.\n");
        }
    }while(tipo != 4);
    
    printf("\nQuantidade de clientes que abasteceram com Alcool: %d\n", q1);
    printf("Quantidade de clientes que abasteceram com Gasolina: %d\n", q2);
    printf("Quantidade de clientes que abasteceram com Diesel: %d\n", q3);

    return 0;
}
