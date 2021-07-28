#include <stdio.h>

int main()
{
    //input dados
    float preco;
    
    printf("De o valor de um preco e receba ele reajustado e classificacao\n");
    
    printf("preco: ");
    scanf("%f", &preco);
    
    //calculo tabela 1
    float a;
    if(preco <= 50)
    {
        a = (preco * 0.05) + preco;
    }
    else if(preco > 50 && preco <= 100)
    {
        a = (preco * 0.1) + preco;
    }
    else if(preco > 100)
    {
        a = (preco * 0.15) + preco; 
    }
    
    //classificao tabela
    if(a <= 80)
    {
        printf("O preco reajustado e %.2f, ele e barato", a);
    }
    else if(a > 80 && a <= 120)
    {
        printf("O preco reajustado e %.2f, ele e normal", a);
    }
    else if(a > 120 && a <= 200)
    {
        printf("O preco reajustado e %.2f, ele e carp", a);
    }
    else
    {
        printf("O preco reajustado e %.2f, ele e muito caro", a);
    }
    
    return 0;
}
