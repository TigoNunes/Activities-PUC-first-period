#include <stdio.h>

int main()
{
    // codigo do cliente
    // tipo de investimento
    // valor investido 
    
    // calcular: rendimento mensal = valor investido * juros
    // Mostar valor investido e porcentagem do rendimento
    
    int codigo = 1, investimento;
    float valor;
    float rendimento;
    float juros;
    float valor_t = 0, juros_t = 0;
    
    while(codigo > 0)
    {
        printf("Digite o codigo do cliente, somente numeros inteiros positivos: ");
        scanf("%d", &codigo);
        
        if(codigo > 0)
        {
            printf("Escolha o tipo de investimento\n");
            printf("1. Poupanca\n");
            printf("2. Poupanca plus\n");
            printf("3. Fundos de renda fixa\n");
            scanf("%d", &investimento);
            
            printf("Diga o valor investido: ");
            scanf("%f", &valor);
        }
        if(investimento == 1 && codigo > 0)
        {
            juros = 0.015;
            
            rendimento = valor * juros;
            
            printf("O rendimento mensal foi de: %.2f\n", rendimento);
            
            juros_t = juros_t + juros;
            
            valor_t = valor_t + valor;
        }
        else if (investimento == 2 && codigo > 0)
        {
            juros = 0.02;
            
            rendimento = valor * juros;
            
            printf("O rendimento mensal foi de: %.2f\n", rendimento);
            
            juros_t = juros_t + juros;
            
            valor_t = valor_t + valor;
        }
        else if (investimento == 3 && codigo > 0)
        {
            juros = 0.04;
            
            rendimento = valor * juros;
            
            printf("O rendimento mensal foi de: %.2f\n", rendimento);
            
            juros_t = juros_t + juros;
            
            valor_t = valor_t + valor;
        }
    }
    printf("O total investido pelos clientes foi de : %.2f\n", valor_t);
    printf("O total de juros pagos foi de: %.3f\n", juros_t);

    return 0;
}
