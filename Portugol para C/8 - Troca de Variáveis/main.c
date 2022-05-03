#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

Nome do programa: Troca de Variáveis.
Objetivo: Solicitar ao usuário um número aleatório e inverter estes números usando uma terceira  variável,que no caso é chamada de aux.
Data Criação: 02/02/2022.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("title Troca de Variáveis");
    system("color 03");

    int a, b, aux;
    printf("Por favor, informe um número para chamarmos de variável a >>> ");
    scanf(" %i", &a);
    printf("\nAgora informe um outro número para chamarmos de variável b >>> ");
    scanf(" %i", &b);

    system("cls");

    printf("Variáveis antes da troca >>> \n");
    printf("\nVariável a = %i\n", a);
    printf("Variável b = %i\n", b);

    aux = a;
    a = b;
    b = aux;

    printf( "\n");
    printf("Variáveis após a troca >>> \n");
    printf("\nVariável a = %i\n", a);
    printf("Variável b = %i\n\n", b);

    return 0;
}
