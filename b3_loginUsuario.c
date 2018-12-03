#include <stdio.h>
#include <stdlib.h>

#include "_Terminal.h"


////////////////////////////TELA DO LOGIN DE USUARIO//////////////////////
void loginUsuario(void)
{
    int resp1, cont, cpf, cpfValido;
    cont = 4;

    cpfValido = 1;

    do
    {
        LIMPA_TERM
        printf("\n\n");
        printf("|----------------------------------------------------------|\n");
        printf("|                      LOGIN USUARIO                       |\n");
        printf("|----------------------------------------------------------|\n");
        printf("\n");

        printf("|                   ===    LOGIN     ===                   |\n\n");

        printf("     Digite o CPF SEM PONTOS ou ESPAÇOS\n");
        printf("     para localizar seu cadastro ... \n\n");

        printf("     CPF : ");
        scanf("%d%*c", &cpf);
        fflush(stdin);

        //int procurarUsuario(int *cpf);
        //CPF esta cadastrado? Retonar 1
        if (cpfValido == 1)
        {
            printf("menuUsuario");
            //void menuUsuario(void);
        }
        else
        {

            cont--;

            if (cont == 0 )
            {
                printf("\n     Voce errou a 3 vezes ...\n");
                getchar();
                return;
            }
            else
            {

                printf("     Usuario nao encontrado ... ! :( \n\n");
                printf("     Pressione ENTER para DIGITAR NOVAMENTE, \n");
                printf("     ou QUALQUER TECLA para voltar ao MENU INICIAL\n\n");
                printf("     você ainda tem %d tentativas, \n", cont);

                char opc;
                opc = getchar();
                fflush(stdin);

                switch(opc)
                {
                    case 10:
                        break;

                    default:
                        return;
                }
                
            }
        }
    }
    while (cpfValido != 1);
}