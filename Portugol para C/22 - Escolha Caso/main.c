#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

Nome do programa: Escolha Caso.
Objetivo: Solicitar que o usu�rio digite a op�a� escolhida. Este � o primeiro programa com o comando case no lugar de if else.
Data Cria��o: 11/03/2022.

*/

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Escolha Caso");
    system("color 03");

    int opcao;
    printf("Escolha (1) para elogio;\n");
    printf("Escolha (2) para ofensa;\n");
    printf("Escolha (3) para sair.\n\n");
    printf("Por favor, digite uma op��o >>> ");
    scanf("%i", &opcao);

    switch(opcao)
    {
    case 1:
        printf("\nvoce � lindo(a)!\n");
        break;
    case 2:
        printf("\nvoce � um monstro\n");
        break;
    case 3:
        printf("\nTchau!\n");
        break;
    default:
        printf("\nOp��o inv�lida!\n");
    }

    return 0;
}
