/******************************************************************************

Calcular e retornar (uma função para cada) as seguintes conversões de um valor 𝑛 informado pelo
usuário: Polegada para centímetros; Centímetros para polegadas (1 polegada = 2,54 cm);
Fahrenheit para Celsius; e Celsius para Fahrenheit (𝐶º = (𝐹º − 32)/1,8 e 𝐹º = (𝐶º ∗ 1,8) + 32).

*******************************************************************************/
#include <stdio.h>

float Polegada(float centimetros)
{
    float polegada;
    
    polegada = centimetros / 2.54;
    
    return polegada;
}

float Centimetro(float polegadas)
{
    float centimetro;
    
    centimetro = polegadas * 2.54;
    
    return centimetro;
}

float Fahrenheit(float celcius)
{
    float fahrenheit;
    
    fahrenheit = (celcius * 1.8) + 32;
    
    return fahrenheit;
}

float Celsiu(float fahrenheits)
{
    float celsiu;
    
    celsiu = (fahrenheits - 32) / 1.8;
    
    return celsiu;
}


int main()
{
    float centimetros, celcius;
    float polegadas, fahrenheits;
    float polegada, centimetro, fahrenheit, celsiu; 
    
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
    
    polegada = Polegada(centimetros);
    printf("O valor em Polegadas e de: %.2f \n", polegada);
    
    centimetro = Centimetro(polegadas);
    printf("O valor em Centimetros e de: %.2f \n", centimetro);
    
    fahrenheit = Fahrenheit(celcius);
    printf("O valor em Fahrenheit e de: %.2f \n", fahrenheit);
    
    celsiu = Celsiu(fahrenheits);
    printf("O valor em Celsius e de: %.2f \n", celsiu);

    return 0;
}
