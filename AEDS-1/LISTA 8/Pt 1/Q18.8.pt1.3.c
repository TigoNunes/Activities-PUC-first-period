/******************************************************************************

18 - Crie uma sub-rotina que gere e mostre os tres primeiros numeros primos acima de 100.

*******************************************************************************/
#include <stdio.h>

void Primos (int x[])
{
   int primo = 1;
   int n = 0;
   
   do
   {
        for (int i = 100; i < 110; i++)
        {
            primo = 1;
            
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    primo = 0;
                }
            }
            
            if (primo == 1)
            {
                x[n] = i;  
                
                n++;
            }
        }
        
    }while(n < 3);
    
    for (int i = 0; i < 3; i++) {
        printf("\nvet[%d]: %d", i, x[i]);
    }
}

int main()
{
    
    int x[3];
    
    printf("Veja os 3 primos depois de 100:\n");
    
    Primos (x);

    return 0;
}

