#include <stdio.h>
#include <math.h>

int main()
{
    //input de dados
    float x, y, R1, R2;
    int nu;
    
    printf("Escolha dois numeros");
    
    printf("\n Primeiro numero: ");
    scanf("%f", &x);
    
    printf("Segundo numero: ");
    scanf("%f", &y);
    
    //opções de calculo
    printf("Escolha uma das opcoes: \n");
    printf("1 - Elevar o primeiro numero pelo segundo\n");
    printf("2 - Raiz quadrada de cada numero\n");
    printf("3 - Raiz cubica de cada um dos numeros\n");
    scanf("%d", &nu);
    
    if(nu == 1)
    {
        R1 =pow(x, y);
        printf("O resultado de %.2f elevado a %.2f é %.2f", x, y, R1);
    }
    else if(nu == 2)
    {
        R1 = sqrt(x);
        R2 = sqrt(y);
        printf("A raiz quadrade de %.2f e %.2f é %.2f e %.2f", x, y, R1, R2);
    }
    else if(nu == 3)
    {
        R1 = cbrt(x);
        R2 = cbrt(y);
        printf("A raiz cubuca de %.2f e %.2f é %.2f e %.2f", x, y, R1, R2);
    }
    else
    {
        printf("comando invalido");
    }
    return 0;
}

