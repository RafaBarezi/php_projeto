#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Associatividade de operadores");
    system("color 03");
    printf("Aula - Associatividade de operadores\n\n");

    /*

    Associatividade de operadores � a propriedade que determina como os operadores das mesma precedencias s�o agrupados na inexistencia de parenteses. � a dire��o que os 3 trabalha com os operadores:

    int i = 10 + 10;

    Associa��o da esquerda para a direita:

    1�    ()
    2�    * / %
    3�    + -
    4�    < <= > >=
    5�    == !=

    Associa��o da direita para a esquerda:

    1�    -- ++
    2�    = += -+ *= /= %=
    3�    + -
    4�    < <= > >=
    5�    == !=

    */

    int a, b, c;

    a = (b = (c = 1));
    printf("%i\n", a);
    printf("%i\n", b);
    printf("%i\n", c);

    return 0;
}
