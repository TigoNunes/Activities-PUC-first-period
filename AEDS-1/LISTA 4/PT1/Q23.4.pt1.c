/******************************************************************************

23. 
Faça um algoritmo que receba uma sequência de números e retorne o maior e o menor número da sequência. 
A quantidade de números n é fornecida pelo usuário.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    float numero, maior, menor;
    
    printf("Sr.Usuario, quantos numeros deseja colocar na sequencia?: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++)
    {
        printf("Digite o %d numero: ", i);
        scanf("%f", &numero);
        
        if(i == 1)
        {
            maior = numero;
            menor = numero;
        }
        
        if(numero > maior)
        {
            maior = numero;
        }
        else if(numero < menor)
        {
            menor = numero;
        }
    }
    printf("Maior numero: %.2f\n", maior);
    printf("Menor numero: %.2f", menor);
    return 0;
}
