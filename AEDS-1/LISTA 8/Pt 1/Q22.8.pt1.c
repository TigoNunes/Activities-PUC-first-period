/******************************************************************************

22. Faça um programa que leia um vetor A de dez posições. Em seguida, compacte o vetor, retirando os
valores nulos e negativos. Armazene esse resultado no vetor B. Mostre o vetor B. (Lembre-se: o vetor B
pode não ser completamente preenchido.)

*******************************************************************************/
#include <stdio.h>

int main()
{
    float a[10], b[10];
    
    printf("Preencha o vetor A e receba o vetor B sem os numeros nuloe e negativos.\n\n");
    
    //inicialização do vetor B
    
    for (int i = 0; i < 10; i++)
    {
        b[i] = 0;
    }
    
    // adicionando valores ao vetor A 
    
    for (int i = 0; i < 10; i++)
    {
        printf("Vetor A[%d]: ", i);
        scanf("%f", &a[i]);
    }
    
    // adicionando os valores ao vetor b
    
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > 0)
        {
            b[i] = a[i];
        }
    }
    
    // mostrando o resultado
    
    printf("\nResultado: \n");
    
    for (int i = 0; i < 10; i++)
    {
        if (b[i] > 0)
        {
            printf("%.2f\n", b[i]);
        }
    }

    return 0;
}
