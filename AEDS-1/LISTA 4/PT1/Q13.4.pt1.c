#include <stdio.h>

int main()
{
    float valores;
    int no_intervalo = 0, fora_intervalo = 0;
    
    printf("Neste programa voce deve digitar 10 numeros e, no final, sera mostrado ");
    printf("quantos destes numeros estao no intervalo de [10,20] e quantos  nao estao");
    
    for(int i = 1; i <= 10; i++)
    {
        printf("\nDigite o %d numero: ", i);
        scanf("%f", &valores);
        
        if(valores >= 10 && valores <= 20)
        {
            no_intervalo++;
        }
        else
        {
            fora_intervalo++;
        }
    }
    printf("\nQuantidade de numeros no intervalo: %d", no_intervalo);
    printf("\n Quantidade de numeros fora do intervalo: %d", fora_intervalo);

    return 0;
}
