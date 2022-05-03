#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

Nome do programa: Tipo Triângulo.
Objetivo: Solicitar que o usuário digite as medidas de cada um dos lados do um triângulo. O sistema irá mostrar se se trata de um isóceles, equilátero ou escaleno.

Data Criação: 09/03/2022.

*/

int main()
{
    system("title Tipo Triângulo");
    system("color 03");
    setlocale(LC_ALL, "Portuguese_Brazil");

    int lado1, lado2, lado3;
    printf("informe a medida do primeiro lado do triângulo >>> ");
    scanf("%i", &lado1);
    printf("\ninforme a medida do segundo lado do triângulo >>> ");
    scanf("%i", &lado2);
    printf("\ninforme a medida do terceiro lado do triângulo >>> ");
    scanf("%i", &lado3);

    if((lado1==lado2)&&(lado1==lado3)&&(lado2==lado3))
    {
        printf("O triângulo é equilátero.\n");
    }
    else
    {
        if((lado1!=lado2)&&(lado2!=lado3)&&(lado1!=lado3))
        {
            printf("\nO triângulo é escaleno.\n");
        }
        else
        {
            printf("\nO triângulo é isóceles.\n");
        }
    }
    return 0;
}
