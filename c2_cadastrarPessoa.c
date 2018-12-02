/**
* @file cadastarPessoa.c
* @brief Coleta os dados da pessoa
* @autor(es): Gabriel S. Mendonça, Gabriel A. Maranhão,
*             Rodrigo J. da Almeida, Giovane Oliveira.
*             Lucas Apolonio.
*
* @warning --
* @todo - Lista do que implementar
* @bug  - Lista de bugs conhecidos
*       - Bug quando inseri mais numeros que o necessario no CPF
*
* @Copyright (c) Autores do Projeto. Todos os Direitos reservados.
*/


#include <stdio.h>
#include <stdlib.h>

#include "_Terminal.h"

#define SIZE 100
#define DESC 500
#define CP 12



/* 
    inicializando estruturas de variaveis
    STRUCTS
*/

typedef struct 
{
    char nome [SIZE];
    char email [SIZE];
    int  idade ;
    int  cpf ;
    char deficiencia [SIZE];
    char descDef [SIZE];
}PESSOA;

/* 
    Fim dos strucs
*/




/*
    PROTOTIPOS DAS FUNÇÕES
*/

    void inseriPessoa();
    void inseriEmail();
    void inseriIdade();
    void inseriCpf();
    void inseriDeficiencia();
    void inseriDescDef();
    void alteraDadosPessoa();
    void exibirPessoa();

/*
    FIM DOS PROTOTIPOS DAS FUNÇÕES
*/




/*
    Função principal - cadastrarPessoa - onde que ira manipular as outras funções
*/

void cadastrarPessoa()
{
    PESSOA pessoa;

    LIMPA_TERM
    printf("\n\n");
    printf("|----------------------------------------------------------|\n");
    printf("|                   MENU ADMINISTRATIVO                    |\n");
    printf("|----------------------------------------------------------|\n");
    printf("\n");


    inseriPessoa(&pessoa);
    inseriEmail(&pessoa);
    inseriIdade(&pessoa);
    inseriCpf(&pessoa);
    inseriDeficiencia(&pessoa);
    exibirPessoa(&pessoa);
}

/*
    Fim da função cadastrarPessoa
*/



/*
    Inicio das funções de controle
*/

void inseriPessoa(PESSOA *p)
{
    printf("Digite seu nome: ");
    fgets(p->nome, SIZE, stdin);
    fflush(stdin);
}

void inseriEmail(PESSOA *p)
{
    printf("Digite seu email: ");
    fgets(p->email, SIZE, stdin);
    fflush(stdin);
}

void inseriIdade(PESSOA *p)
{
    printf("Digite sua idade: ");
    scanf("%d%*c", &p->idade);
    fflush(stdin);
}

void inseriCpf(PESSOA *p)
{
    printf("Digite seu CPF: ");
    scanf("%d%*c", &p->cpf);
    //fgets(p->cpf, CP, stdin);
    fflush(stdin);
}

void inseriDeficiencia(PESSOA *p)
{

    do
    {
        printf("Possui algum tipo de deficiencia ? ( S / N ) : ");

        
        char opc;
        // //opc = getchar();
        scanf("%s%*c", &opc);
        fflush(stdin);

        // char opc;
        // opc = getchar();
        //fflush(stdin);

        switch(opc)
        {
            case 's':
            case 'S':
                printf("Informe a deficiencia : ");
                fgets(p->deficiencia, SIZE, stdin);
                inseriDescDef(p);
            return;

            case 'n':
            case 'N':
                return;
            
            default:
                printf("Opcão invalida!");
            break;
        }
    }
    while(1);
}

void inseriDescDef(PESSOA *p)
{
    printf("Descrição da deficiencia :");
    fgets(p->descDef, SIZE, stdin);
}




/*
    Esta função serve para mostrar na tela os dados a grava-los
*/

void exibirPessoa(PESSOA *p)
{
    int aux;
    aux = 0;

    do
    {
        LIMPA_TERM
        printf("Nome .............. : %s", p->nome);
        printf("Email ............. : %s", p->email);
        printf("Idade ............. : %d\n", p->idade);
        printf("CPF ............... : %d", p->cpf);
        printf("\nDeficiencia ....... : %s \n", p->deficiencia);
        printf("Descrição ......... : %s \n", p->descDef);
            
        printf("Dados estão corretos ? ( S / N ) : ");

        char opc;
        opc = getchar();

        switch(opc)
        {
            case 's':

                printf("Dados gravados com sucesso !\n");
                // GRAVAR DADOS
                printf("Pressione ENTER para sair ... !");
                getchar();
            return;
            case 'S':

                printf("Dados gravados com sucesso !\n");
                // GRAVAR DADOS
                printf("Pressione ENTER para sair ... !");
                getchar();
            return;

            case 'n':
                alteraDadosPessoa(p);
            break;
            case 'N':
                alteraDadosPessoa(p);
            break;
            
            default:
                printf("Opcão invalida!");
            break;
        }
    }
    while(1);    
}

void alteraDadosPessoa(PESSOA *p)
{
    LIMPA_TERM
    printf("( 1 ) >>> Nome .............. : %s", p->nome);
    printf("( 2 ) >>> Email ............. : %s", p->email);
    printf("( 3 ) >>> Idade ............. : %d \n", p->idade);
    printf("( 4 ) >>> CPF ............... : %d", p->cpf);
    printf("( 5 ) >>> Deficiencia ....... : %s \n", p->deficiencia);
    printf("( 6 ) >>> Descrição ......... : %s \n", p->descDef);

    printf("\nDigite a opcção que deseja alterar ?");

    int opc;
    scanf("%d%*c", &opc);

    
    switch (opc)
    {
        case 1:
            inseriPessoa(p);
        break;

        case 2:
            inseriEmail(p);
        break;

        case 3:
            inseriIdade(p);
        break;

        case 4:
            inseriCpf(p);
        break;

        case 5:
            inseriDeficiencia(p);
        break;

        case 6:
            inseriDeficiencia(p);
        break;

        default:
            printf("Opc invalida");
        break;
    }
}