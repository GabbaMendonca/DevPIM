#include <stdio.h>
#include <stdlib.h>

#include "_Terminal.h"

////////////////////////////TELA DO LOGIN DE USUARIO//////////////////////
void loginUsuario(void)
{
    int resp1, cont, cpf, cpfValido;
    cont = 4;

    cpfValido = 0;

    do
    {
        LIMPA_TERM
        printf("\n\n");
        printf("|----------------------------------------------------------|\n");
        printf("|                      LOGIN USUARIO                       |\n");
        printf("|----------------------------------------------------------|\n");
        printf("\n");

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
                return;
            }
            else
            {

                printf("     Usuario nao encontrado ... ! :( \n\n");
                printf("     Pressione ENTER para DIGITAR NOVAMENTE, \n");
                printf("     você ainda tem %d tentativas, \n", cont);
                printf("     ou QUALQUER TECLA para voltar ao MENU INICIAL ");

                //printf("Dados estão corretos ? ( S / N ) : ");


                char opc;
                opc = getchar();
                fflush(stdin);

                switch(opc)
                {
                    case 10:
                        break;

                    default:

                        printf("Opcão invalida!");
                        return;
                }
                
            }
        }
    }
    while (cpfValido != 1);
}