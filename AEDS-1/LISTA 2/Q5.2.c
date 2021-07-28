#include <stdio.h>
#include <stdlib.h>

float x, y, r;

int numero;

int main()
{
    printf("Digite dois numeros e depois escolha uma das opcoes\n");
    
    printf("Digite o primeiro numero: ");
    scanf("%f", &x);
    
    printf("Digite o segundo numero: ");
    scanf("%f", &y );
    
    printf("Digite 1 para: media entre dois numeros\n");
    printf("Digite 2 para: diferença do maior para o menor\n");
    printf("Digite 3 para: produto entre dois numeros digitados\n");
    printf("Digite 4 para: divisao do primeiro pelo segundo\n");
    scanf("%d", &numero);
    
    switch(numero)
    {
        case 1:
            r = (x + y)/2;
            printf("media entre %.2f e %.2f e %.2f", x, y, r);
            break;
        
        case 2:
            if(x > y) 
            {
                r = x - y;
                printf("diferença entre %.2f e %.2f é %.2f", x, y, r);
            }
            else if(y > x) {
                r = y - x;
                printf("diferença entre %.2f e %.2f e %.2f", y, x, r);
            }
            break;
        
        case 3: 
            r = x * y;
            printf("o produto entre %.2f e %.2f e %.2f", x, y, r);
            break;
        
        case 4:
            if(y !=0) 
            {
                r = x / y;
            printf("a divisao entre %.2f e %.2f é %.2f", x, y, r);
            }
            else
            {
                printf("conta invalida");
            }
            break;
            
        default:
            printf("opcao invalida. opcoes validas: 1 a 4");
        
    }
    
    return 0;
}
