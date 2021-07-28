/******************************************************************************

WSejam P(x1,y1) e Q(x2,y2) dois pontos quaisquer no plano. A sua distância é dada por:
d = sqrt(x2 - x1)^2 + (y2 - y1)^2
Faça um algoritmo que leia várias linhas com quatro valores separados por vírgula, 
correspondentes às coordenadas dos pontos P e Q e retorne a distância destes pares de pontos. 
A leitura dos dados será interrompida quando as quatro coordenadas forem iguais a zero.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1;
    float x2, y2;
    float soma, d;
    
    do
    {
        printf("Sr.Usuario, de as coordenadas do ponto P\n");
        printf("Coordenada x: ");
        scanf("%f", &x1);
        printf("Coordenada y: ");
        scanf("%f", &y1);
        
        printf("Sr.Usuario, de as coordenadas do ponto Q\n");
        printf("Coordenada x: ");
        scanf("%f", &x2);
        printf("Coordenada y: ");
        scanf("%f", &y2);
        
        soma = ((x2 - x1) * 2) + ((y2 - y1) * 2);
        d = sqrt(soma);
        if(x1 != 0 && y1 != 0 && x2 != 0 && y2 != 0)
         printf("A distancia entre os pontos P e Q e de: %.2f\n", d);
        
    }while(x1 != 0 && y1 != 0 && x2 != 0 && y2 != 0);
    
    return 0;
}
