#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Escape sequence");
    system("color 03");
    printf("Escape sequence\n\n");

    /*

    As sequencias de escape s�o:

    \n  quebra uma linha;
    \t  d� um tab na impress�o;
    \\  serve para imprimir uma barra invertida;
    \"  imprime uma aspa dupla;
    \'  serve para imprimir uma aspa simples;
    \0  finaliza o nosso texto : � aqui que diz que print deve parar de imprimir.

    */

    return 0;
}
