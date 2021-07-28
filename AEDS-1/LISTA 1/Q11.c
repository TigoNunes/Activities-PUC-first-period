#include <stdio.h>

int main()
{
    //input dos dados 
    
    float a, b;
    
    printf("Pedro comprou um saco de ração para seus 2 gatos\n");
    
    printf("Pedro nao e um monstro, entao ele serve a mesma quantidade de raçao");
    printf(" para os 2 gatos\n");
    
    printf("Forneça o peso do saco em kg: ");
    scanf("%f", &a);
    
    printf("Forneça quantas gramas de ração são servidas aos gatos: ");
    scanf("%f", &b);
    
    //compilação
    
    float c;
    c = a * 1000;
    
    float d;
    d = (b * 2) * 5;
    
    float e;
    e = c - d;
    
    float f;
    f = e / 1000;
    
    // output dos dados
    
    printf("Sobraram no saco de %.2f kg, %.2f kg apos 5 dias", a, f);
    
    return 0;
}
