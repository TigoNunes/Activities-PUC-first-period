#include <stdio.h>

int main()
{
    float salario, ns;
    printf("De o salario de um funcionario e receba o novo salario\n");
    printf("salario atual: ");
    scanf("%f", &salario);
    
    // calculo
    if(salario <= 300)
    {
        ns = (salario * 0.5) + salario;
    }
    else if(salario > 300 && salario <= 500)
    {
        ns = (salario * 0.4) + salario;
    }
    else if(salario > 500 && salario <= 700)
    {
        ns = (salario * 0.3) + salario;
    }
    else if(salario > 700 && salario <= 800)
    {
        ns = (salario * 0.2) + salario;
    }
    else if(salario > 800 && salario <= 1000)
    {
        ns = (salario * 0.1) + salario;
    }
    else
    {
        ns = (salario * 0.05) + salario;
    }
    
    //resultado
    printf("O novo salario é %.2f", ns);

    return 0;
}
