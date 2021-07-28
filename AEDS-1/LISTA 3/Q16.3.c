#include <stdio.h>

int main()
{
    int idade, n_idades = 1, soma = 0;
    
    printf("Insira a idade: ");
    scanf("%d", &idade);
    soma = soma + idade;
    
    while(idade != 0)
    {
        printf("Insira a idade: ");
        scanf("%d", &idade);
        n_idades++;
        soma = soma + idade;
    }
    
    float media;
    media = soma / n_idades;
    printf("A media das idades e: %.2f", media);
    
    return 0;
}
