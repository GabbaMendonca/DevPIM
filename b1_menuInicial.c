/**
* @file menuInicial.c
* @brief Apresenta a tela de menu inicial
* @autor(es): Gabriel S. Mendonça, Gabriel A. Maranhão,
*             Rodrigo J. da Almeida, Giovane Oliveira.
*             Lucas Apolonio.
*
* @warning --
* @todo - Implementar tecla sair do programa
* @bug  - Lista de bugs conhecidos
* @Copyright (c) Autores do Projeto. Todos os Direitos reservados.
*/

#include <stdio.h>
#include <stdlib.h>

#include "_Terminal.h"
#include "a_cabecalho_main.h"


/*Funcao TelaInicial*/
void menuInicial()
{   
    do 
    {

    LIMPA_TERM
    printf("\n\n");
    printf("|----------------------------------------------------------|\n");
    printf("|                       TELA INICIAL                       |\n");
    printf("|----------------------------------------------------------|\n");
    printf("\n");


    printf("|                  ===     OPCOES     ===                  |\n\n");

    printf("     (1) >>> Para entrar na tela de usuario \n");
    printf("     (2) >>> Para entrar na tela de administrador \n\n");

    printf("     (0) <<< Encerrar programa !\n\n");


    int opcao, verificaoOpc;

        printf("     Opcao : ");
        scanf("%d%*c", &opcao);
        fflush(stdin);

        
        switch (opcao)
        {
            case 0:
                break;

            case 1:
                loginUsuario();
                break;

            case 2:
                loginAdm();
                break;
        
            default:
                printf("Valor invalido \n");
                break;
        }

    } while (1);

}
