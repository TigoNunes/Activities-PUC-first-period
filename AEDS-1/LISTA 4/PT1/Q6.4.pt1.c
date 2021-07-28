#include <stdio.h>

int main()
{
    int controle;
    int num;
    
    printf("Sr.Usuario, digite o numero inteiro que sera imprimido 10 vezez: ");
    scanf("%d", &num);
    
    for(controle = 1; controle <= 10; controle++)
    {
        printf("Impressao %d: %d\n", controle, num);
    }

    return 0;
}
