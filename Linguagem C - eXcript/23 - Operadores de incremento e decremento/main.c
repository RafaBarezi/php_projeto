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
    subtração -=
    multiplicação *=
    divisão /=
    resto %=

    >>> Incremento e Decremento são muito importantes nos loopings.
    >>> Servem como inc e dec de apenas uma unidade.

    incremento
    --------------->    Pré ou pós
    Decremento

    Pré -> O valor será incrementado/decrementado na instrução em que a variável estiver contida.

    Pós -> O valor será incrementado/decrementado na próxima instrução.

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
