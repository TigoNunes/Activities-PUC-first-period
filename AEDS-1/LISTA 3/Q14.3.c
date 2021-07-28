#include <stdio.h>

int main()
{
    // variavel idade
    // variavel opinião
    // variavel media das pessoas que responderam otimo
    // variavel quantidade de pessoas que responderam regular 
    // variavel porcentagem de pessoas que responderam bom
    float idade;
    int opiniao;
    float media = 0, regular = 0, porcentagem = 0;
    float otimo = 0;
    
    for(int i = 1; i <= 15; i++)
    {
        printf("Digite a idade do espectador: ");
        scanf("%f", &idade);
        
        printf("Digite a opiniao do espectador, sendo 1 = regular, 2 = bom e 3 = otimo: ");
        scanf("%d", &opiniao);
        
        if(opiniao == 3)
        {
            media = media + idade;
            otimo++;
        }
        else if(opiniao == 1)
        {
            regular++;
        }
        else if(opiniao == 2)
        {
            porcentagem++;
        }
        else
        {
            printf("opiniao invalida");
            return 0;
        }
    }
    //media das pessoas que responderam otimo
    printf("Media da idade das pessoas que responderam otimo: %.2f\n", media / otimo);
    
    printf("A quantidade de pessoas que respondeu regular foi: %.2f\n", regular);
    
    printf("A porcentagem de pessoas que responderam bom foi: %.2f", (porcentagem * 100)/15);

    return 0;
}
