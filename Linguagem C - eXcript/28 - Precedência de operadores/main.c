#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Precedência de operadores");
    system("color 03");
    printf("Aula - Precedência de operadores\n\n");

    /*

    Se trata da ordem em que as espressoes matemáticas serão resolvidas:

    1°    funções
    2°    ()
    3°    - + -- !
    4°    * / %
    5°    + -
    6°    < <= > >=
    7°    == !=
    8°    ?: (ternária)

    */

    int a, b, c;
    a=15;
    b=10;
    c=5;
    float x=0;

    x=a*b/c;
    printf("Se:\n\na=15\nb=10\nc=5\n");
    printf("\nEntão:\n\na * b / c = %0.f", x);

    x=a/b*c;
    printf("\na / b * c = %0.f", x);

    x=a*(b+c);
    printf("\na * (b + c) = %0.f", x);

    x=(a*b)+c;
    printf("\n(a * b) + c = %0.f\n", x);

    return 0;
}
