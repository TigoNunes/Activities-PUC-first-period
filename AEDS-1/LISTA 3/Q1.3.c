#include <stdio.h>

int main()
{
    // colocar os valores que serão utilizados
    
    int i = 0;
    int a, b, c, d;
    int primeiro = 0, segundo = 0, terceiro = 0, quarto = 0;
    
    // Serão 5 grupos de 4 numeros
    // Os grupos serão apresentados em ordem lida, crescente e decrescente
    
    while (i <= 5)
    {
        i = i + 1;
        
     printf("\nDigite um numero inteiro positivo: ");
     scanf("%d", &a);
     printf("Digite um numero inteiro positivo: ");
     scanf("%d", &b);
     printf("Digite um numero inteiro positivo: ");
     scanf("%d", &c);
     printf("Digite um numero inteiro positivo: ");
     scanf("%d", &d);
     
     if(a > primeiro)
     {
        primeiro = a;
     }
     if(b > primeiro)
     {
        primeiro = b;
        segundo = a;
     }
     else if(b > segundo)
     {
        segundo = b;
     }
     else if(b > terceiro)
     {
        terceiro = b;
     }
     else
     {
        quarto = b;
     }
      if(c > primeiro)
     {
        primeiro = c;
        
        if(a > b)
        {
            segundo = a;
            terceiro = b;
        }
        else
        {
            segundo = b;
            terceiro = a;
        }
     }
     else if(c > segundo)
     {
        segundo = c;
        
        if (c > a)
        {
            terceiro = a;
        }
        else if(c > b)
        {
            terceiro = b;
        }
     }
     else if(c > terceiro)
     {
        terceiro = c;
     }
     else
     {
        quarto = c;
     }
           if(d > primeiro)
     {
        primeiro = d;
        
        if(a > b && b > c)
        {
            segundo = a;
            terceiro = b;
            quarto = c;
        }
        else if(b > a && a > c)
        {
            segundo = b;
            terceiro = a;
            quarto = c;
        }
         else if(c > a && a > b)
        {
            segundo = c;
            terceiro = a;
            quarto = b;
        }
        else if(c > b && a < b)
        {
            segundo = c;
            terceiro = b;
            quarto = a;
        }
        else if(c < a && c > b)
        {
            segundo = a;
            terceiro = c;
            quarto = b;
        }
        else if(c > a && c < b)
        {
            segundo = b;
            terceiro = c;
            quarto = a;
        }
     }
     else if(d > segundo)
     {
        segundo = d;
        
        if (d > a && d > c) //primeiro = b
        {
            if(a > c)
            {
                terceiro = a;
                quarto = c;
            }
            else
            {
                terceiro = c;
                quarto = a;
            }
        }
        else if(d > b && d > c) //primeiro = a
        {
            if(b > c)
            {
                terceiro = b;
                quarto = c;
            }
            else
            {
                terceiro = c;
                quarto = b;
            }
        }
        else if(d > a && d > b) //primeiro = c
        {
            if(b > a)
            {
                terceiro = b;
                quarto = a;
            }
            else
            {
                terceiro = a;
                quarto = b;
            }
        }
     }
     else if(d > terceiro)
     {
        terceiro = d;
        if(d > a && a < b && a < c)
        {
            quarto = a;
        }
        else if(d > b && b < a && b < c)
        {
            quarto = b;
        }
        else if(d > c && c < b && c < a)
        {
            quarto = c;
        }
     }
     else
     {
        quarto = d;
     }
     
     printf("Ordem digitada: %d, %d, %d, %d", a, b, c, d);
     printf("\nOrdem crescente: %d, %d, %d, %d", quarto, terceiro, segundo, primeiro);
     printf("\nOrdem decrescente: %d, %d, %d, %d", primeiro, segundo, terceiro, quarto);
     
     if(primeiro != 0 && segundo != 0 && terceiro != 0 && quarto != 0)
     {
        primeiro = 0;
        segundo = 0;
        terceiro = 0;
        quarto = 0;
     }
    } 
    return 0;
}

