#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Caracter�sticas das vari�veis");
    system("color 03");
    printf("Aula - Caracter�sticas das vari�veis\n\n");

    /*

    Toda vari�vel possui um local na mem�ria reservado para armazenar um valor. (Como um produto, hora atual, usu�rio valor, por exemplo).

    Quanto �s vari�veis:

    1 - Todas possuem um nome;
    2 - Todas possuem um tipo;
    3 - Todas possuem um tamanho;
    4 - Todas possuem um valor - (Mesmo quando nulo existe valor, que seria 0).

    * ATEN��O: S� devemos colocar na mem�ria os dados necess�rios (apenas os valores que vamos utilizar para evitar sobrecarregar).

    >>> O armazenamento na mem�ria � exclu�do rapidamente / � tempor�rio. Quando o pc � desligado ou o programa � fechado, o valor � perdido;
    >>> Toda vez que voc� atribui um valor a uma vari�vel, o valor n�o estar� mais na mem�ria e se algum problema ocorrer, os dados ser�o perdidos, e n�o tem recupera��o;
    >>> Toda vez que atribu�mos um novo valor a uma vari�vel, o valor antigo � perdido.

    */
}
