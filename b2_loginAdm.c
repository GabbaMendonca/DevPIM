/**
* @file loginAdm.c
* @brief Tela de login para acesso do ADM
* @autor(es): Gabriel S. Mendonça, Gabriel A. Maranhão,
*             Rodrigo J. da Almeida, Giovane Oliveira.
*             Lucas Apolonio.
*
* @warning --
* @todo - Lista do que implementar
*       - Implimentar a função para procurar login cadastrado na
*       base de dados para a validação
*
* @bug  - Lista de bugs conhecidos
* @Copyright (c) Autores do Projeto. Todos os Direitos reservados.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "_Terminal.h"
#include "a_cabecalho_para_teste.h"

#define MAX 10

int validaLogin();


void loginAdm(void)
{

    char login[MAX], senha[MAX];   
    int cont;
    cont = 3;

    do
    {

    LIMPA_TERM
    printf("\n\n");
    printf("|----------------------------------------------------------|\n");
    printf("|                    AREA DO ADMINISTRADOR                 |\n");
    printf("|----------------------------------------------------------|\n");
    printf("\n");


    printf("|                   ===    LOGIN     ===                   |\n\n");

        printf("     Login : ");
        fgets(login,10,stdin);

        printf("     Senha : ");
        fgets(senha,10,stdin);

        if (validaLogin(login, senha) == 1)
        {
            return;
        }
        else if(cont == 1)
        { 
            printf("\n     Voce errou a 3 vezes ...\n");
            getchar();
            menuInicial();
        }
        else
        {   
            cont--;
            printf("\n     Voce tem mais %d tentativas ... \n", cont);
        }
    }
    while(1);

}


int validaLogin(char *strLogin, char *strSenha)
{

    char loginSis[MAX], senhaSis[MAX];
    
    strcpy(loginSis, "adm"); 
    strcpy(senhaSis, "adm");

    /*
        implmentar a função de procura de login
    */

    if ( strcmp (strLogin, loginSis) == 10 ) 
    {
        if( strcmp (strSenha, senhaSis) == 10 )
        {
            printf("\n");
            printf("     ACESSO PERMITIDO! \n");
            printf("     Pressione enter para digitar novamente! \n");
            getchar();
            return 1;
        }else
        {
            printf("\n");
            printf("     SENHA INCORRETA! \n");
            printf("     Pressione enter para digitar novamente! \n");
            getchar();
            return 0;        
        }
    }
    else
    {
        printf("     USUARIO NAO EXISTE! \n");
        printf("     Pressione enter para digitar novamente! ");
        getchar();
        return 0;

    }
}