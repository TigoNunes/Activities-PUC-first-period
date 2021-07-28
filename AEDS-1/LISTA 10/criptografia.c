#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *arquivo;
    char string[1000];

    arquivo = fopen("crip.txt", "w");

    printf("\nDigite o conteudo que sera criptografado (Nao ultrapasse mil caracteres):\n\n");
    fgets(string, sizeof(string), stdin);

    int tam = strlen(string);

    for(int i = 0; i < tam; i++)
    {
        if (string[i] % 2 == 0)
        {
            string[i] = string[i] - 4;
        } 

        else
        {
            string[i] = string[i] + 2;
        }
    }

    string[tam] = '\0';

    fprintf(arquivo, "%s", string);    

    fclose(arquivo);

    //Senha para descriptografia//

    FILE *cod; // abrevição de codgo para senha
    char sen[17]; // abreviacao de senha para evitar bugs

    cod = fopen("senha.txt", "w");

    printf("\nDigite uma senha com ate 16 caracteres para conseguir descriptografar o arquivo. Nao use espacos\n");
    printf("senha: ");
    scanf("%s", &sen);

    fprintf(cod, "%s", sen);

    printf("\n\n---Arquivo Criptografado com sucesso---\n\n");
    
    return 0;
}