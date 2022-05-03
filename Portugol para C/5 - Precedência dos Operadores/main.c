#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

Nome do programa: Preced�ncia dos Operadores.
Objetivo: Demonstrar resultados de acordo com a prioridade das opera��es. Resumo da preced�ncia nos c�lculos.
Data Cria��o: 31/01/2022.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("title Preced�ncia dos Operadores");
    system("color 03");

    printf("Tabela de preced�ncia dos operadores:\n\n\n");
    printf("\t\t() [] . -> Express�o++ Express�o--\n");
    printf("\t\t* & + - ! ~ ++Express�o --Express�o (Convers�o) sizeof\n");
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
    printf("\n* Nas primeiras linhas, s�o exibidos os itens com maior prioridade.");

    printf("\n\n\nConfira alguns exemplos a seguir:\n\n\n");
    int x;
    x = 5 + 4 * 2;
    printf("Opera��o: 5+4*2 = %i\n", x);
    int y;
    y = (5 + 4) * 2;
    printf("Opera��o: (5+4)*2 = %i\n", y);
    float r;
    r = 4.5 + 2 / 3.5 - 4;
    printf("Opera��o: 4.5+2/3.5-4 = %.2f\n", r);
    float z;
    z = (4.5 + 2)/(3 * 4);
    printf("Opera��o: (4.5+2)/(3*4) = %.2f\n\n", z);

    return 0;
}
