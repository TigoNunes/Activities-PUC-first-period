/******************************************************************************

Crie uma sub-rotina que receba três números inteiros como parâmetros, representando horas, minutos e 
segundos, e os converta em segundos. Exemplo: 2h, 40min e 10s correspondem a 9.610 segundos.

*******************************************************************************/
#include <stdio.h>

void Tempo(int horas, int minutos, int segundos)
{
    int tempo;
    tempo = (horas * 3600) + (minutos * 60) + segundos;
    printf("O tempo em segundos e: %d", tempo);
}

int main()
{
    int horas, minutos, segundos;
    
    printf("Digite um horario com hora, minuto e segundo. Recba esse horario em segundos\n");
    printf("Digite a hora: ");
    scanf("%d", &horas);
    printf("Digite os minutos: ");
    scanf("%d", &minutos);
    printf("Digite os segundos: ");
    scanf("%d", &segundos);
    
    Tempo(horas, minutos, segundos);
    
    return 0;
}
