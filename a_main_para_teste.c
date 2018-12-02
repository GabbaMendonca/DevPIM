#include <stdio.h>
#include <stdlib.h>

#include "a_cabecalho_main.h"
#include "_Terminal.h"

void main()
{

    printf("1 - Testar Cadastrar Palestra\n");
    printf("2 - Testar Cadastrar Pessoa\n");
    printf("3 - Testar Login ADM\n");
    printf("4 - Testar menuInicial\n");

    int opc;
    scanf("%d%*c", &opc);
    fflush(stdin);

    switch (opc)
    {
    case 1:
        cadastrarPalestra();
        break;

    case 2:
        cadastrarPessoa();
        break;

    case 3:
        loginAdm();
        break;

    case 4:
        menuInicial();
        break;

    default:
        break;
    }
}
