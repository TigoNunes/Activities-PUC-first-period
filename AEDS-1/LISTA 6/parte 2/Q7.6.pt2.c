/******************************************************************************

Calcular e exibir (faça aqui um procedimento) todos os números primos entre 1 e 𝑛, onde 𝑛 é
informado pelo usuário. Para isto utilize a estratégias do Crivo de Eratóstenes.

*******************************************************************************/
#include <stdio.h>

int Sequencia(int n)
{
    for(int i = 1; i <= n; i++)
    {
        if(i == 2 || i == 3 || i == 5 || i == 7)
            printf("%d ", i);
        
        else if(i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
            printf("%d ", i);
        
        
    }
}

int main()
{
    int n;
    
    printf("Digite um numero n e veja todos pos primos entre 1 e n\n");
    printf("Numero: ");
    scanf("%d", &n);
    
    Sequencia(n);

    return 0;
}