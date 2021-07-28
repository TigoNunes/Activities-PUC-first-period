/******************************************************************************

Faça um algoritmo para ler dois valores inteiros e imprimir o resultado da divisão do primeiro pelo
segundo. Se o segundo valor informado for ZERO, deve ser impressa uma mensagem de VALOR INVÂLIDO
e deverá ser lido um novo valor. Ao final do programa deve ser impressa a seguinte mensagem: VOCE
DESEJA OUTRO CÁLCULO (S/N)?. Se a resposta for S o programa deverá retornar ao começo, caso
contrário deverá encerrar a sua execução imprimindo quantos cálculos foram feitos.
OBS: O programa só deverá aceitar com a resposta para a pergunta as letras S ou N.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float n1, n2, calculos = 0;
    float resultado;
    char resposta;
    
    do
    {
        printf("Digite 2 numeros inteiros e veja o resultado da divisao do primeiro pelo segundo\n");
        
        printf("Primeiro numero: ");
        scanf("%f", &n1);
        
        printf("Segundo numero: ");
        scanf("%f", &n2);
        
        if(n2 == 0)
        {
            printf("Valor invalido, digite outro numero: ");
            scanf("%f", &n2);
        }
        
        resultado = n1 / n2;
        printf("O resultado da divisao ente %.0f e %.0f e: %.2f \n", n1, n2, resultado);
        
        calculos++;
        
        printf("Deseja realizar outro calculo?\n");
        printf("S - sim \n");
        printf("N - nao \n");
        scanf(" %c", &resposta);
        
        
    }while(resposta != 'N' && resposta != 'n');
    
    printf("O numero de calculos feitos foi de: %.0f", calculos);

    return 0;
}
