/**
* @file menuAdm.c
* @brief Menu do administrador do sistema.
* @autor(es): Gabriel S. Mendonça, Gabriel A. Maranhão,
*             Rodrigo J. da Almeida, Giovane Oliveira.
*             Lucas Apolonio.
*
* @warning --
* @todo - inserir botao para outras configurações - para senha trocar senha de ADM
* @bug  - Quando salva e volta para essa tela esta apresentando uma mensagem em cima da tela
* @Copyright (c) Autores do Projeto. Todos os Direitos reservados.
*/
#include <stdio.h>
#include <stdlib.h>

#include "_Terminal.h"
#include "a_cabecalho_main.h"

void menuAdm()
{
    do 
    {

    LIMPA_TERM
    printf("\n\n");
    printf("|----------------------------------------------------------|\n");
    printf("|                   MENU ADMINISTRATIVO                    |\n");
    printf("|----------------------------------------------------------|\n");
    printf("\n");

    printf("|                  ===     OPCOES     ===                  |\n\n");

    printf("     (1) >>> Cadastrar Pessoas \n");
    printf("     (2) >>> Cadastrar Palestras \n\n");

    printf("     (0) <<< Retornar ao Menu Inicial !\n\n");


    int opcao, verificaoOpc;

        printf("     Opcao : ");
        scanf("%d%*c", &opcao);
        fflush(stdin);

        
        switch (opcao)
        {
            case 0:
                menuInicial();
                break;

            case 1:
                cadastrarPessoa();
                break;

            case 2:
                cadastrarPalestra();
                break;
        
            default:
                printf("Valor invalido \n");
                break;
        }

    } while (1);

}