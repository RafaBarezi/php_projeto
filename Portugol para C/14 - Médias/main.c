#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*

Nome do programa: M�dias.
Objetivo: Informar a m�dia dos n�meros aleat�rios oferecidos pelo usu�rio.
Data Cria��o: 07/02/2022.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("title M�dias");
    system("color 03");

    float M1, M2, M3, media;

    printf("Por favor, informe um n�mero:   ");
    scanf("%f",&M1);
    printf("\nDigite mais um n�mero:   ");
    scanf("%f",&M2);
    printf("\nInforme um �ltimo n�mero:   ");
    scanf("%f",&M3);
    media = (M1+M2+M3)/3;

    system("cls");

    printf("Voc� digitou os n�meros: %.0f, %.0f e %.0f\n\n",M1,M2,M3);
    printf("\nA m�dia dos n�meros digitados �: %.0f \n\n\n", media );

    /*

    if( M1 < media)
    {
        printf("O 1� valor digitado � menor ou igual � m�dia\n\n");
    }
    if( M2 < media)
    {
        printf("O 2� valor digitado � menor ou igual � m�dia\n\n");
    }
    if( M3 < media)
    {
        printf("O 3� valor digitado � menor ou igual � m�dia\n\n");
    }
    if( M1 > media)
    {
        printf("O 1� valor digitado � maior ou igual � m�dia\n\n");
    }
    if( M2 > media)
    {
        printf("O 2� valor digitado � maior ou igual � m�dia\n\n");
    }
    if( M3 > media)
    {
        printf("O 3� valor digitado � maior ou igual � m�dia\n\n");
    }

    */

    // Vamos testar com operadores tern�rios:

    M1 = ( M1 < media) ? printf("O 1� valor digitado � menor ou igual � m�dia\n\n"): printf("O 1� valor digitado � maior ou igual � m�dia\n\n");

    M2 = ( M2 < media) ? printf("O 2� valor digitado � menor ou igual � m�dia\n\n"): printf("O 2� valor digitado � maior ou igual � m�dia\n\n");

    M3 = ( M3 < media) ? printf("O 3� valor digitado � menor ou igual � m�dia\n\n"): printf("O 3� valor digitado � maior ou igual � m�dia\n\n");

    return 0;
}
