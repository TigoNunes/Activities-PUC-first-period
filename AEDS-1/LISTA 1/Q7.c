#include <stdio.h>

int main()
{
    float a, b;
    
    printf("Digite o valor do deposito e o valor da taxa de juros em decimal\n");
    scanf("%f %f", &a, &b);
    
    //computar dados 
    
    double rendimento;
    rendimento = (a * b);
    
    double v_t;
    v_t = (a * b) + a;
    
    //output dos dados
    
    printf("O valor do rendimento é %.2f e o valor total é %.2f\n", rendimento, v_t);
    
    return 0;
}
