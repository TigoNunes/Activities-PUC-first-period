#include <stdio.h>

int main()
{
    // a= custo de fabrica/b= praço do carro
    float a, b;
    printf("O preco de um carro é determinado por:\n");
    printf("Custo de fabrica\n");
    printf("Porcentagem do Distribuidor\n");
    printf("Impostos\n");
    
    printf("Digite o custo da fabrica: ");
    scanf("%f", &a);
    
    // output dos dados
    if(a <= 12000)
    {
        b = (a * 0.05) + a;
    }
    else if(a > 12000 && a <= 25000)
    {
        b = (a * 0.25) + a; 
    }
    else if(a > 25000)
    {
        b = (a * 0.35) + a;
    }
    printf("o preco ao consumidor e : %.2f", b);
    
    return 0;
}
