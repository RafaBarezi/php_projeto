#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Modificadores de tipo");
    system("color 03");
    printf("Aula - Modificadores de tipo\n\n");

    /*

    Os cinco tipos de dados temos:

    1 - char
    2 - int
    3 - float
    4 - double
    5 - Void  (vazio)

    Quando precisamos trabalhar com dados muito grandes precisamos lidar com modificadores de tipo. Temos quatro instru��es para usar na declara��o das vari�veis:

    1 - signed
    2 - unsigned
    3 - long
    4 - short

    >>> signed quer dizer que estamos declarando uma vari�vel e queremos usar n�s positivos ou negativos;

    >>> unsigned quer dizer que estamos declarando uma vari�vel e queremos usar apenas n�s positivos; Como n�o usamos negativos nela a capacidade dobra;

    >>> long quer dizer que estamos declarando uma vari�vel e queremos aumentar a capacidade de armazenamento da vari�vel - precisamos expandir a capacidade dela;

    >>> sort quer dizer que estamos declarando uma vari�vel e queremos diminuir a capacidade de armazenamento da vari�vel - precisamos diminuir a capacidade dela;

    Todos esses operadores podem ser aplicadas as vari�veis tipo int, mas nem todos podem ser aplicados �s double e float (N�o podemos dar instru��o short para uma vari�vel double);

    Usamos a short quando n�o podemos usar muita mem�ria � um jeito de dizer ao compilador pra n�o alocar muita mem�ria. A long � ao contr�rio.

    Observar que cada compilador assume um tamanho pois n�o existem padroniza��es na aloca��o de mem�ria.

    */

    int i = 10;
    unsigned short int u;
    printf("Tamanho da variavel i >>> %i\n", sizeof(i));
    printf("Tamanho da variavel u >>> %i\n", sizeof(u));

    // A fun��o sizeof mostra o tamanho alocado da vari�vel.
    // A vari�vel i ocupa 4 bytes na mem�ria, a vari�vel u ocupa 2 bytes de mem�ria pois est� como short.

    return 0;
}
