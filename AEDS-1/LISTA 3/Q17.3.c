#include <stdio.h>

int main()
{
    // quantidade de pessoas
    // canal assistido
    // quantas pessoas assistiram ao canal
    
    int pessoas, canal = 1;
    int c4 = 0, c5 = 0, c7 = 0, c12 = 0; // onde armazena o numero de pessoas que asisitram ao canala
    float p4, p5, p7, p12; // porcentagem de pessoas que assistiram a cada canala
    
    while(canal != 0)
    {
        printf("Insira o numero de pessoas que estao assisindo: ");
        scanf("%d", &pessoas);
        
        printf("Diga qual o canal assisitido (4, 5, 7 ou 12): ");
        scanf("%d", &canal);
        
        if(canal == 4)
        {
           c4 = c4 + pessoas; 
        }
        else if(canal == 5)
        {
            c5 = c5 + pessoas;
        }
        else if(canal == 7)
        {
            c7 = c7 + pessoas;
        }
        else if(canal == 12)
        {
            c12 = c12 + pessoas;
        }
    }
    
    p4 = (c4 * 100) / (c4 + c5 + c7 + c12);
    
    p5 = (c5 * 100) / (c4 + c5 + c7 + c12);
    
    p7 = (c7 * 100) / (c4 + c5 + c7 + c12);
    
    p12 = (c12 * 100) / (c4 + c5 + c7 + c12);
    
    printf("Porcentagem de pessoas assistindo ao canal 4: %.2f", p4);
    printf("\nPorcentagem de pessoas assistindo ao canal 5: %.2f", p5);
    printf("\nPorcentagem de pessoas assistindo ao canal 7: %.2f", p7);
    printf("\nPorcentagem de pessoas assistindo ao canal 12: %.2f", p12);
    
    return 0;
}
