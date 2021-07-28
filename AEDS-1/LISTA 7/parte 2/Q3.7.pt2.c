/******************************************************************************

3- Modifique a função implementada anteriormente no item (3) de modo a contabilizar 
o número de comparações com elementos do vetor que são realizadas por ela durante 
a pesquisa a um elemento. Para um vetor com 10 elementos, qual são as quantidades 
mínima e máxima de comparações obtidas?

*******************************************************************************/
#include <stdio.h>

int Verificacao(int x, int vet[], int alvo)
{
    static int counter = 1;
    
    if (vet[x - 1] == alvo)
    {
        return counter;
    }
    
    else if (x != 0)
    {
        counter++;
        Verificacao(x - 1, vet, alvo);
    }
    
    else
    {
        return counter;
    }
}

int main()
{
    int n;
    int x;
    
    printf("Digite um numero de vetores, depos um valor inteiro para cada vetor e por fim digite um numero inteiro, ao final sera mostrado quanta verificacoes foram feitas\n");
    
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
    
    printf("O numero de verificacoes feitas foi: %d", resposta);
    
    
    return 0;
}
