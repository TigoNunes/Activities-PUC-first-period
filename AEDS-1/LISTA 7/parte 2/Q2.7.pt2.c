/******************************************************************************

2- Implemente uma função recursiva para testar se um determinado número inteiro foi 
ou não armazenado em um vetor. Sua função deve receber como parâmetros um vetor A de inteiros, 
a quantidade 𝑛 de elementos armazenada atualmente no vetor e o valor 𝑥 inteiro a ser pesquido.
Além disso, como resultado sua função deve retornar 1 caso o elemento seja encontrado ou zero, 
caso contrário. Implemente um programa para testar sua função

*******************************************************************************/
#include <stdio.h>

int Verificacao(int x, int vet[], int alvo)
{
    if (vet[x - 1] == alvo)
    {
        return 1;
    }
    
    else if (x != 0)
    {
        return Verificacao(x - 1, vet, alvo);
    }
    
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    int x;
    
    printf("Digite um numero de vetores, depos um valor inteiro para cada vetor e por fim digite um numero inteiro, caso ele pertenca a um vetor sera imprimido [1] na tela\n");
    
    printf("Numero de vetores: ");
    scanf("%d", &n);
    
    int A[n];
    
    for (int i = 0; i < n; i++)
    {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }
    
    printf("Digite o valor que deve ser encontrado: ");
    scanf("%d", &x);
    
    int resposta = Verificacao (n, A, x);
    
    if (resposta == 1)
        printf("%d. O numero %d foi encontrado.", resposta, x);
    
    else
        printf("%d. O numero %d nao foi encontrado.", resposta, x);
    
    return 0;
}
