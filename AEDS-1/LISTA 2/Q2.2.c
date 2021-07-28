#include <stdio.h>

int main()
{
    float a, b;
    
    printf("digite 2 notas\n");
    
    printf("nota 1: ");
    scanf("%f", &a);
    
    printf("nota 2: ");
    scanf("%f", &b);
    
    //compilação
    float c;
    c = (a + b)/2;
    
    printf("a media aritimetica é : %.2f\n", c);
    
    if(c >= 0 && c < 3) {
        printf("reprovado");
    } else if(c >= 3 && c < 7) {
        printf("exame");
    } else if(c >= 7 && c <= 10) {
        printf("aprovado");
    }
    return 0;
}
