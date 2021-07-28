#include <stdio.h>

int main()
{
    // menu de opbções
    // Na opção 1: receber duas notas, calcular e mostrar a média aritmética.
    // Na opção 2: receber três notas e seus respectivos pesos, calcular e mostrar a média ponderada.
    //Na opção 3: sair do programa.
    
    int op;
    
    printf("Escolha uma das opcoes: ");
    printf("\n1. Média aritmetica");
    printf("\n2. Média ponderada");
    printf("\n3. Sair\n");
    scanf("%d", &op);
    
    if(op == 1)
    {
        float a, b;
        float media_aritimetica;
        printf("Digite 2 numeros\n");
        
        printf("Primeiro numero: ");
        scanf("%f", &a);
        
        printf("Segundo numero: ");
        scanf("%f", &b);
        
        media_aritimetica = (a + b)/2;
        
        printf("A media aritmetica e: %.2f", media_aritimetica);
    }
    else if(op == 2)
    {
        float a, b, c;
        float p1, p2, p3;
        
        printf("Digite tres notas\n");
        
        printf("Primeira nota: ");
        scanf("%f", &a);
        printf("Segunda nota: ");
        scanf("%f", &b);
        printf("Terceira nota: ");
        scanf("%f", &c);
        
        printf("Digite os pesoas das notas: \n");
        
        printf("Peso da primeira nota: ");
        scanf("%f", &p1);
        printf("Peso da segunda nota: ");
        scanf("%f", &p2);
        printf("Peso da terceira nota: ");
        scanf("%f", &p3);
        
        //compilar programa
        
        float media_ponderada;
        media_ponderada = (a * p1 + b * p2 + c * p3)/(p1 + p2 + p3);
        
        //output do programa
        
        printf("A media ponderara de %.2f, %.2f, %.2f, %.2f, %.2f, %.2f é %.2f", a, b, c, p1, p2, p3, media_ponderada);
    }
    else if(op == 3)
    {
        return 3;
    }
    else
    {
        printf("Opcao invalida");
    }

    return 0;
}
