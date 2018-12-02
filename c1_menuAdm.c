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


    int opcao, verificaoOpc;

        printf("     Opcao : ");
        scanf("%d%*c", &opcao);
        fflush(stdin);

        
        switch (opcao)
        {
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