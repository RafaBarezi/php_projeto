#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*

Nome do programa: Médias.
Objetivo: Informar a média dos números aleatórios oferecidos pelo usuàrio.
Data Criação: 07/02/2022.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("title Médias");
    system("color 03");

    float M1, M2, M3, media;

    printf("Por favor, informe um número:   ");
    scanf("%f",&M1);
    printf("\nDigite mais um número:   ");
    scanf("%f",&M2);
    printf("\nInforme um último número:   ");
    scanf("%f",&M3);
    media = (M1+M2+M3)/3;

    system("cls");

    printf("Você digitou os números: %.0f, %.0f e %.0f\n\n",M1,M2,M3);
    printf("\nA média dos números digitados é: %.0f \n\n\n", media );

    /*

    if( M1 < media)
    {
        printf("O 1° valor digitado é menor ou igual à média\n\n");
    }
    if( M2 < media)
    {
        printf("O 2° valor digitado é menor ou igual à média\n\n");
    }
    if( M3 < media)
    {
        printf("O 3° valor digitado é menor ou igual à média\n\n");
    }
    if( M1 > media)
    {
        printf("O 1° valor digitado é maior ou igual à média\n\n");
    }
    if( M2 > media)
    {
        printf("O 2° valor digitado é maior ou igual à média\n\n");
    }
    if( M3 > media)
    {
        printf("O 3° valor digitado é maior ou igual à média\n\n");
    }

    */

    // Vamos testar com operadores ternários:

    M1 = ( M1 < media) ? printf("O 1° valor digitado é menor ou igual à média\n\n"): printf("O 1° valor digitado é maior ou igual à média\n\n");

    M2 = ( M2 < media) ? printf("O 2° valor digitado é menor ou igual à média\n\n"): printf("O 2° valor digitado é maior ou igual à média\n\n");

    M3 = ( M3 < media) ? printf("O 3° valor digitado é menor ou igual à média\n\n"): printf("O 3° valor digitado é maior ou igual à média\n\n");

    return 0;
}
