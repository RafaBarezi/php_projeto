#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Operadores de atribuição");
    system("color 03");
    printf("Aula - Operadores de atribuição\n\n");

    int x = 0;

    // Operadores de atribuição são úteis pra abreviar expressões como:  x = x + 1; mas temos formas melhores de trabalhar. O compilador executa mais rápido e é mais fácil de escrever. Podemos dizer que:  x += 1;

    while( x < 11 )
    {
        printf("msg\n");
        x += 1;
    }

    /*

    Temos 5 operadores de atribuição:

    +=   soma
    -+    subtração
    *=    multiplicação
    /=    divisão
    %=  resto da divisão

    */

    int i = 50;
    printf( "\nsoma >>> %i\n", i += 100);
    printf( "subtração >>> %i \n", i -= 50);
    printf( "multiplicação >>> %i \n", i *= 3);
    printf( "divisão >>> %i \n", i /= 3);
    printf( "resto divisão >>> %i \n", i %= 3);

    // observe que o 50 inicial não continua. O sistema pega sempre o resultado da equação para continuar a próxima conta. Portanto 50+100 é igual 150. 150-50 igual a 100 ...

    return 0;
}
