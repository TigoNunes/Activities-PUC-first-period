/******************************************************************************

Elabore uma sub-rotina que receba dois números como parâmetros e retorne 0, se o primeiro número for
divisível pelo segundo número. Caso contrário, deverá retornar o próximo divisor.

*******************************************************************************/
#include <stdio.h>

void Divisao(int dividendo, int divisor)
{
    int resto;
    
    if(dividendo % divisor == 0)
    {
        resto = 0;
        printf("0\n");
    }
    else if(dividendo > divisor)
    {
        while(dividendo % divisor != 0)
        {
            divisor++;
        }
        
        printf("Proximo divisor: %d\n", divisor);
    }
    else
    {
      while(dividendo % divisor != 0)
        {
            divisor--;
        }
        
        printf("Proximo divisor: %d\n", divisor);  
    }

}

int main()
{
    
    int dividendo, divisor;
    
    printf("Digite 2 numeros inteiros, o resultado e a divisao do primeiro pelo segundo\n");
    
    printf("Primeiro numero: ");
    scanf("%d", &dividendo);
    
    printf("Segundo numero: ");
    scanf("%d", &divisor);
    
    Divisao(dividendo, divisor);

    return 0;
}
