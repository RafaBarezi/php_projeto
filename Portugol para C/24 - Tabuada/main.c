#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

Nome do programa: Tabuada.
Objetivo: pedir um número ao usuário e imprimir a tabuada dele em tela.
Data Criação: 14/03/2022.

*/

int main()
{
    system("title Tabuada");
    system("color 03");
    setlocale(LC_ALL, "Portuguese_Brazil");

    int num, result1, result2, result3, result4, cont;
    printf("Por favor, informe um número para ver a sua tabuada >>> ");
    scanf("%i", &num);

    system("cls");

    printf(">>> Confira a tabuada do %i:\n\n", num);

    for(cont = 1;cont <=10; cont++)
    {
        result1 = num * cont;
        printf("%i * %i = %i\n", num, cont, result1);
    }
    printf("\n");

    return 0;
}
