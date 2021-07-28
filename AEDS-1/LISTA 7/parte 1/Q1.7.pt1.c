/******************************************************************************

1- Calcular a potência de x elevado a y

*******************************************************************************/
#include <stdio.h>

float Resultado(float numero, int potencia)
{
    if(potencia == 0)
    {
        return 1;
    }
    else
    {
        return numero * Resultado(numero, potencia - 1);
    }
}

int main()
{
    float x, resultado;
    int y;
    
    printf("Digite 1 numero e depois o numero pelo qual ele sera elevado \n");
    
    printf("O numero: ");
    scanf("%f", &x);
    
    printf("Sera elevado por: ");
    scanf("%d", &y);
    
    resultado = Resultado(x, y);
    
    printf("%.2f elevado por %d e igual a %.2f", x, y, resultado);
    
    
    return 0;
}
