/******************************************************************************

Calcule a soma dos números de 1 a n (ex.: 3 = 1 + 2 + 3 = 6)

*******************************************************************************/
#include <stdio.h>

int Resultado(int x)
{
    if (x == 1)
        return 1;
    
    else 
        return x + Resultado(x - 1);
}

int main()
{
    int n;
    int resultado;
    
    printf("Digite um numero que sera realizada uma soma de todos os numeros inteiros ate ele.\n");
    
    printf("Numero: ");
    scanf("%d", &n);
    
    resultado = Resultado(n);
    
    printf("Resultado igual: %d", resultado);

    return 0;
}
