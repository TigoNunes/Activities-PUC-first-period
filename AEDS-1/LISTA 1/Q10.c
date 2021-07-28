#include <stdio.h>

int main()
{
    // declarar os dados
    
    int a, b;
    
    printf("Digite o seu ano de nascimento: ");
    scanf("%d", &a);
    
    printf("Digite o ano atual: ");
    scanf("%d", &b);
    
    //compilar dados
    
    int c;
    c = b - a;
    
    int d;
    d = 2050 - a;
    
    //Output dos dados
    
    printf("Sua idade em %d é ou será: %d\n", b, c);
    printf("Sua idade em 2050 será: %d", d);

    return 0;
}
