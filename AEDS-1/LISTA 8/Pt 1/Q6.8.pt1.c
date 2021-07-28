/******************************************************************************

6. Faça um programa que receba o total das vendas de cada vendedor de uma loja e armazene-as em um vetor.
Receba também o percentual de comissão a que cada vendedor tem direito e armazene-os em outro vetor.
Receba os nomes desses vendedores e armazene-os em um terceiro vetor. Existem apenas dez vendedores na
loja. Calcule e mostre:
■ um relatório com os nomes dos vendedores e os valores a receber referentes à comissão;
■ o total das vendas de todos os vendedores;
■ o maior valor a receber e o nome de quem o receberá;
■ o menor valor a receber e o nome de quem o receberá.

*******************************************************************************/
#include <stdio.h>

void Relatorio (char nome[], float valores[])
{
    for (int i = 0; i < 10; i++)
    {
        printf("\nNOME: %c / COMISSAO: %.2f/100", nome[i], valores[i]);
    }
}

void TotalVendas (int vet[])
{
    int resultado = 0;
    
    for (int i = 0; i < 10; i++)
    {
        resultado = resultado + vet[i];
    }
    
    printf("\n\nTotal de vendas: %d", resultado);
}

void Maior_e_Menor (float x[], char y[])
{
    float maior_valor = x[0], menor_valor = x[0];
    char maior_nome = y[0], menor_nome = y[0];
    
    for (int i = 0; i < 10; i++)
    {
        if (x[i] > maior_valor)
        {
            maior_valor = x[i];
            maior_nome = y[i];
        }
        
        else if (x[i] < menor_valor)
        {
            menor_valor = x[i];
            menor_nome = y[i];
        }
    }
    
    printf("\nRecebeu o maior valor: %c / Quantidade recebida: %.2f", maior_nome, maior_valor);
    printf("\nRecebeu o menor valor: %c / Quantidade recebida: %.2f", menor_nome, menor_valor);
    
    
}

int main()
{
    int vendas[10];
    float percentual[10];
    char nomes[10];
    
    // input de dados
    
    printf("Preencha os dadoos: \n");
    
    for (int i = 0; i < 10; i++)
    {
        printf("\nNome do vendedor [%d]. (apenas a inicial): ", i + 1);
        scanf(" %c", &nomes[i]);
        
        printf("Total de vendas: ");
        scanf("%d", &vendas[i]);
        
        printf("Comicao a ser ganha: ");
        scanf("%f", &percentual[i]);
    }
    
    Relatorio (nomes, percentual);
    
    TotalVendas (vendas);
    
    Maior_e_Menor (percentual, nomes);

    return 0;
}
