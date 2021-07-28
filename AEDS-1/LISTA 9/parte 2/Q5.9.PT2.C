/***********************************************************************************************************************
Dado dois vetores de inteiros ordenados, gerar um terceiro vetor de contenha os dois primeiros, e ainda esteja ordenado. 
Observe que o usuário deverá informar o tamanho dos dois vetores. 
O terceiro vetor deverá ser alocado dinamicamente com a soma do tamanho dos dois vetores anteriores.
***********************************************************************************************************************/

#include <stdio.h>
#include <string.h>

int main(void){

    int f1, f2;

    printf("\nDigite o numero de caracteres que voce quer usar em cada uma das suas strings:\n\n");

    printf("Frase 1: ");
    scanf("%d", &f1);

    printf("Frase 2: ");
    scanf("%d", &f2);

    char frase1[f1 + 1], frase2[f2 + 1];

    char duasFrases[(f1 + 1) + (f2 + 2)];

    printf("Primeira frase: ");
    scanf("%s", &frase1);

    strcpy(duasFrases, frase1);

    printf("Segunda frase: ");
    scanf("%s", &frase2);
    
    strcat(duasFrases, frase2);

    printf("\nResultado: %s\n", duasFrases);


    return 0;
}