#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/*

Nome do programa: M�ltiplo de Cinco.
Objetivo: Solicitar que o usu�rio digite um n�mero e verificar se ele � m�ltiplo de 5 atrav�s da verifica��o do seu resto.
Data Cria��o: 08/02/2022.

*/

void main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("title M�ltiplo de Cinco");
    system("color 03");

    int numero;
    printf("Digite um n�mero >>> ");
    scanf("%i", &numero);

    system("cls");

    // Para verificar se um numero � multiplo de outro se usa o operador %, se o resto for 0 significa que � multiplo.

    if(numero %5 == 0)
    {
        printf(">>> O n�mero %i � m�ltiplo de 5!\n\n",numero);
    }
    else
    {
        printf(">>> O n�mero %i n�o � m�ltiplo de 5!\n\n",numero);
    }

    return 0;
}
