#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Preced�ncia de operadores");
    system("color 03");
    printf("Aula - Preced�ncia de operadores\n\n");

    /*

    Se trata da ordem em que as espressoes matem�ticas ser�o resolvidas:

    1�    fun��es
    2�    ()
    3�    - + -- !
    4�    * / %
    5�    + -
    6�    < <= > >=
    7�    == !=
    8�    ?: (tern�ria)

    */

    int a, b, c;
    a=15;
    b=10;
    c=5;
    float x=0;

    x=a*b/c;
    printf("Se:\n\na=15\nb=10\nc=5\n");
    printf("\nEnt�o:\n\na * b / c = %0.f", x);

    x=a/b*c;
    printf("\na / b * c = %0.f", x);

    x=a*(b+c);
    printf("\na * (b + c) = %0.f", x);

    x=(a*b)+c;
    printf("\n(a * b) + c = %0.f\n", x);

    return 0;
}
