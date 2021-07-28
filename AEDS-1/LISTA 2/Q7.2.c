#include <stdio.h>

int main()
{
    // input do salario e pedir salario
    
    float salario;
    
    printf("Os funcionarios que recebem MENOS que R$ 500 estao recebendo");
    printf(" um aumento de 30 por cento\n");
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);
    
    // Ganha saumento quem recebr salario < 500
    // salario > 500 recebe aviso 
    
    if(salario < 500)
    {
        (salario * 0.3) + salario;
        printf("o novo salario é: %.2f",(salario * 0.3) + salario);
    }
    else
    {
        printf("o seu salario nao esta qualificado para aumento");
    }

    return 0;
}
