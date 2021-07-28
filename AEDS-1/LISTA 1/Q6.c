#include <stdio.h>

int main()
{
    //input dos dados
    
    float a;
    
    printf("Digite o valor do salario\n");
    scanf("%f", &a);
    
    //compilação dos dados 
    /* Salario total = (a + 5%) - 7%*/
    
    double salario_gratificado;
    salario_gratificado = (a * 0.05);
    
    double salario_imposto;
    salario_imposto = (a * 0.07);
    
    double salario_total;
    salario_total = (salario_gratificado - salario_imposto) + a;
    
    // output dos dados
    
    printf("O salaria a receber de %f é %f\n", a, salario_total);
    return 0;
}

