#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Resto da divis�o");
    system("color 03");
    printf("Aula - Resto da divis�o\n\n");

    // Para resto da divis�o o C nos oferece um operador espec�fico. Se usa o s�mbolo %.

    printf( "%i\n", 3 % 2);
    printf( "%i\n", 6 % 2);
    printf( "%i\n", 11 % 3);

    return 0;
}
