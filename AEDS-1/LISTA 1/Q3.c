#include <stdio.h>
#include <math.h>

int main()
{
    //input dos dados
    
    int a;
    
    printf("digite um numero\n");
    scanf("%d", &a);
    
    //processamento do dados
    
    double raiz;
    raiz = (sqrt(a));
    
    //output dos dados
    
    printf("A raiz quadrada de %d é %f\n", a, raiz);
    
    return 0;
}


