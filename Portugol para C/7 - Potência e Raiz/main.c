#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h> // biblioteca de fun��es matem�ticas comuns em computa��o.

/*

Nome do programa: Pot�ncia e Raiz.
Objetivo: Solicitar ao usu�rio um n�mero aleat�rio e mostrar quanto  � a raiz quadrada e o quadrado deste.
Data Cria��o: 02/02/2022.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("title Pot�ncia e Raiz");
    system("color 03");

    float x, potencia1,potencia2, raiz;
    printf("Por favor, digite um valor >>> ");
    scanf(" %f", &x);


    // f�rmula para potencia (pow)
    potencia1 = pow(x,2);
    potencia2 = pow(x,3);
    raiz = sqrt(x);
    // f�rmula para raiz quadrada (sqrt)
    system("cls");

    printf("O valor digitado pelo usu�rio foi >>> %.0f",x);
    printf( "\n\n%.0f ao quadrado � >>> %.0f\n", x, potencia1 );
    printf( "\n%.0f ao cubo � >>> %.0f\n", x, potencia2 );
    printf( "\nA raiz qudrada de %.0f � >>> %.2f\n", x, raiz );

    return 0;
}
