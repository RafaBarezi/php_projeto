#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

Nome do programa: Tipo Tri�ngulo.
Objetivo: Solicitar que o usu�rio digite as medidas de cada um dos lados do um tri�ngulo. O sistema ir� mostrar se se trata de um is�celes, equil�tero ou escaleno.

Data Cria��o: 09/03/2022.

*/

int main()
{
    system("title Tipo Tri�ngulo");
    system("color 03");
    setlocale(LC_ALL, "Portuguese_Brazil");

    int lado1, lado2, lado3;
    printf("informe a medida do primeiro lado do tri�ngulo >>> ");
    scanf("%i", &lado1);
    printf("\ninforme a medida do segundo lado do tri�ngulo >>> ");
    scanf("%i", &lado2);
    printf("\ninforme a medida do terceiro lado do tri�ngulo >>> ");
    scanf("%i", &lado3);

    if((lado1==lado2)&&(lado1==lado3)&&(lado2==lado3))
    {
        printf("O tri�ngulo � equil�tero.\n");
    }
    else
    {
        if((lado1!=lado2)&&(lado2!=lado3)&&(lado1!=lado3))
        {
            printf("\nO tri�ngulo � escaleno.\n");
        }
        else
        {
            printf("\nO tri�ngulo � is�celes.\n");
        }
    }
    return 0;
}
