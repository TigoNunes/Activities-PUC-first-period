/******************************************************************************

Faça um algoritmo que receba um inteiro positivo e retorne sua representação no formato binário

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, i, j, flag = 0;
    
    printf("Digite o numero que deseja ver em binario: ");
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
    }

    return 0;
}

