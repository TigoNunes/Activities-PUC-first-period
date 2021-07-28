/******************************************************************************

25. Crie um programa que:
■ receba o preço de dez produtos e armazene-os em um vetor;
■ receba a quantidade estocada de cada um desses produtos, em cinco armazéns diferentes, utilizando
uma matriz 5 X 10.
O programa deverá calcular e mostrar:
■ a quantidade de produtos estocados em cada um dos armazéns;
■ a quantidade de cada um dos produtos estocados, em todos os armazéns juntos;
■ o preço do produto que possui maior estoque em um único armazém;
■ o menor estoque armazenado;
■ o custo de cada armazém.

*******************************************************************************/
#include <stdio.h>

void Quantidade_individual(int x[][10])
{
    for (int i = 0; i < 5; i++) 
    {
        int soma = 0;
        
        for (int j = 0; j < 10; j++) 
        {
            soma = soma + x[i][j];
        }
        
        printf("\nQuantidade de produtos estocados no armazem %d: %d", i + 1, soma);
    }
}

void Quantidade_armazem(int x[][10])
{
    for (int i = 0; i < 10; i++) 
    {
        int soma = 0;
        
        for (int j = 0; j < 5; j++) 
        {
            soma = soma + x[j][i];
        }
        
        printf("\nQuantidade de produtos %d estocados em todos os armazens juntos: %d", i + 1, soma);
    }
}

void Preco_Produto_MQ(int x[][10], float y[])
{
    int maior = 0;
    
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 10; j++) 
        {
            if(x[i][j] > maior)
            {
                maior = x[i][j];
            }
        }
    }
    
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 10; j++) 
        {
            if(x[i][j] == maior)
            {
                printf("\nPreco do produto que possui o maior estoque em um unico armazem: %.2f", y[j]);
            }
        }
    }
}

void Menor_Estoque(int x[][10])
{
    int menor = x[0][0];
    
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 10; j++) 
        {
            if(x[i][j] < menor)
            {
                menor = x[i][j];
            }
        }
    }
    
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 10; j++) 
        {
            if(x[i][j] == menor)
            {
                printf("\nO menor estoque armazenado e o %d com %d produtos armazenados.", i + 1, x[i][j]);
            }
        }
    }
}

void Custo_Armazem(int x[][10], float y[])
{
    for (int i = 0; i < 5; i++) 
    {
        int soma = 0;
        
        for (int j = 0; j < 10; j++) 
        {
            soma = soma + (x[i][j] * y[j]);
        }
        
        printf("\nCusto de produtos estocados no armazem %d: %d", i + 1, soma);
    }
}

int main()
{
    float preco[10];
    int estoque[5][10];
    
    printf("Digite o preco de 10 produtos. Depos digite a quantidade estocada desses produtos em 5 armazens diferentes.\n");
    
    printf("\nDigite o preco dos produtos:\n");
    
    for (int i = 0; i < 10; i++) 
    {
        printf("Preco do produto %d: ", i + 1);
        scanf("%f", &preco[i]);
    }
    
    printf("\n");
    
    for (int i = 0; i < 10; i++) 
    {
        for (int j = 0; j < 5; j++) 
        {
            printf("Quantidade de produto %d estocado no armazem %d: ", i + 1, j + 1);
            scanf("%d", &estoque[j][i]);
        }
    }
    
    Quantidade_individual(estoque);
    
    printf("\n");
    
    Quantidade_armazem(estoque);
    
    printf("\n");
    
    Preco_Produto_MQ(estoque, preco);
    
    printf("\n");
    
    Menor_Estoque(estoque);
    
    printf("\n");
    
    Custo_Armazem(estoque, preco);

    return 0;
}
