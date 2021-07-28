#include <stdio.h>

int main()
{
    int i;
    float a, r;
    printf("Escolha o tipo de investimento: \n");
    printf("1 - Poupanca");
    printf("\n2- Fundos de renda fixa\n");
    scanf("%d", &i);
    
    printf("Digite o valor do investimento: ");
    scanf("%f", &a);
    
    if(i == 1)
    {
        r = (a * 0.3) + a;
    }
    else if(i == 2)
    {
        r = (a * 0.4) + a; 
    }
    printf("Apos 1 mes de investimento o seu novo valor sera: %.2f", r);

    return 0;
}
