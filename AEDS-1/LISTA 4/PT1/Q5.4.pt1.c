#include <stdio.h>

int main()
{
    int n;
    int repeticao;
    
    printf("Sr.Usuario, digite quantas vezes voce quer que a palavra ");
    printf("PROGRAMACAO seja imprimida: ");
    scanf("%d", &n);
    
    for(repeticao = 1; repeticao <= n; repeticao++)
    {
        printf("PROGRAMACAO\n");
    }

    return 0;
}
