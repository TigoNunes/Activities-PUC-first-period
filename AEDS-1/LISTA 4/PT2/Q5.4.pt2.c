/******************************************************************************

Faça um algoritmo que receba um inteiro positivo n e prove a igualdade abaixo:
1*1 + 2*2 + 3*3 + ... n*n = n(n+1)(2n+1)/6

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    int numero = 1, elevado;
    int resp1 = 0;
    float resp2;
    
    printf("Digite o numero: ");
    scanf("%d", &n);
    
    while(numero <= n)
    {
        elevado = numero * numero;
        resp1 = resp1 + elevado;
        numero < n ? printf("%d^2 + ", numero): printf("%d^2 = %d\n", numero, resp1);
        numero++;
    }
    
    resp2 = n * (n + 1) * ((2 * n) + 1) / 6;
    printf("%d*(%d + 1)*((2 * %d) + 1) / 6 = %.2f", n, n, n, resp2);
    

    return 0;
}
