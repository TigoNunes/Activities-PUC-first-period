/******************************************************************************

Elabore uma sub-rotina que leia um número não determinado de valores positivos e 
retorne a média aritmética desses valores. 
Terminar a entrada de dados com o valor zero.

*******************************************************************************/
#include <stdio.h>

void Media(float somas, int contador)
{
    float media = 0;
    
    media = somas / contador; 
    
    printf("Media aritmetica = %.2f\n", media);
}

int main()
{
   float numero, somas = 0;
   int contador = 0;
   
    printf("Digite numeros positivos e obtenha a media aritimetica\n");
    printf("O programa para ao digitar 0\n");
    
    while(numero != 0)
    {
        printf("Digite o numero: ");
        scanf("%f", &numero);
        
        if(numero != 0)
            contador++;
        
        somas = somas + numero;
        
    }
    
    Media(somas, contador);

    return 0;
}
