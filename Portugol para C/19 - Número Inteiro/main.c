#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

Nome do programa: N�mero Inteiro.
Objetivo: Solicitar que o usu�rio digite um n�mero inteiro. O sistema ir� mostrar se se trata de um n�mero negativo, 0, ou positivo.
Data Cria��o: 09/03/2022.

*/

int main()
{
    system("title N�mero Inteiro");
    system("color 03");
    setlocale(LC_ALL, "Portuguese_Brazil");

    int num;
    printf("Por favor, digite um n�mero inteiro >>> ");
    scanf("%i", &num);

    if(num>0)
    {
        printf("\nO n�mero digitado � positivo.\n\n");
    }
    else
    {
        if(num<0)
        {
            printf("\nO n�mero digiitado � negativo.\n\n");
        }
        else
        {
            printf("\nO n�mero digiitado � 0.\n\n");
        }
    }
    return 0;
}
