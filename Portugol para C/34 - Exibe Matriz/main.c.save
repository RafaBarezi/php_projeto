#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

Nome do programa: Exibe Matriz.
Objetivo: Cria uma matriz e preenche com números aleatórios
Data Criação: 05/04/2022.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("title Exibe Matriz");
    system("color 03");

    int tamanho = 10;
    int matrix[tamanho][tamanho];
    int linha, coluna;

    srand(time(NULL));

    for(linha = 0 ; linha < tamanho ; linha ++)
    {
        for(coluna = 0 ; coluna < tamanho; coluna ++)
        {
            matrix[linha][coluna] = rand()%10;

            printf("[%i]",matrix[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}
