#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

Nome do programa: Divisões Inteiras.
Objetivo: Solicitar ao usuário um número inteiro aleatório e mostrar quanto é a metade deste valor, assim como seu resto, se existir.
Data Criação: 31/01/2022.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("title Divisões Inteiras");
    system("color 03");

    int x, resto, div;
    printf("Por favor, digite um número >>> ");
    scanf("%i", &x);

    div = (x / 2);
    resto = x % 2 ;
    printf("\n\nA metade do valor digitado é >>> %i\n", div);
    printf("\n\nO resto desta divisão é >>> %i\n\n", resto);

    return 0;
}
