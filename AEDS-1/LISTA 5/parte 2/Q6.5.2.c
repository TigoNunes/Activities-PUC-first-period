/******************************************************************************

Crie uma sub-rotina que receba como parâmetro a altura (alt) e o sexo de uma pessoa e retorne seu peso ideal.
Para homens, deverá calcular o peso ideal usando a fórmula: peso ideal = 72.7 *alt − 58; para mulheres: peso
ideal = 62.1 *alt − 44.7.

*******************************************************************************/
#include <stdio.h>

void PesoIdeal(float alt, char sexo)
{
    float peso_ideal;
    
    if(sexo == 'H')
    {
      peso_ideal = 72.2 * alt - 58;
      printf("Seu peso ideal e: %.2f", peso_ideal);
    }
    else
    {
      peso_ideal = 62.1 * alt - 44.7;
      printf("Seu peso ideal e: %.2f", peso_ideal);
    }
}

int main()
{
    float alt;
    char sexo;
    
    printf("Descubra o seu peso ideal\n");
    
    printf("Informe a sua altura: ");
    scanf("%f", &alt);
    
    printf("Informe o seu sexo (H - masculino e F - feminino): ");
    scanf(" %c", &sexo);
    
    PesoIdeal(alt, sexo);
    
    return 0;
}
