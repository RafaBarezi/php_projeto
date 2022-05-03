#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/*

Nome do programa: Múltiplo de Cinco.
Objetivo: Solicitar que o usuário digite um número e verificar se ele é múltiplo de 5 através da verificação do seu resto.
Data Criação: 08/02/2022.

*/

void main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("title Múltiplo de Cinco");
    system("color 03");

    int numero;
    printf("Digite um número >>> ");
    scanf("%i", &numero);

    system("cls");

    // Para verificar se um numero é multiplo de outro se usa o operador %, se o resto for 0 significa que é multiplo.

    if(numero %5 == 0)
    {
        printf(">>> O número %i é múltiplo de 5!\n\n",numero);
    }
    else
    {
        printf(">>> O número %i não é múltiplo de 5!\n\n",numero);
    }

    return 0;
}
