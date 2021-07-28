/******************************************************************************

Calcule a média e o desvio padrão de uma sequência de números como no exercício anterior, 
mas agora considere que a quantidade de números n não é fornecida pelo usuário. 
O programa irá terminar quando o usuário digitar o número 0 (zero).

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, i, j, flag = 0;
    
    do
    {
        printf("\nDigite o numero que deseja ver em binario: ");
        scanf("%d", &num);
        
        for(i = 31; i>= 0; i--)
         {
            j = num >> i;
            
            if(j & 1)
            {
                printf("1");
                flag = 1;
            }
            else if(flag)
            {
                printf("0");
            }
            if(i == 0)
            {
                flag = 0;
            }
        }
    }while(num != 0);

    return 0;
}



