#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
PACIENTE (COD_PACIENTE, NOME, ENDERECO, TELEFONE) 
MEDICO (COD_MEDICO, NOME, TELEFONE) 
CONSULTA (NUM_CONSULTA, DIA_SEMANA, HORA, COD_MEDICO, COD_PACIENTE)
*/

struct Paciente {
    int cod_paciente;
    char nome[50];
    char end[200];
    char tel[11];
};

struct Medico {
    int cod_medico;
    char nome[50];
    char tel[11];
};

struct Consulta {
    int num_consulta;
    char dia_semana[50];
    int cod_paciente;
    int cod_medico;
};

struct Agendamento{     
    int agendamentos;
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

int descobrePosicao (int codigo, int cod[], int x) {    

    for(int i = 0; i < x; i++)
    {

        if(codigo == cod[i])
        {
            return i;            
        }
    }
    
    return x;
}

int main()
{
    /**** Declaração das viariáveis ****/
    int qtd_pacientes = 5;
    int qtd_medicos = 3;
    int i, tam, flag, flug;
    int codigo_p[qtd_pacientes], codigo_m[qtd_medicos];
    int codigo_c[qtd_pacientes], cod;
    char nomeMedico[50], nomeDia[50];

    struct Paciente pacientes[qtd_pacientes];
    struct Medico medicos[qtd_medicos];
    struct Consulta consultas[qtd_pacientes];
    struct Agendamento agendamentos[qtd_medicos][5];

    for(i = 0; i < qtd_medicos; i++){
        for(int k = 0; k < 5; k++){
            agendamentos[i][k].agendamentos = 0; 
        }
    }

    /**** Cadastro dos pacientes ****/
    for (i = 0; i < qtd_pacientes; i++)
    {
        flag = 1;
        do {
            printf("\nDigite o codigo do paciente: ");
            scanf("%d", &codigo_p[i]);

            //chama a função: flag: 0 se o código não existe e 1 caso contrário
            flag = verificaCodigoExistente(codigo_p[i], codigo_p, i);

            if (flag == 1)
                printf("Codigo ja cadastrado, informe um novo codigo\n");
            else
                pacientes[i].cod_paciente = codigo_p[i];

        } while (flag == 1);

        setbuf(stdin, NULL);

        printf("\nDigite o nome do paciente: ");
        fgets(pacientes[i].nome, sizeof(pacientes[i].nome), stdin);

        tam = strlen(pacientes[i].nome);
        pacientes[i].nome[tam - 1] = '\0';

        setbuf(stdin, NULL);

        printf("\nDigite o endereco do paciente: ");
        fgets(pacientes[i].end, sizeof(pacientes[i].end), stdin);

        tam = strlen(pacientes[i].end);
        pacientes[i].end[tam - 1] = '\0';

        setbuf(stdin, NULL);

        printf("\nDigite o telefone do paciente: ");
        fgets(pacientes[i].tel, sizeof(pacientes[i].tel), stdin);

        tam = strlen(pacientes[i].tel);
        pacientes[i].tel[tam - 1] = '\0';

        setbuf(stdin, NULL);

        printf("\n***Paciente cadastrado***\n");
    }

    printf("\n***MEDICOS***\n");

    /**** Cadastro dos medicos ****/
    for (i = 0; i < qtd_medicos; i++)
    {
        flag = 1;
        do {
            printf("\nDigite o codigo do medico: ");
            scanf("%d", &codigo_m[i]);

            //chama a função: flag: 0 se o código não existe e 1 caso contrário
            flag = verificaCodigoExistente(codigo_m[i], codigo_m, i);

            if (flag == 1)
                printf("Codigo ja cadastrado, informe um novo codigo\n");
            else
                medicos[i].cod_medico = codigo_m[i];

        } while (flag == 1);

        setbuf(stdin, NULL);

        printf("\nDigite o nome do medico: ");
        fgets(medicos[i].nome, sizeof(medicos[i].nome), stdin);

        tam = strlen(medicos[i].nome);
        medicos[i].nome[tam - 1] = '\0';

        setbuf(stdin, NULL);

        printf("\nDigite o telefone do medico: ");
        fgets(medicos[i].tel, sizeof(medicos[i].tel), stdin);

        tam = strlen(medicos[i].tel);
        medicos[i].tel[tam - 1] = '\0';

        setbuf(stdin, NULL);

        printf("\n***Medico cadastrado***\n");
    }

    for (i = 0; i < qtd_pacientes; i++)
    {
        printf("\nCodigo: %d, nome: %s, end: %s, tel: %s", pacientes[i].cod_paciente, pacientes[i].nome, pacientes[i].end, pacientes[i].tel);
    }

    printf("\n");

    for (i = 0; i < qtd_medicos; i++)
    {
        printf("\nCodigo: %d, nome: %s, tel: %s", medicos[i].cod_medico, medicos[i].nome, medicos[i].tel);
    }

    /*Cadastro de consultas**********************************************************************************/

    printf("\nMarque a consulta dos pacientes, lembre que cada medico so atende 2 por dia da semana.\n");

    /**** Cadastro das consultas ****/
    for (i = 0; i < qtd_pacientes; i++)
    {
        flag = 1;
        do {
            printf("\nDigite o codigo da consulta: ");
            scanf("%d", &codigo_c[i]);

            //chama a função: flag: 0 se o código não existe e 1 caso contrário
            flag = verificaCodigoExistente(codigo_c[i], codigo_c, i);

            if (flag == 1)
                printf("\nCodigo ja cadastrado\n");
            else
                consultas[i].num_consulta = codigo_c[i];

        } while (flag == 1);
        
        flag = 0;
        do {
            printf("\nDigite o codigo do paciente: ");
            scanf("%d", &cod);

            //chama a função: flag: 0 se o código não existe e 1 caso contrário
            flag = verificaCodigoExistente(cod, codigo_p, 5);

            if (flag == 1){
                for(int x = 0; x < i; x++){
                    if(cod == consultas[x].cod_paciente){
                        flag = 0;
                        break;
                    }

                    else{
                        flag = 1;                       
                    }
                }

                if(flag == 0){
                    printf("\nPaciente ja agendado\n");
                }

                else{
                    consultas[i].cod_paciente = cod;
                    printf("\nPaciente confirmado\n");
                }
            }

            else
                printf("\nCodigo nao existe\n");                

        } while (flag == 0);

        flag = 0;
        do {
            printf("\nDigite o codigo do medico: ");
            scanf("%d", &cod);

            //chama a função: flag: 0 se o código não existe e 1 caso contrário
            flag = verificaCodigoExistente(cod, codigo_m, qtd_medicos);

            if (flag == 1){
                //consultas[i].cod_medico = cod;
                printf("\nCodigo confirmado\n");
            }
            else
                printf("\nCodigo nao encontrado\n");

        } while (flag == 0);

        flag = 0;
        do {
            setbuf(stdin, NULL);

            printf("\nDia da semana do agendamento: ");
            fgets(consultas[i].dia_semana, sizeof(consultas[i].dia_semana), stdin);

            tam = strlen(consultas[i].dia_semana);
            consultas[i].dia_semana[tam - 1] = '\0';
            
            if(strcmp(consultas[i].dia_semana, "segunda") == 0){
                flug = descobrePosicao(cod, codigo_m, qtd_medicos);

                if(agendamentos[flug][0].agendamentos < 2){
                    agendamentos[flug][0].agendamentos = agendamentos[flug][0].agendamentos + 1;
                    printf("\nAgendamento realizado com sucesso\n");
                    printf("\nAgendamento no dia %s: %d\n", consultas[i].dia_semana, agendamentos[flug][0].agendamentos);
                    flag = 1;
                }

                else{
                    printf("\nA agenda do Dr.%s esta cheia na %s\n", medicos[flag].nome, consultas[i].dia_semana);
                }
            }

            else if(strcmp(consultas[i].dia_semana, "terca") == 0){
                flug = descobrePosicao(cod, codigo_m, qtd_medicos);

                if(agendamentos[flug][1].agendamentos < 2){
                    agendamentos[flug][1].agendamentos = agendamentos[flug][1].agendamentos + 1;
                    printf("\nAgendamento realizado com sucesso\n");
                    printf("\nAgendamento no dia %s: %d\n", consultas[i].dia_semana, agendamentos[flug][1].agendamentos);
                    flag = 1;
                }

                else{
                    printf("\nA agenda do Dr.%s esta cheia na %s\n", medicos[flag].nome, consultas[i].dia_semana);
                }
            }

            else if(strcmp(consultas[i].dia_semana, "quarta") == 0){
                flug = descobrePosicao(cod, codigo_m, qtd_medicos);

                if(agendamentos[flug][2].agendamentos < 2){
                    agendamentos[flug][2].agendamentos = agendamentos[flug][2].agendamentos + 1;
                    printf("\nAgendamento realizado com sucesso\n");
                    printf("\nAgendamento no dia %s: %d\n", consultas[i].dia_semana, agendamentos[flug][2].agendamentos);
                    flag = 1;
                }

                else{
                    printf("\nA agenda do Dr.%s esta cheia na %s\n", medicos[flag].nome, consultas[i].dia_semana);
                }
            }

            else if(strcmp(consultas[i].dia_semana, "quinta") == 0){
                flug = descobrePosicao(cod, codigo_m, qtd_medicos);

                if(agendamentos[flug][3].agendamentos < 2){
                    agendamentos[flug][3].agendamentos = agendamentos[flug][3].agendamentos + 1;
                    printf("\nAgendamento realizado com sucesso\n");
                    printf("\nAgendamento no dia %s: %d\n", consultas[i].dia_semana, agendamentos[flug][3].agendamentos);
                    flag = 1;
                }

                else{
                    printf("\nA agenda do Dr.%s esta cheia na %s\n", medicos[flag].nome, consultas[i].dia_semana);
                }
            }

            else if(strcmp(consultas[i].dia_semana, "sexta") == 0){
                flug = descobrePosicao(cod, codigo_m, qtd_medicos);

                if(agendamentos[flug][4].agendamentos < 2){
                    agendamentos[flug][4].agendamentos = agendamentos[flug][4].agendamentos + 1;
                    printf("\nAgendamento realizado com sucesso\n");
                    printf("\nAgendamento no dia %s: %d\n", consultas[i].dia_semana, agendamentos[flug][4].agendamentos);
                    flag = 1;
                }

                else{
                    printf("\nA agenda do Dr.%s esta cheia na %s\n", medicos[flag].nome, consultas[i].dia_semana);
                }
            }

            else{
                printf("\nDia invalido\n");
            }

        }while (flag == 0);
    }

    setbuf(stdin, NULL);

    printf("\nDigite o nome de um medico: ");
    fgets(nomeMedico, sizeof(nomeMedico), stdin);

    tam = strlen(nomeMedico);
    nomeMedico[tam - 1] = '\0';

    for(i = 0; i < qtd_medicos; i++){
        if(strcmp(nomeMedico, medicos[i].nome) == 0){

            setbuf(stdin, NULL);

            printf("\nDigite o dia da semana: ");
            fgets(nomeDia, sizeof(nomeDia), stdin);

            tam = strlen(nomeDia);
            nomeDia[tam - 1] = '\0';            

            if(strcmp(nomeDia, "segunda") == 0){
                printf("\nO Dr.%s tem %d consultas na %s\n", medicos[i].nome, agendamentos[i][0].agendamentos, nomeDia);
            }

            else if(strcmp(nomeDia, "terca") == 0){
                printf("\nO Dr.%s tem %d consultas na %s\n", medicos[i].nome, agendamentos[i][1].agendamentos, nomeDia);
            }

            else if(strcmp(nomeDia, "quarta") == 0){
                printf("\nO Dr.%s tem %d consultas na %s\n", medicos[i].nome, agendamentos[i][2].agendamentos, nomeDia);
            }

            else if(strcmp(nomeDia, "quinta") == 0){
                printf("\nO Dr.%s tem %d consultas na %s\n", medicos[i].nome, agendamentos[i][3].agendamentos, nomeDia);
            }

            else if(strcmp(nomeDia, "sexta") == 0){
                printf("\nO Dr.%s tem %d consultas na %s\n", medicos[i].nome, agendamentos[i][4].agendamentos, nomeDia);
            }

            else{
                printf("\nDia invalido\n");
            }
        }
    }

    setbuf(stdin, NULL);

    printf("\nDigite o dia da semana: ");
    fgets(nomeDia, sizeof(nomeDia), stdin);

    tam = strlen(nomeDia);
    nomeDia[tam - 1] = '\0';

    if(strcmp(nomeDia, "segunda") == 0){
        printf("\nConsultas no dia %s:\n", nomeDia);
        for(int i = 0; i < qtd_medicos; i++){
            printf("\nDr.%s: %d", medicos[i].nome, agendamentos[i][0].agendamentos);
        }
    }

    else if(strcmp(nomeDia, "terca") == 0){
        printf("\nConsultas no dia %s:\n", nomeDia);
        for(int i = 0; i < qtd_medicos; i++){
            printf("\nDr.%s: %d", medicos[i].nome, agendamentos[i][1].agendamentos);
        }
    }

    else if(strcmp(nomeDia, "quarta") == 0){
        printf("\nConsultas no dia %s:\n", nomeDia);
        for(int i = 0; i < qtd_medicos; i++){
            printf("\nDr.%s: %d", medicos[i].nome, agendamentos[i][2].agendamentos);
        }
    }

    else if(strcmp(nomeDia, "quinta") == 0){
        printf("\nConsultas no dia %s:\n", nomeDia);
        for(int i = 0; i < qtd_medicos; i++){
            printf("\nDr.%s: %d", medicos[i].nome, agendamentos[i][3].agendamentos);
        }
    }

    else if(strcmp(nomeDia, "sexta") == 0){
        printf("\nConsultas no dia %s:\n", nomeDia);
        for(int i = 0; i < qtd_medicos; i++){
            printf("\nDr.%s: %d", medicos[i].nome, agendamentos[i][4].agendamentos);
        }
    }

    else{
        printf("\nDia invalido\n");
    }




    /*Cadastro de consultas**********************************************************************************

    int dia;
    int x = 0;
    int codigo;
    int agendado[] = {0,0,0,0,0};
    int segAg[qtd_medicos][2];
    int terAg[qtd_medicos][2];
    int quaAg[qtd_medicos][2];
    int quiAg[qtd_medicos][2];
    int sexAg[qtd_medicos][2];

    int diaSeg[qtd_medicos], diaTer[qtd_medicos], diaQua[qtd_medicos], diaQui[qtd_medicos], diaSex[qtd_medicos];

    /*Inicializar vetores**********************************************************************

    for(int i = 0; i < qtd_medicos; i++){
        for(int k = 0; k < 2; k++){
            segAg[i][k] = 0;
            terAg[i][k] = 0;
            quaAg[i][k] = 0;
            quiAg[i][k] = 0;
            sexAg[i][k] = 0;
        }
    }

    /******************************************************************************************

    printf("\n\nAgende os pacientes\n");

    for(int i = 0; i < qtd_medicos; i++){
        printf("\nAgenda do doutor %s. Escolha o dia da semana e marque a consulta:\n", medicos[i].nome);
        
        int segunda = 0, terca = 0, quarta = 0, quinta = 0, sexta = 0;

        do{
            printf("\nSegunda: digite 1");
            printf("\nTerca: digite 2");
            printf("\nQuarta: digite 3");
            printf("\nQuinta: digite 4");
            printf("\nSexta: digite 5");
            printf("\nTerminar agendamentos de %s: 0", medicos[i].nome);
            printf("\nOpcao: ");
            scanf("%d", &dia);

            if(dia == 1){                
                if(segunda < 2){
                    printf("\nDigite o codigo do paciente que sera agendado: ");
                    scanf("%d", &codigo);

                    flag = verificaCodigoExistente(codigo, codigo_p, 5);

                    if(flag == 1){
                        printf("\n**Codigo confirmado**\n");

                        flag = verificaCodigoExistente(codigo, agendado, 5);
                        
                        if(flag == 0){
                            agendado[x] = codigo;
                            segAg[i][segunda] = codigo;
                            x++;
                            segunda++;
                            diaSeg[i] = segunda;
                            printf("\n**Cliente agendado**\n");
                        }

                        else{
                            printf("\n**Cliente ja agendado**\n");
                        }

                    }

                    else{
                        printf("\n**Codigo invalido**\n");
                    }
                }

                else{
                    printf("\nA agenda de %s esta cheia nesse dia\n", medicos[i].nome);
                }
            }

            else if(dia == 2){                
                if(terca < 2){
                    printf("\nDigite o codigo do paciente que sera agendado: ");
                    scanf("%d", &codigo);

                    flag = verificaCodigoExistente(codigo, codigo_p, 5);

                    if(flag == 1){
                        printf("\n**Codigo confirmado**\n");

                        flag = verificaCodigoExistente(codigo, agendado, 5);
                        
                        if(flag == 0){
                            agendado[x] = codigo;
                            terAg[i][terca] = codigo;
                            x++;
                            terca++;
                            diaTer[i] = terca;
                            printf("\n**Cliente agendado**\n");
                        }

                        else{
                            printf("\n**Cliente ja agendado**\n");
                        }

                    }

                    else{
                        printf("\n**Codigo invalido**\n");
                    }
                }

                else{
                    printf("\nA agenda de %s esta cheia nesse dia\n", medicos[i].nome);
                }
            }

            else if(dia == 3){                
                if(quarta < 2){
                    printf("\nDigite o codigo do paciente que sera agendado: ");
                    scanf("%d", &codigo);

                    flag = verificaCodigoExistente(codigo, codigo_p, 5);

                    if(flag == 1){
                        printf("\n**Codigo confirmado**\n");

                        flag = verificaCodigoExistente(codigo, agendado, 5);
                        
                        if(flag == 0){
                            agendado[x] = codigo;
                            quaAg[i][quarta] = codigo;
                            x++;
                            quarta++;
                            diaQua[i] = quarta;
                            printf("\n**Cliente agendado**\n");
                        }

                        else{
                            printf("\n**Cliente ja agendado**\n");
                        }

                    }

                    else{
                        printf("\n**Codigo invalido**\n");
                    }
                }

                else{
                    printf("\nA agenda de %s esta cheia nesse dia\n", medicos[i].nome);
                }
            }

            else if(dia == 4){                
                if(quinta < 2){
                    printf("\nDigite o codigo do paciente que sera agendado: ");
                    scanf("%d", &codigo);

                    flag = verificaCodigoExistente(codigo, codigo_p, 5);

                    if(flag == 1){
                        printf("\n**Codigo confirmado**\n");

                        flag = verificaCodigoExistente(codigo, agendado, 5);
                        
                        if(flag == 0){
                            agendado[x] = codigo;
                            quiAg[i][quinta] = codigo;
                            x++;
                            quinta++;
                            diaQui[i] = quinta;
                            printf("\n**Cliente agendado**\n");
                        }

                        else{
                            printf("\n**Cliente ja agendado**\n");
                        }

                    }

                    else{
                        printf("\n**Codigo invalido**\n");
                    }
                }

                else{
                    printf("\nA agenda de %s esta cheia nesse dia\n", medicos[i].nome);
                }
            }

            else if(dia == 5){                
                if(sexta < 2){
                    printf("\nDigite o codigo do paciente que sera agendado: ");
                    scanf("%d", &codigo);

                    flag = verificaCodigoExistente(codigo, codigo_p, 5);

                    if(flag == 1){
                        printf("\n**Codigo confirmado**\n");

                        flag = verificaCodigoExistente(codigo, agendado, 5);
                        
                        if(flag == 0){
                            agendado[x] = codigo;
                            sexAg[i][sexta] = codigo;
                            x++;
                            sexta++;
                            diaSex[i] = sexta;
                            printf("\n**Cliente agendado**\n");
                        }

                        else{
                            printf("\n**Cliente ja agendado**\n");
                        }

                    }

                    else{
                        printf("\n**Codigo invalido**\n");
                    }
                }

                else{
                    printf("\nA agenda de %s esta cheia nesse dia\n", medicos[i].nome);
                }
            }

            printf("\nX = %d\n", x);
            

        }while(dia != 0);
    }
    
    for(int i = 0; i < qtd_medicos; i++){
        for(int k = 0; k < 1; k++){
            printf("\nDr.%s: segunda: pacientes %d e %d/ terca: pacientes %d e %d/ quarta: pacientes %d e %d/ quinta: pacientes %d e %d/ sexta: pacientes %d e %d\n",  medicos[i].nome, segAg[i][k], segAg[i][k+1], terAg[i][k], terAg[i][k+1], quaAg[i][k], quaAg[i][k+1], quiAg[i][k], quiAg[i][k+1], sexAg[i][k], sexAg[i][k+1]);
        }
    }
    

    /*Comando para falar quantas consultas um medico tem no dia especifico******************************************************************************************************************************************************************************************/
    /****************************************************************************************************************************************************************************************************************************************************************
    char medico[50];
    
    setbuf(stdin, NULL);
    
    printf("\nDigite o nome do medico: ");
    fgets(medicos[i].nome, sizeof(medicos[i].nome), stdin);

    tam = strlen(medicos[i].nome);
    medicos[i].nome[tam - 1] = '\0'; 

    printf("\nDigite o nome do medico");
    printf("\nNome: ");
    fgets(medico, sizeof(medico), stdin);

    for(int i = 0; i < 3; i++)
    {
        if(strcmp(medico, medicos[i].nome) == 0)
        {
            printf("\nEscolha o dia da semana\n");

            printf("\nSegunda: digite 1");  
            printf("\nTerca: digite 2");
            printf("\nQuarta: digite 3");
            printf("\nQuinta: digite 4");
            printf("\nSexta: digite 5");
            printf("\nOpcao: ");
            scanf("%d", &dia);

            if(dia == 1){                
                printf("\n%s tem %d na segunda\n", medicos[i].nome, diaSeg[i]);
            }

            else if(dia == 2){                
                printf("\n%s tem %d na segunda\n", medicos[i].nome, diaTer[i]);
            }

            else if(dia == 3){                
                printf("\n%s tem %d na segunda\n", medicos[i].nome, diaQua[i]);
            }

            else if(dia == 4){                
                printf("\n%s tem %d na segunda\n", medicos[i].nome, diaQui[i]);
                
            }

            else if(dia == 5){                
                printf("\n%s tem %d na segunda\n", medicos[i].nome, diaSex[i]);
            }
        }

        else{
            printf("\n***NOME NAO ENCONTRADO***\n");
        }
    }
     ****************************************************************************************************************************************************************************************************************************************************************/

    return 0;
}