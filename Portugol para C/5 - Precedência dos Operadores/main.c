#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

Nome do programa: Precedência dos Operadores.
Objetivo: Demonstrar resultados de acordo com a prioridade das operações. Resumo da precedência nos cálculos.
Data Criação: 31/01/2022.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("title Precedência dos Operadores");
    system("color 03");

    printf("Tabela de precedência dos operadores:\n\n\n");
    printf("\t\t() [] . -> Expressão++ Expressão--\n");
    printf("\t\t* & + - ! ~ ++Expressão --Expressão (Conversão) sizeof\n");
    printf("\t\t* / porcentagem\n");
    printf("\t\t\+ -\n");
    printf("\t\t>> <<\n");
    printf("\t\t< > <= >=\n");
    printf("\t\t== !=\n");
    printf("\t\t& ^|\n");
    printf("\t\t&&\n");
    printf("\t\t||\n");
    printf("\t\t?:\n");
    printf("\t\t= += == *= /+ porcentagem = >>= <<= &= ^= |=,\n\n");
    printf("\n* Nas primeiras linhas, são exibidos os itens com maior prioridade.");

    printf("\n\n\nConfira alguns exemplos a seguir:\n\n\n");
    int x;
    x = 5 + 4 * 2;
    printf("Operação: 5+4*2 = %i\n", x);
    int y;
    y = (5 + 4) * 2;
    printf("Operação: (5+4)*2 = %i\n", y);
    float r;
    r = 4.5 + 2 / 3.5 - 4;
    printf("Operação: 4.5+2/3.5-4 = %.2f\n", r);
    float z;
    z = (4.5 + 2)/(3 * 4);
    printf("Operação: (4.5+2)/(3*4) = %.2f\n\n", z);

    return 0;
}
