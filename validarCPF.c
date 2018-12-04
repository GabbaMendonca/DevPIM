#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void loginUsuario()
{
    char cpf[20];
    int resp1, cont , cpfValido;
    int i;
    cont = 4;


    cpfValido = 0;

        //LIMPA_TERM
        printf("\n\n");
        printf("|----------------------------------------------------------|\n");
        printf("|                      LOGIN USUARIO                       |\n");
        printf("|----------------------------------------------------------|\n");
        printf("\n");

        printf("     Digite o CPF SEM PONTOS ou ESPACOS \n");
        printf("     para localizar seu cadastro ... \n\n");

        printf("     CPF : ");
        //scanf("%s%*c", &cpf[20]);

        fgets(cpf, 20, stdin);

        printf("%c", cpf[7]);

        for(i=0; i<11; i++)
        {
            
            for ( int j = 0; j < 10; j++ )
            {  
                char aux[5],auxVetor[3];
                sprintf(aux, "%d", j); // funação que converte inteiro para string

                strcpy(auxVetor, cpf[i]); 
                
                /*
                    aqui começa a dar erro pq nao conseguimos comparar
                    para a validação
                    ela roda o primeiro for pelas posições da string
                    depois compara no segundo for com os numeros de 0 a 9
                    porem a comparação da erro e não compila
                */

                if(strcmp(auxVetor, aux) == 0)
                {
                    break;
                }
                else
                {
                    printf("\n CPF Nao atende aos requisitos necessarios...");
                }
            }
        }
}
    //         if (validaLogin(login, i) == 1)
                
    //             {

    //             cpfValido = 1;

    //             } 
    //             else 
    //             {
    //             if(cpfValido == 1){
    //                 printf("sucesso \n");
    //                 break;
    //             }
    //             else
    //             {
    //                 printf("\n CPF Nao atende aos requisitos necessarios...");
    //             }
    //         }
    //     }

    //     fflush(stdin);

    //     //int procurarUsuario(int *cpf);
    //     //CPF esta cadastrado? Retonar 1
    //     if (cpfValido == 1)
    //     {
    //         printf("menuUsuario");
    //         //void menuUsuario(void);
    //     }
    //     else
    //     {
    //         cont--;

    //         if (cont == 0 )
    //         {
    //             return;
    //         }
    //         else
    //         {
    //             printf("     Usuario nao encontrado ... ! :( \n\n");
    //             printf("     Pressione ENTER para DIGITAR NOVAMENTE, \n");
    //             printf("     você ainda tem %d tentativas, \n", cont);
    //             printf("     ou QUALQUER TECLA para voltar ao MENU INICIAL ");

    //             //printf("Dados estão corretos ? ( S / N ) : ");

    //             /*char opc;
    //             opc = getchar();
    //             fflush(stdin);
    //             switch(opc)
    //             {
    //                 case 10:
    //                     break;

    //                 default:

    //                     printf("Opcão invalida!");
    //                     return;
    //             }*/               
    //         }
    //     }
    // }
    // while (cpfValido != 1);
//}

void main()
{
    loginUsuario();
}