#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

Nome do programa: Altura M�dia.
Objetivo: Solicitar que o usu�rio digite a altura de tres pessoas e exibir a m�dia destas medidas informadas.
Data Cria��o: 02/02/2022.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("title Maioridade Penal");
    system("color 03");

    float a1, a2, a3, media;
    // a significa altura correspondente a cada uma das pessoas, a1, a2, a3

    printf("O sistema ir� informar a m�dia da altura de tr�s pessoas\n\n");
    printf("Por favor , digite a altura da primeira pessoa >>> ");
    scanf("%f",&a1);
    printf("\nAgora informe a altura da segunda pessoa >>> ");
    scanf("%f",&a2);
    printf("\nFavor digitar a altura da terceira >>> ");
    scanf("%f",&a3);
    media = (a1 + a2 + a3)/3;
    printf("\n\n>>> A m�dia das alturas informadas � %.2f m.\n\n", media);

    return 0;
}
