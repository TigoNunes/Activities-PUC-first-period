#include <stdio.h>

int main()
{
    printf("Este programa imprime os numeros impares de 1 a 9\n");
    
    for(int num = 1; num <= 9; num++)
    {
        if(num % 2 != 0)
        {
            printf("%d\n", num);
        }
    }
    return 0;
}
