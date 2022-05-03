#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

Nome do programa: Soma Um X.
Objetivo: Solicitar que o usuário digite 1 número e informar a soma dos números anteriores até chegar ao número desejado.
Data Criação: 21/03/22.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("title Soma Um X");
    system("color 03");

    int soma, numero, contador;
    soma = 0;


    printf("Por favor, digite o número até o qual deseja somar >>> ");
    scanf("%i", &numero);

    system("cls");

    for(contador = 0; contador <= numero; contador++)
    {
        soma = soma + contador;
    }
    printf(">>> A soma de 1 até %i é %i.\n", numero, soma);


    return 0;
}
