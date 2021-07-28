/************************************************************************************************************
Uma empresa deseja controlar as vendas realizadas por seus vendedores a cada mês, durante um ano inteiro.
Sabe-se que nessa empresa existem quatro vendedores.
É importante que esse controle seja automatizado, porque muitas consultas devem ser respondidas
imediatamente. O gerente necessita de um meio para cadastrar as vendas de todos os vendedores e,
depois, precisa ver um menu contendo as seguintes opções:
1. Cadastrar vendedor.
2. Cadastrar venda.
3. Consultar as vendas de um funcionário em determinado mês.
4. Consultar o total das vendas de determinado vendedor.
5. Mostrar o número do vendedor que mais vendeu em determinado mês.
6. Mostrar o número do mês com mais vendas.
7. Finalizar o programa.

Na opção 1: devem ser cadastrados vendedores, e não pode haver dois vendedores com o mesmo có-
digo.

Na opção 2: devem ser cadastradas vendas, informado o código do vendedor e o mês das vendas, mas
não podem existir duas vendas para o mesmo vendedor no mesmo mês.

Na opção 3: deve ser informado o número do vendedor e o número do mês que se deseja consultar,
para, então, descobrir e mostrar esse valor.

Na opção 4: deve ser informado o número do vendedor desejado, calculado e mostrado o total de suas
vendas.

Na opção 5: deve ser informado o número do mês que se deseja pesquisar, para então descobrir e mos-
trar o número do vendedor que mais vendeu nesse mês.

Na opção 6: deve ser descoberto e mostrado o mês com maior venda.

Na opção 7: o programa termina.
************************************************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Vendedor {
    int cod_vendedor;
    char nome[50];
};

struct Vendas {
    int vendas_vendedor;
};



int verificaCodigoExistente (int codigo, int cod[], int x) {
    int veri;

    for(int i = 0; i < x; i++)
    {
        veri = 0;

        if(codigo == cod[i])
        {
            veri = 1;
            return veri;            
        }
    }
    
    return 0;
}

int verificaMesExistente(int mes, int x){
    int veri;

    for(int i = 1; i <= x; i++)
    {
        veri = 0;

        if(mes == i)
        {
            veri = 1;
            return veri;            
        }
    }
    
    return 0;
}

int Inicializador(int numero[]){
    for(int i = 0; i < 100; i++){
        numero[i] = 0;
    }
}


int main(void){

    //opcao de menu ***************************************************************************************
    int op; 
    //variaveis de quantidade *****************************************************************************
    int qtd_vendedores = 4;
    int meses = 12;
    int codV = 0; //Numero para variavel codigo_vendas //
    int size;
    int total_vendas = 0;
    int maior = 0;
    char maisVendeu[50];
    int mesMaisVendeu;
    //variavel para verificacao ***************************************************************************
    int veri; //veri2;
    int mes;
    int code;
    //variaveis de codigo *********************************************************************************
    int codigo_v[qtd_vendedores];
    int codigoVendas[100];
    Inicializador(&*codigoVendas);
    //Struct's ********************************************************************************************
    struct Vendedor vendedores[qtd_vendedores];
    struct Vendas vendas[qtd_vendedores][meses]; 
    //Inicializando vendas[qtd_vendedores][meses].vendas_vendedor *****************************************
    for(int i = 0; i < qtd_vendedores; i++){
        for(int k = 0; k < meses; k++){
            vendas[i][k].vendas_vendedor = 0;
        }
    }
    //Menu de opcoes **************************************************************************************

    do{

        printf("\n\nMenu de opcoes\n");

        printf("\n1. Cadastrar vendedor.");
        printf("\n2. Cadastrar venda.");
        printf("\n3. Consultar as vendas de um funcionario em determinado mes.");
        printf("\n4. Consultar o total das vendas de determinado vendedor.");
        printf("\n5. Mostrar o numero do vendedor que mais vendeu em determinado mes.");
        printf("\n6. Mostrar o numero do mes com mais vendas.");
        printf("\n7. Finalizar o programa.");
        printf("\nOpcao: ");
        scanf("%d", &op);

        switch(op)
        {
            //cadastro vendedores *************************************************************************
            case 1: 
                for(int i = 0; i < qtd_vendedores; i++)
                {
                    veri = 1;
                    do{

                        printf("\nDigite o codigo do(a) vendedor(a): ");
                        scanf("%d", &codigo_v[i]);

                        veri = verificaCodigoExistente (codigo_v[i], codigo_v, i);

                        if (veri == 1){
                            printf("\nCodigo ja cadastrado, informe um novo codigo\n");
                        }
                        else{
                            vendedores[i].cod_vendedor = codigo_v[i];
                        }

                    }while(veri == 1);

                    setbuf(stdin, NULL);

                    printf("\nDigite o nome do(a) vendedor(a): ");
                    fgets(vendedores[i].nome, sizeof(vendedores[i].nome), stdin);

                    size = strlen(vendedores[i].nome);
                    vendedores[i].nome[size - 1] = '\0';

                    printf("\nVendedor cadastrado com sucesso\n");
                }

                for(int i = 0; i < qtd_vendedores; i++){
                    printf("\nVendedor: %s -> %d", vendedores[i].nome, vendedores[i].cod_vendedor);
                }

                break;

            //Cadastro de vendas **************************************************************************
            case 2:
                do{
                    veri = 0;             
                    do{
                        printf("\nDigite o codigo do(a) vendedor(a): ");
                        scanf("%d", &code);

                        veri = verificaCodigoExistente (code, codigo_v, 4);

                        if (veri == 1){
                            printf("\nCodigo confirmado\n");
                        }
                        else{
                            printf("\nCodigo nao existente, por favor informe outro codigo\n");
                        }

                    } while(veri == 0);

                    veri = 0;

                    do{
                        printf("\nRegistre o mes da venda: ");
                        scanf("%d", &mes);

                        veri = verificaMesExistente(mes, meses);

                        if(veri == 1){                                              
                            printf("\nMes confirmado\n");                        
                        }

                        else{
                            printf("\nEste mes nao existe\n");
                        }

                    } while(veri == 0);

                    veri = 1;

                    do{
                        printf("\nDigite o codigo da venda: ");
                        scanf("%d", &codigoVendas[codV]);
                        
                        veri = verificaCodigoExistente (codigoVendas[codV], codigoVendas, codV);

                        codV++;

                        if(veri == 0){
                            vendas[code - 1][mes - 1].vendas_vendedor = vendas[code - 1][mes - 1].vendas_vendedor + 1;
                            printf("\nVenda do vendedor %s registrada no mes %d", vendedores[code - 1].nome, mes);
                        }
                        else{
                            printf("\nEste codigo ja foi utilizado por outro vendedor ou pelo mesmo. Por favor digite outro codigo\n");
                        }

                    } while(veri == 1);

                    printf("\n\nDeseja cadastrar mais alguma venda? \n1: SIM \n0:NAO\n");
                    scanf("%d", &op);

                    /* for(int i = 0; i < qtd_vendedores; i++){
                        for(int k = 0; k < meses; k++){
                            printf("\nVV[%d][%d]: %d", i,k,vendas[i][k].vendas_vendedor);
                        }
                    } */
                }while(op != 0);
                
                break;

            //Verificar quantas vendas um vendedor teve em um mes *****************************************
            case 3: 
                veri = 0;             
                do{
                    printf("\nDigite o codigo do(a) vendedor(a): ");
                    scanf("%d", &code);

                    veri = verificaCodigoExistente (code, codigo_v, 4);

                    if (veri == 1){
                        printf("\nCodigo confirmado\n");
                    }
                    else{
                        printf("\nCodigo nao existente, por favor informe outro codigo\n");
                    }

                }while(veri == 0);

                veri = 0;

                do{
                    printf("\nMes da venda: ");
                    scanf("%d", &mes);

                    veri = verificaMesExistente(mes, meses);

                    if(veri == 1){
                        printf("\nTotal de vendas de %s no mes %d: %d\n", vendedores[code - 1].nome, mes, vendas[code - 1][mes - 1].vendas_vendedor);
                    }
                    else{
                        printf("\nEste mes nao existe\n");
                    }
                }while(veri == 0);

                break;
            
            //Total de vendas de um determinado funcionario ***********************************************
            case 4: 
                veri = 0;
                total_vendas = 0;             
                do{
                    printf("\nDigite o codigo do(a) vendedor(a): ");
                    scanf("%d", &code);

                    veri = verificaCodigoExistente (code, codigo_v, 4);

                    if (veri == 1){
                        printf("\nCodigo confirmado\n");
                        
                        for(int i = 0; i < meses; i++){
                            total_vendas = total_vendas + vendas[code - 1][i].vendas_vendedor;
                        }

                        printf("\nTotal de vendas realizadas por %s durante o ano: %d\n", vendedores[code - 1].nome, total_vendas);

                    }
                    else{
                        printf("\nCodigo nao existente, por favor informe outro codigo\n");
                    }

                }while(veri == 0);

                break;

            //Codigo do vendedor que vendeu mais***********************************************************
            case 5: 
                do{
                    printf("\nDigite o mes que deseja consultar: ");
                    scanf("%d", &mes);

                    veri = verificaMesExistente(mes, meses);

                    if(veri == 1){                                              
                        printf("\nMes confirmado\n");                        
                    }

                    else{
                        printf("\nEste mes nao existe\n");
                    }

                } while(veri == 0);

                for(int i = 0; i < qtd_vendedores; i++){
                   if(vendas[i][mes - 1].vendas_vendedor > maior){

                       maior = vendas[i][mes - 1].vendas_vendedor;

                       strcpy(maisVendeu, vendedores[i].nome);
                    }                    
                }

                printf("\nO vendedor que mais vendeu no mes %d foi %s com um total de %d vendas\n", mes, maisVendeu, maior);

                break;

            //Mostrar o numero do mes com mais vendas.*****************************************************
            case 6: 
                maior = 0;

                for(int i = 0; i < meses; i++){
                    total_vendas = 0;
                    for(int k = 0; k < qtd_vendedores; k++){
                        total_vendas = total_vendas + vendas[k][i].vendas_vendedor;
                    }
                    if(total_vendas > maior){
                        maior = total_vendas;
                        mesMaisVendeu = i;
                    }
                }

                printf("\nO mes com maior numero de vendas foi %d, com %d vendas\n", mesMaisVendeu + 1, maior);
                break;

            case 7: 
                printf("\nFinalizando programa...\n");
                break;
        }

    }while(op != 7);

    printf("\nPrograma finalizado\n");

    return 0;
}