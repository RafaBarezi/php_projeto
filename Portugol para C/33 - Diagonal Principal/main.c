#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

Nome do programa: Diagonal Principal.
Objetivo: Cria uma matriz e preenche a diagonal principal
Data Criação: 02/04/2022.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("title Diagonal Principal");
    system("color 03");

    int tamanho = 25;
    int linha, coluna;
    char matrix[tamanho][tamanho];

    /*

    As matrizes nada mais são do que vetores de duas dimensões (bidimensionais). Em outras  palavras, a matriz é um vetor aonde cada uma de suas posições (colunas) armazena um outro vetor (linhas).

   Exemplo de vetor:

   [1, 2, 3]

   Exemplo de matriz:

   [1][2][3]
   [4][5][6]
   [7][8][9]

 	Na matemática, a diagonal principal de uma matriz é o conjunto dos elementos em que
 	a linha e a coluna do elemento são iguais. Assim, a diagonal principal parte do canto
 	superior esquerdo (posição 0,0) e segue para a direita e para abaixo até encontrar o
 	lado direito ou o lado inferior da matriz. No exemplo abaixo, a diagonal principal é
 	representada pelo caracter '*':

    */


    // preenchendo a matriz

    for(linha = 0 ; linha < tamanho ; linha ++)
    {
        for(coluna = 0 ; coluna < tamanho; coluna ++)
        {
            if(linha == coluna)
            {
                matrix[linha][coluna] = '*';
            }
            else
            {
                matrix[linha][coluna] = ' ';
            }
        }
    }

    //imprimindo a matriz

    for(linha = 0 ; linha < tamanho ; linha ++)
    {
        for(coluna = 0 ; coluna < tamanho; coluna ++)
        {
            printf("[%c]", matrix[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}
