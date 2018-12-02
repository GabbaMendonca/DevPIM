#include <stdio.h>
#include <stdlib.h>


void imprimeMatrizVetor();

void imprimeMatrizVetor(int **pm, int linhas, int colunas)
{

    /*
        Imprime o conteudo da matriz
    */

    for (int i = 0; i < linhas; i++)
    {
        printf("\n");
        for (int j = 0; j < colunas; j++)
        {
            printf("| %d |", pm[i][j]); 
        }
    }
}


void confirmarLugares(int **matrizAssentos, int linhas, int colunas)
{
    int i, j;
    
    int posicaoFila, posicaoColuna;
    int gravou, novamente;

    do
    {

        printf("Escolha posicao \n");
        printf("Fila: \n");
        scanf("%d%*c", &posicaoFila);
        fflush(stdin);

        posicaoFila = posicaoFila - 1;

        printf("Coluna: \n");
        scanf("%d%*c", &posicaoColuna);
        fflush(stdin);

        posicaoColuna = posicaoColuna - 1;

        for (i = 0; i < linhas; i++)
        {
            printf("\n");
            for (j = 0; j < colunas; j++)
            {
                if ((posicaoFila == i && posicaoColuna == j))
                {

                    if (matrizAssentos[i][j] == 0)
                    {
                        printf("X");
                        printf("\t");
                        gravou = 1;
                    }
                    else
                    {
                        printf("X");
                        printf("\t");
                        gravou = 0;
                    }
                }
                else
                {
                    printf("%d \t", matrizAssentos[i][j]);
                }
            }
        }
        if (gravou == 1)
        {
            printf(" \n \n Assento esta ocupado  \n");
        }

        printf("\n Os dados estao corretos ? ( S / N ) : ");

        char opc;
        opc = getchar();

        switch (opc)
        {
        case 's':
        case 'S':
            matrizAssentos[posicaoFila][posicaoColuna] = 0;
            novamente = 1;
            break;

        case 'n':
        case 'N':
            novamente = 0;
            break;

        default:
            printf("Opcao invalida \n");
            novamente = 0;
            break;
        }

    } while (novamente != 1);

    printf("\n");
}

void selecionarLugar()
{
    int matrizAssentos[3][4] = {1, 2, 3, 4, 
                                5, 6, 7, 8, 
                                9,10,11,12};

    int **pm;
    int linhas, colunas;

    linhas = 3;
    colunas = 4;

    /*
        Aloca o vetor principal - linhas    
    */
    pm = (int **) malloc(linhas * sizeof(sizeof(int *)));

    /*
        Aloca cada linha do vetor - colunas
    */

    for (int n = 0; n < 3; n++)
    {
        pm[n] = (int *)malloc(3 * sizeof(int));
    }

    /*
        Preenche a matriz
    */

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            pm[i][j] = matrizAssentos[i][j];
        }
    }
    
    imprimeMatrizVetor(pm, linhas, colunas);

    confirmarLugares(pm, linhas, colunas);

}