/******************************************************************************

4- Calcular a soma dos dígitos de um número (ex.: 75 = 7 + 5 = 12)

*******************************************************************************/
#include <stdio.h>

int Resultado(int num)
{
    if(num % 10 == 0 && num < 10)
        return num;
    
    else
        return Resultado(num / 10) + (num % 10);
}

int main()
{
    int num;
    int resultado;
    
    printf("Digite um numero e veja a soma dos digitos nele.\n");
    
    printf("Digite o numero: ");
    scanf("%d", &num);
    
    resultado = Resultado(num);
    
    printf("Resultado: %d", resultado);

    return 0;
}
