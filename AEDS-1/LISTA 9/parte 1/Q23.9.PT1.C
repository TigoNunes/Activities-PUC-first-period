/*****************************************************************************************************
A busca por subcadeias dentro de grandes cadeias de caracteres é um problema clássico na computação,
especificamente em bancos de dados. Faça um programa que receba uma cadeia de caracteres e uma
subcadeia, determine e mostre quantas vezes a subcadeia aparece dentro da cadeia.

O tamanho da subcadeia obrigatoriamente deve ser menor que o da cadeia.
Exemplos:
Entradas:
Cadeia = aaaassdffffghssiiii
Subcadeia = ss
Saída: a subcadeia aparece 2 vez(es) na cadeia
Entradas:
Cadeia = xxxxxaauuuyyyydrtsss
Subcadeia = yydrts
Saída: a subcadeia aparece 1 vez(es) na cadeia.
*****************************************************************************************************/

#include <stdio.h>
#include <string.h>

int Search(char seq[], char search[])
{
    char *find = strstr(seq, search);
    int times = 0;

    if(find != NULL)
    {
        printf("\nSubsequencia nao encontrada\n");
        return 0;
    }

    else
    {
        times++;
    }

    return times;
}

int main(void)
{
    char frase[51];
    char subseq[51];

    printf("\nDigite uma cadeia de caracteres, depois digite ume subcadeia e receba quantas vezes essa subcadeia aparece na cadeia principal\n\n");

    printf("Sequencia: ");
    fgets(frase, sizeof(frase), stdin);

    printf("Subsequencia: ");
    fgets(subseq, sizeof(subseq), stdin);

    int vezes = Search(frase, subseq);

    printf("\nA subsequencia %s apareceu %d vezes\n", subseq, vezes);

    return 0;
}