#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

Nome do programa: Soma Um X.
Objetivo: Solicitar que o usu�rio digite 1 n�mero e informar a soma dos n�meros anteriores at� chegar ao n�mero desejado.
Data Cria��o: 21/03/22.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("title Soma Um X");
    system("color 03");

    int soma, numero, contador;
    soma = 0;


    printf("Por favor, digite o n�mero at� o qual deseja somar >>> ");
    scanf("%i", &numero);

    system("cls");

    for(contador = 0; contador <= numero; contador++)
    {
        soma = soma + contador;
    }
    printf(">>> A soma de 1 at� %i � %i.\n", numero, soma);


    return 0;
}
