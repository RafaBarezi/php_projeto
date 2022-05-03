#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

Nome do programa: Idade.
Objetivo: Solicitar que o usuário digite a propria idade. O sistema irá exibir na tela se ele é maior ou menor.
Data Criação: 08/02/2022.

*/

void main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("title Idade");
    system("color 03");

    int idade;
    printf("Por favor, informe a sua idade >>> ");
    scanf("%i", &idade);

    system("cls");

    printf("Você tem %i anos", idade);

    if(idade<18)
    {
        printf("\n\nVocê é menor de idade!\n");
    }
    else
    {
        printf("\n\nVocê é maior de idade!\n");
    }

    return 0;
}
