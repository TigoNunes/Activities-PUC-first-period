/******************************************************************************

8- Faça uma função recursiva que gere a seguinte sequência:

F(n) = { 1 se n = 1; 2 se n = 2; 2* F(n - 1) + 3* F(n - 2) se n = impar.
*******************************************************************************/
#include <stdio.h>

int Sequencia(int x)
{
    if (x == 1)
        return 1;
    
    else if (x == 2)
        return 1;
    
    else if (x % 2 != 0)
       return 2 * Sequencia(x - 1) + 3 * Sequencia(x - 2);
    
    else
       return Sequencia(x - 1);
}

int main()
{
    int num;
    int sequencia;
    
    printf("Digite um numero inteiro para receber a funcao: ");
    scanf("%d", &num);
    
    sequencia = Sequencia(num);
    
    printf("F(%d) = %d", num, sequencia);

    return 0;
}
