#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Operadores de incremento e decremento");
    system("color 03");
    printf("Aula - Operadores de incremento e decremento\n\n");

    /*

    soma +=
    subtra��o -=
    multiplica��o *=
    divis�o /=
    resto %=

    >>> Incremento e Decremento s�o muito importantes nos loopings.
    >>> Servem como inc e dec de apenas uma unidade.

    incremento
    --------------->    Pr� ou p�s
    Decremento

    Pr� -> O valor ser� incrementado/decrementado na instru��o em que a vari�vel estiver contida.

    P�s -> O valor ser� incrementado/decrementado na pr�xima instru��o.

    */

    int i = 1;
    printf("%i\n", i);
    printf("%i\n", ++i);
    i++;
    printf("%i\n\n\n", i);

    int i2 =5;
    printf("%i\n", i2);
    printf("%i\n", --i2);
    i2--;
    printf("%i\n", i2);

    return 0;
}
