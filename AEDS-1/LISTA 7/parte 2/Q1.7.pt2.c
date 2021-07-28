/******************************************************************************

Implemente uma funC'C#o recursiva para solucionar cada um dos problemas descritos abaixo, 
supondo que sua funC'C#o receba como parC"metros um vetor A de inteiros e a quantidade n de
elementos armazenada atualmente no vetor:

a. Imprimir os elementos na ordem em que se encontram armazenados (isto C), A[0], A[1], . . ., A[n-1]);

b. Imprimir os elementos na ordem contrC!ria C quele em que se encontram armazenados (isto C), A[n-1], . . ., A[1], A[0]);

c. Calcular o somatC3rio do valor de todos os elementos;

d. Calcular a mC)dia do valor de todos os elementos.

*******************************************************************************/
#include <stdio.h>

void Ordem_Cres(int x, int vet[])
{
    static int y = 0;
    
    if(y < x)
    {
        printf("%d ", vet[y]);
        
        y++;
        
        Ordem_Cres(x, vet);
    }
    
    else
    {
        printf("} Ordem (A[0], A[1], . . ., A[n-1])\n");
    }
}

void Ordem_Decres(int x, int vet[])
{
    if (x == 0)
    {
        printf("} Ordem (A[n-1], . . ., A[1], A[0])\n");
    }
    else
    {
        printf("%d ", vet[x - 1]);
        Ordem_Decres(x - 1, vet);
    }
}

int Soma_vetores (int x, int vet[])
{
    
  if (x == 0)
  {
      return 0;
  }
  
  else
  {
      return vet[x - 1] + Soma_vetores(x - 1, vet);
  }
  
}

float Media_vetores (float x, int vet[], int y)
{
    if (y == x)
    {
        return Soma_vetores (x, vet) / x;
    }
    
    else
    {
        Media_vetores(x, vet, y + 1);
    }
}

int main ()
{
  int n;
  int resp_c; 
  float resp_d;  
  int i = 0; 
  
  printf ("Digite um numero inteiro e receba:\n");
  printf ("a. Imprimir os elementos na ordem em que se encontram armazenados (isto C), A[0], A[1], . . ., A[n-1])\n");
  printf ("b. Imprimir os elementos na ordem contraria a quele em que se encontram armazenados (isto C), A[n-1], . . ., A[1], A[0])\n");
  printf ("c. Calcular o somatorio do valor de todos os elementos\n");
  printf ("d. Calcular a media do valor de todos os elementos.\n");

  printf ("Numero: ");
  scanf ("%d", &n);
  
   int A[n];

  printf ("Digite os valores de cada vetor: \n");

  for (i; i < n; i++)
    {
      printf ("Digite o valor do vetor A[%d]: ", i);
      scanf ("%d", &A[i]);
    }

  Ordem_Cres(n, A);
  
  Ordem_Decres(n, A);
  
  resp_c = Soma_vetores (n, A);
  
  printf("A soma dos valores de todos os vetores e igual a: %d\n", resp_c);
  
  resp_d = Media_vetores (n, A, i);
  
  printf("A media dos vetores e igual a: %.2f", resp_d);
  
  
  
  return 0;
}


