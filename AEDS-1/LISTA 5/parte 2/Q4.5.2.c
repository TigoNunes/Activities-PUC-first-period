/******************************************************************************

Faça uma sub-rotina que receba como parâmetro o raio de uma esfera, calcule e mostre no programa principal
o seu volume: v = 4/3 * R3.

*******************************************************************************/
#include <stdio.h>

void Volume(float raio)
{
    float v;
    
    v = (raio * raio * raio) * 1.333;
    printf("Volume da esfera: %.1f", v);
}


int main()
{
    float raio;
    
    printf("De o valor do raio da esfera e receba o seu volume\n");
    
    printf("Raio: ");
    scanf("%f", &raio);
    
    Volume(raio);

    return 0;
}
