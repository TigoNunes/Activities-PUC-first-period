#include <stdio.h>
//input de dados, pedir salario atual
//processamento de dados
//output de dados
int main()
{
    
    float a;
    
    printf("coloque o salario atual\n");
    scanf("%f", &a);
    
    double salario_reajustado;
    salario_reajustado = (a * 0.1) + a;
    
    printf("O salario reajustado de %f é %f\n", a, salario_reajustado);
   
    return 0;
}




