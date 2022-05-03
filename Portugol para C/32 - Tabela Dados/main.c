#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

Nome do programa: Tabela Dados.
Objetivo: Tabela de dados utilizando vetores
Data Cria��o: 02/04/2022.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("title Tabela Dados");
    system("color 03");

    char nome [] ={'1', '2', '3', '4', '5'};
    float altura[] = { 1.71, 1.78, 1.75, 1.87, 1.71 };
    int idade [] = { 18, 23, 34, 33, 19 };



    printf("______________________________________\n");
    printf("                Tabela                \n");
    printf("______________________________________\n\n");
    printf("  Nome          Altura          Idade\n\n");



    for(int posicao = 0; posicao < 5; posicao++)
    {
        printf("Aluno %c          %.2f            %i\n", nome [posicao], altura[posicao], idade[posicao]);
    }
    return 0;
}
