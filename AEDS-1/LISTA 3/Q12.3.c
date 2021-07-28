#include <stdio.h>

int main()
{
    // colocar variavel de numero
    int numero;
    
    //colocar variavel para determinar numero de primos
    int primo = 0;
    
    // ciar repetição
    for(int i = 1; i <= 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        
        if(numero % 2 != 0 || numero == 2)
        {
            primo++;
        }
    }
    printf("A quantidade de numeros primos é: %d", primo);
    

    return 0;
}

