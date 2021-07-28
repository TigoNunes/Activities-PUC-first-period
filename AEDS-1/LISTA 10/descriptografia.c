#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *senha;
    char sen[17]; // abreviatura de senha
    char ten[17]; // abreviatura de tentativa

    senha = fopen("senha.txt", "r");

    fscanf(senha, "%s", &sen);

    printf("\n\nDigite a senha para obter acesso a descriptografia.\n");   
    printf("Senha: ");
    scanf("%s", ten);

    fclose(senha);

    if(strcmp(ten, sen) == 0)
    {
        FILE *arquivo;
        char string[1000];

        arquivo = fopen("crip.txt", "r");

        fscanf(arquivo, "%s", &string);
        
        int tam = strlen(string);           

        fclose(arquivo);

        arquivo = fopen("crip.txt", "w");

        for(int i = 0; i < tam; i++)
        {
            if (string[i] % 2 == 0)
            {
                string[i] = string[i] + 4;
            } 

            else
            {
                string[i] = string[i] - 2;
            }
        }

        string[tam] = '\0';

        fprintf(arquivo, "%s", string); 

        fclose(arquivo);

        printf("\n\n---Arquivo Descriptografado com sucesso---\n\n");
    } 

    else{

        printf("\n\nSENHA INCORRETA. DESCRIPTOGRAFIA NEGADA\n");
    }
        
    return 0;
}