#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Instru��o if");
    system("color 03");
    printf("Aula - Instru��o if\n\n");

    char c;
    printf("Por favor, digite um caractere em letra mai�scula:\n\n>>> ");
    scanf( "%c", &c );
    printf("\nVoc� digitou:\n\n>>> %c\n", c);

    if( c>= 'a' )  //Char se usa com aspas �nicas
    {
        printf("\nVoc� digitou em letra min�scula. Deveria ter digitado a letra mai�scula: <%c> \n", toupper(c));
    }

    /*

    >>> O que buscamos responder com este comando � se o usu�rio inseriu um caractere maior ou igual ao caractere 'a'. Se for maior ou igual a 'a' usamos a fun��o toupper, que serve para colocar o caractere em letra mai�scula.(Se pronuncia tch�oper).

    >>> Para manipular caracteres no C precisamos da biblioteca: <ctype.h>.

    >>> Essa biblioteca � uma biblioteca definida no padr�o ANSI. Serve para testar grupos de caracteres e para verificar se o caractere � uma letra, um n�mero ou um s�mbolo.

    */

    return 0;
}

