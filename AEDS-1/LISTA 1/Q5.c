#include <stdio.h>

int main()
{
   //input do programa
   
    float a, b, c;
    float p1, p2, p3;
    
    printf("Digite tres notas: ");
    scanf("%f %f %f", &a, &b, &c);
    
    printf("Digite os pesoas das notas: ");
    scanf("%f %f %f", &p1, &p2, &p3);
    
    //compilar programa
    
    double media_ponderada;
    media_ponderada = (a * p1 + b * p2 + c * p3)/(p1 + p2 + p3);
    
    //output do programa
    
    printf("A media ponderara de %f, %f, %f, %f, %f, %f é %f", a, b, c, p1, p2, p3, media_ponderada);
    return 0;
}



