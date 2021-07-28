/******************************************************************************

Calcular e retornar (uma função para cada) as seguintes conversões de um valor 𝑛 informado pelo
usuário: Polegada para centímetros; Centímetros para polegadas (1 polegada = 2,54 cm);
Fahrenheit para Celsius; e Celsius para Fahrenheit (𝐶º = (𝐹º − 32)/1,8 e 𝐹º = (𝐶º ∗ 1,8) + 32).

*******************************************************************************/
#include <stdio.h>

void Polegada(float centimetros, float *polegada)
{
    *polegada = centimetros / 2.54;
}

void Centimetro(float polegadas, float *centimetro)
{
    *centimetro = polegadas * 2.54;
}

void Fahrenheit(float celcius, float *fahrenheit)
{
    *fahrenheit = (celcius * 1.8) + 32;
}

void Celsiu(float fahrenheits, float *celsiu)
{
    *celsiu = (fahrenheits - 32) / 1.8;
}


int main()
{
    float centimetros, celcius;
    float polegadas, fahrenheits;
    float celsiu = 0, fahrenheit, polegada, centimetro;
    
    printf("Digite um valor em centimetros e receba a conversao para polegadas\n");
    printf("Valor centimetros: ");
    scanf("%f", &centimetros);
    
    printf("Digite um valor em polegadas e receba a conversao para centimetros\n");
    printf("Valor polegadas: ");
    scanf("%f", &polegadas);
    
    printf("Digite um valor em graus Celcius e receba a conversao para Fahrenheit\n");
    printf("Valor celcius: ");
    scanf("%f", &celcius);
    
    printf("Digite um valor em graus Fahrenheit e receba a conversao para celcius\n");
    printf("Valor celcius: ");
    scanf("%f", &fahrenheits);
    
    printf("O valor em Polegadas antes e de: %.2f \n", polegada);
    
    Polegada(centimetros, &polegada);
    
    printf("O valor em Polegadas depois e de: %.2f \n", polegada);
    
    printf("O valor em Centimetros antes e de: %.2f \n", centimetro);
    
    Centimetro(polegadas, &centimetro);
    
    printf("O valor em Centimetros depois e de: %.2f \n", centimetro);
    
    printf("O valor em Fahrenheit antes e de: %.2f \n", fahrenheit);
    
    Fahrenheit(celcius, &fahrenheit);
    
    printf("O valor em Fahrenheit depois e de: %.2f \n", fahrenheit);
    
    printf("O valor em Celsius antes e de: %.2f \n", celsiu);
 
    Celsiu(fahrenheits, &celsiu);
    
    printf("O valor em Celsius depos e de: %.2f \n", celsiu);
    
    return 0;
}
