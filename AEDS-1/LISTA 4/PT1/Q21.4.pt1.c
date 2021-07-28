/******************************************************************************

Faça um algoritmo para repetir a leitura de uma senha até que ela seja válida. 
Para cada leitura da senha incorreta informada escrever a mensagem "SENHA INVÂLIDA". 
Quando a senha for informada corretamente deve ser impressa a mensagem "ACESSO PERMITIDO" e o algoritmo deve ser encerrado. 
Considere que a senha correta é o valor 1234.23. 
Faça um algoritmo que receba uma sequência de números e retorne o maior e o menor número da sequência. 
A quantidade de números n é fornecida pelo usuário.

*******************************************************************************/
#include <stdio.h>

int main()
{
    // repetição para pedir senha 
    // repetição de algoritimos e informar maior e menor
    
    int senha;
    
    do
    {
        printf("Digite a senha: ");
        scanf("%d", &senha);
        
        if(senha == 1234)
        {
            printf("ACESSO PERMITIDO\n");
        }
        else
        {
            printf("SENHA INVALIDA\n");
        }
        
    }while(senha != 1234);

    return 0;
}
