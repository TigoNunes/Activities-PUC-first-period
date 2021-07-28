/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
/* declarar a, b e c numerico*/
/* pedir para digitar os numeros*/
/* colocar para escanear os numeros*/
/* realizar a soma de a, b e c*/
/* fazer a media de a, b e c*/
/* ler resultado da soma*/
/* ler resultado da media*/
int main()
{
    int a;
    int b;
    int c;
    
    printf("escrever três números inteiros\n");
    scanf("%d %d %d", &a, &b, &c);
    
    double soma;
    soma = (a + b + c);
    
    double media;
    media = (a + b + c)/2.0;
    
    printf("A soma de %d, %d e %d é %f\n", a, b, c, soma);
    printf("A media de %d, %d e %d é %f", a, b, c, media);
    

    return 0;
}
