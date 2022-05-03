#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

/*

Nome do programa: Fatorial.
Objetivo: Solicitar que o usuário digite 1 número e informar seu fatorial.
* Fatorial é o produto de um número multiplicado pelos antecessores ex !3 = 1.2.3 => 6
Data Criação: 21/03/2022.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("title Fatorial");
    system("color 03");

    int numero, atual, fatorial;
    atual =1, fatorial = 1;

    printf("Por favor, digite um número >>> ");
    scanf("%i", &numero);


    while(atual <= numero)
    {
        fatorial = fatorial * atual;
        atual = atual + 1;
    }
    printf("\n>>> O fatorial de %i é %i.\n", numero, fatorial);


    return 0;
}
