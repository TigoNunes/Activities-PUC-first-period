/******************************************************************************

Crie um programa que receba três valores (obrigatoriamente maiores que zero), representando as medi-
das dos três lados de um triângulo.

Elabore sub-rotinas para:
■ determinar se esses lados formam um triângulo (sabe-se que, para ser triângulo, a medida de um
lado qualquer deve ser inferior ou igual à soma das medidas dos outros dois).

■ determinar e mostrar o tipo de triângulo (equilátero, isósceles ou escaleno), caso as medidas for-
mem um triângulo.

Todas as mensagens deverão ser mostradas no programa principal.

*******************************************************************************/
#include <stdio.h>

void Triangulo(float valor1, float valor2, float valor3)
{
    if(valor1 + valor2 >= valor3)
    {
        if(valor1 == valor2 && valor2 == valor3)
        {
            printf("Triangulo equilatero");
        }
        else if(valor1 == valor2 && valor2 != valor3 || valor2 == valor3 && valor3 != valor1 || valor1 == valor3 && valor3 != valor2)
        {
            printf("Triangulo isosceles");
        }
        else
        {
            printf("Triangulo escaleno");
        }
    }
    else
        printf("Essas medidas nao formam um triangulo");
}


int main()
{
    float valor1, valor2, valor3;
    
    printf("Digite 3 valores e veja se eles formam um triangulo, caso formem, descubra qual tipo ele e\n");
    
    printf("Valor1: ");
    scanf("%f", &valor1);
    
    printf("Valor2: ");
    scanf("%f", &valor2);
    
    printf("Valor3: ");
    scanf("%f", &valor3);
    
    Triangulo(valor1, valor2, valor3);
    
    
    
    
    return 0;
}
