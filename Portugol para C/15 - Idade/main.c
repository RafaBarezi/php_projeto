#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

Nome do programa: Idade.
Objetivo: Solicitar que o usu�rio digite a propria idade. O sistema ir� exibir na tela se ele � maior ou menor.
Data Cria��o: 08/02/2022.

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

    printf("Voc� tem %i anos", idade);

    if(idade<18)
    {
        printf("\n\nVoc� � menor de idade!\n");
    }
    else
    {
        printf("\n\nVoc� � maior de idade!\n");
    }

    return 0;
}
