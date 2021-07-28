/******************************************************************************

Desenvolva uma calculadora e implemente cada operação como um procedimento em seu programa. 
Faça um menu interativo exibindo as opções para que o usuário escolha qual operação realizar. 
Após a escolha do usuário, imprima na tela as instruções referentes a aquela operação. 
Ao finalizar a exibir o resultado da operação, exiba novamente o menu de opções inicial. 
Uma das opções deve ser a opção para inserir 0 (zero), para sair.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

void Soma(float num1, float num2)
{
    float soma;
    soma = num1 + num2;
    printf("%.2f + %.2f = %.2f\n", num1, num2, soma);
}
void Subtracao(float num1, float num2)
{
    float subtracao;
    subtracao = num1 - num2;
    printf("%.2f - %.2f = %.2f\n", num1, num2, subtracao);
}
void Multiplicacao(float num1, float num2)
{
    float multiplicacao;
    multiplicacao = num1 * num2;
    printf("%.2f * %.2f = %.2f\n", num1, num2, multiplicacao);
}
void Divisao(float num1, float num2)
{
    float divisao;
    divisao = num1 / num2;
    printf("%.2f / %.2f = %.2f\n", num1, num2, divisao);
}
void Raiz(float num1)
{
    float raiz;
    raiz = sqrt (num1);
    printf("Raiz de %.2f = %.2f\n", num1, raiz);
}
void Potencia(float num1, float num2)
{
    float potencia;
    potencia = num1 * num2;
    printf("potencia eletrica = %.2f W\n", potencia); 
}
void Seno(float num1)
{
    float seno;
    seno = sin (num1);
    
    printf("Seno de %.2f = %.2f\n", num1, seno);
}
void Cosseno(float num1)
{
    float cosseno;
    cosseno = cos (num1);
    
    printf("cosseno de %.2f = %.2f\n", num1, cosseno);
}
void Hipotenusa(float num1, float num2)
{
    float hipotenusa;
    hipotenusa = sqrt ((num1 * num1) + (num2 * num2));
    printf("Raiz do triangulo retangulo = %.2f\n", hipotenusa);
}
void Tangente(float num1, float num2)
{
    float tangente;
    tangente = num1 / num2;
    printf("Valor da Tangente = %.2f\n", tangente);
}
void Logaritmo(float num1)
{
    float logaritimo;
    logaritimo = log10(num1);
    printf("Log10(%.2f) = %.2f\n", num1, logaritimo);
}
void AreaRetangulo(float num1, float num2)
{
    float area_retangulo;
    area_retangulo = num1 * num2;
    printf("Area do retangulo = %.2f\n", area_retangulo);
}
void AreaCircunferencia(float num1)
{
    float area_circunferencia;
    area_circunferencia = (num1 * num1) * 3.14;
    printf("Area da circunferencia = %.2f\n", area_circunferencia);
}
void Fatorial(float num1)
{
    float fatorial = 1;

    while (num1 > 0)
	{
	  fatorial = fatorial * num1;
	  num1 = num1 - 1;
	}
    
    printf ("Fatorial = %.2f\n", fatorial);
}



int main()
{
    int op;
    float num1, num2;
    do
    {
        printf("\n1) Soma\n");
        printf("2) Subtracao\n");
        printf("3) Multiplicacao\n");
        printf("4) Divisao\n");
        printf("5) Raiz quadrada\n");
        printf("6) Potencia\n");
        printf("7) Seno\n");
        printf("8) Cosseno\n");
        printf("9) Hipotenusa de um triangulo retangulo\n");
        printf("10) Tangente\n");
        printf("11) Logaritmo\n");
        printf("12) Area de um retangulo\n");
        printf("13) Area de uma circunferencia\n");
        printf("14) Fatorial\n");
        printf("0) sair\n");
        printf("Sua opcao: ");
        scanf("%d", &op);
        
        if(op == 1)
        {
          printf("Digite 2 numeros\n");
          printf("Primeiro Numero: ");
          scanf("%f", &num1);
          printf("Segundo Numero: ");
          scanf("%f", &num2);
          
          Soma(num1, num2);
        }
        else if(op == 2)
        {
          printf("Digite 2 numeros\n");
          printf("Primeiro Numero: ");
          scanf("%f", &num1);
          printf("Segundo Numero: ");
          scanf("%f", &num2);
          
          Subtracao(num1, num2);
        }
        else if(op == 3)
        {
          printf("Digite 2 numeros\n");
          printf("Primeiro Numero: ");
          scanf("%f", &num1);
          printf("Segundo Numero: ");
          scanf("%f", &num2);
          
          Multiplicacao(num1, num2);
        }
        else if(op == 4)
        {
          printf("Digite 2 numeros\n");
          printf("Primeiro Numero: ");
          scanf("%f", &num1);
          printf("Segundo Numero: ");
          scanf("%f", &num2);
          
          Divisao(num1, num2);
        }
        else if(op == 5)
        {
          printf("Digite o numero\n");
          printf("Numero: ");
          scanf("%f", &num1);
          
          Raiz(num1);
        }
        else if(op == 6)
        {
          printf("Digite os dados\n");
          printf("Diferenca potencial: ");
          scanf("%f", &num1);
          printf("Corrente eletrica: ");
          scanf("%f", &num2);
          
          Potencia(num1, num2);
        }
        else if(op == 7)
        {
          printf("Digite o numero\n");
          printf("Numero: ");
          scanf("%f", &num1);
          
          Seno(num1);
        }
        else if(op == 8)
        {
          printf("Digite o numero\n");
          printf("Numero: ");
          scanf("%f", &num1);
          
          Cosseno(num1);
        }
        else if(op == 9)
        {
          printf("Digite o valor dos catetos\n");
          printf("Cateto Oposto: ");
          scanf("%f", &num1);
          printf("Cateto Adjacente: ");
          scanf("%f", &num2);
            
          Hipotenusa(num1, num2);
        }
        else if(op == 10)
        {
          printf("Digite o valor dos catetos\n");
          printf("Cateto Oposto: ");
          scanf("%f", &num1);
          printf("Cateto Adjacente: ");
          scanf("%f", &num2);
          
          Tangente(num1, num2);
        }
        else if(op == 11)
        {
          printf("Digite o numero\n");
          printf("Numero: ");
          scanf("%f", &num1);
          
          Logaritmo(num1);
        }
        else if(op == 12)
        {
          printf("Digite os valores do retangulo\n");
          printf("Valor da base: ");
          scanf("%f", &num1);
          printf("Valor da altura: ");
          scanf("%f", &num2);
          
          AreaRetangulo(num1, num2);
        }
        else if(op == 13)
        {
            printf("Digite o valor do RAIO da circunferencia\n");
            printf("Raio: ");
            scanf("%f", &num1);
            
            AreaCircunferencia(num1);
        }
        else if(op == 14)
        {
            printf("Digite o valor do numero\n");
            printf("Numero: ");
            scanf("%f", &num1);
            
            Fatorial(num1);
        }
        
    }while(op != 0);
    
    

    return 0;
}

