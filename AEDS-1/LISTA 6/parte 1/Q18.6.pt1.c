/******************************************************************************

Crie uma sub-rotina que gere e mostre os três primeiros números primos acima de 100.

*******************************************************************************/
#include <stdio.h>

void Primos()
{
    int primo = 0;
    int i = 1;
    int num = 101;
    
    
    
    while(i <= 3)
    {
        if(num % 2 != 0 && num % 3 != 0)
        {
            printf("%d\n", num);
            num++;
            i++;
        }
        else
        {
            num++;
        }
        
    }
    
    
}

int main()
{
    printf("Os 3 primeiros numeros primos depois de 100 sao: \n");
    
    Primos();

    return 0;
}
