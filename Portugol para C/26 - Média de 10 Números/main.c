#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

Nome do programa: M�dia de 10 n�meros.
Objetivo: Solicitar que o usu�rio digite 10 n�meros aleat�rios usando um looping para colher os dados e informar a m�dia entre eles.
Data Cria��o: 21/03/2022.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("title M�dia de 10 n�meros");
    system("color 03");

    int contador = 1;
    float numero, media, soma = 0;

    while(contador <= 10)
    {
        system("cls");
        printf("Digite o %i� n�mero >>> ", contador);
        scanf("%f", &numero);

        soma = soma + numero;
        contador = contador + 1;
    }

    media = soma /10;
    system("cls");
    printf("A m�dia dos n�meros digitados � >>> %.2f \n", media);

    return 0;
}
