#include <stdio.h>

int main()
{
    printf("Este programa conta de 1 até 10\n");
    
    int num = 1;
    
    do
    {
        printf("%d\n", num);
        num++;
        
    }while(num < 11);

    return 0;
}
