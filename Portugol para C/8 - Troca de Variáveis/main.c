#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

Nome do programa: Troca de Vari�veis.
Objetivo: Solicitar ao usu�rio um n�mero aleat�rio e inverter estes n�meros usando uma terceira  vari�vel,que no caso � chamada de aux.
Data Cria��o: 02/02/2022.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("title Troca de Vari�veis");
    system("color 03");

    int a, b, aux;
    printf("Por favor, informe um n�mero para chamarmos de vari�vel a >>> ");
    scanf(" %i", &a);
    printf("\nAgora informe um outro n�mero para chamarmos de vari�vel b >>> ");
    scanf(" %i", &b);

    system("cls");

    printf("Vari�veis antes da troca >>> \n");
    printf("\nVari�vel a = %i\n", a);
    printf("Vari�vel b = %i\n", b);

    aux = a;
    a = b;
    b = aux;

    printf( "\n");
    printf("Vari�veis ap�s a troca >>> \n");
    printf("\nVari�vel a = %i\n", a);
    printf("Vari�vel b = %i\n\n", b);

    return 0;
}
