/******************************************************************************

20. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e o
número de filhos. Faça uma sub-rotina que leia esses dados para um número não determinado de pessoas
e retorne a média de salário da população, a média do número de filhos, o maior salário e o percentual
de pessoas com salário inferior a R$ 380,00.

*******************************************************************************/
#include <stdio.h>

void Resultados(float media_salario, int media_filhos, float maior_salario, float percentual, int contator)
{
    float mediaS;
    
    mediaS = media_salario / contator;
    
    printf("A media de salario da populacao e de: %.2f\n", mediaS);
    
    int mediaF;
    
    mediaF = media_filhos / contator;
    
    printf("A media de filhos da populacao e de: %d\n", mediaF);
    
    printf("O maior salario foi de: %.2f\n", maior_salario);
    
    float percent;
    
    percent = (percentual * 100) / contator;
    
    printf("O percentual de pessoas que recebem menos de 380 reais e de: %.2f", percent);
}


int main()
{
    char pergunta;
    float salario, media_salario = 0;
    int filhos, media_filhos = 0;
    float maior_salario = 0;
    float percentual = 0;
    int contator = 1;
    
    printf("Preencha os dados pedidos\n");
    
    do
    {
        printf("Digite o salario: ");
        scanf("%f", &salario);
        
        media_salario = media_salario + salario;
        
        if(salario > maior_salario)
            maior_salario = salario;
        
        if(salario < 380)
            percentual++;
        
        printf("Digite o numero de fihos: ");
        scanf("%d", &filhos);
        
        media_filhos = media_filhos + filhos;
        
        printf("Deseja adicionar dados de mais pessoas?\n");
        printf("S = sim / N = não\n");
        scanf(" %c", &pergunta);
        
        if(pergunta == 'S')
            contator++;
        
    }while(pergunta != 'N');
    
    Resultados(media_salario, media_filhos, maior_salario, percentual, contator);

    return 0;
}
