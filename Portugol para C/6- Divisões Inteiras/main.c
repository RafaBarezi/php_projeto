#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

Nome do programa: Divis�es Inteiras.
Objetivo: Solicitar ao usu�rio um n�mero inteiro aleat�rio e mostrar quanto � a metade deste valor, assim como seu resto, se existir.
Data Cria��o: 31/01/2022.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("title Divis�es Inteiras");
    system("color 03");

    int x, resto, div;
    printf("Por favor, digite um n�mero >>> ");
    scanf("%i", &x);

    div = (x / 2);
    resto = x % 2 ;
    printf("\n\nA metade do valor digitado � >>> %i\n", div);
    printf("\n\nO resto desta divis�o � >>> %i\n\n", resto);

    return 0;
}
