#include <stdio.h>

int main()
{
    float n;
    
    printf("Digite um valor N positivo: ");
    scanf("%f", &n);
    
    if(n > 0)
    {
        for(int i = 1; i < n; i++)
        {
            printf("%d\n", i);
        }
    }
    else
    {
        return 1;
    }

    return 0;
}
