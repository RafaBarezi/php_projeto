#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h> // biblioteca de funções matemáticas comuns em computação.

/*

Nome do programa: Potência e Raiz.
Objetivo: Solicitar ao usuário um número aleatório e mostrar quanto  é a raiz quadrada e o quadrado deste.
Data Criação: 02/02/2022.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("title Potência e Raiz");
    system("color 03");

    float x, potencia1,potencia2, raiz;
    printf("Por favor, digite um valor >>> ");
    scanf(" %f", &x);


    // fórmula para potencia (pow)
    potencia1 = pow(x,2);
    potencia2 = pow(x,3);
    raiz = sqrt(x);
    // fórmula para raiz quadrada (sqrt)
    system("cls");

    printf("O valor digitado pelo usuário foi >>> %.0f",x);
    printf( "\n\n%.0f ao quadrado é >>> %.0f\n", x, potencia1 );
    printf( "\n%.0f ao cubo é >>> %.0f\n", x, potencia2 );
    printf( "\nA raiz qudrada de %.0f é >>> %.2f\n", x, raiz );

    return 0;
}
