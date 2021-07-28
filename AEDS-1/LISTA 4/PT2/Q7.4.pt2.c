/******************************************************************************

Faça um algoritmo que receba diversos pares de números A e B entrados pelo usuário, 
e determine a soma dos cubos de todos os números pares inteiros compreendidos no intervalo entre B e A. 
Retorne o intervalo pesquisado e o valor da soma calculada. 
a entrada de dados deverá ser interrompida quando A e B forem iguais a zero

*******************************************************************************/
#include <stdio.h>

int main()
{
    float a, b;
    int variavel;
    int soma;
    
    do
    {
        printf("De o valor de (A e B)\n");
        printf("Valor de A: ");
        scanf("%f", &a);
        
        printf("Valor e B: ");
        scanf("%f", &b);
        
        printf("(%.2f e %.2f)\n", a, b);
        
        if(a > b)
        {
            variavel = b + 1;
            
            while(variavel < a)
            {
                if(variavel % 2 == 0)
                {
                    soma = soma + (variavel * variavel * variavel);
                    variavel++;
                }
                else
                {
                    variavel++;
                }
            }
            printf("%d\n", soma);
            soma = 0;
        }
        else if(b > a)
        {
            variavel = b - 1;
            
            while(variavel > a)
            {
                if(variavel % 2 == 0)
                {
                    soma = soma + (variavel * variavel * variavel);
                    variavel--;
                }
                else
                {
                    variavel--;
                }
            }
            printf("%d\n", soma);
            soma = 0;
        }
        else if(b == a && b != 0)
            printf("0\n");    
        
    }while(a != 0 && b != 0);
    
    return 0;
}
