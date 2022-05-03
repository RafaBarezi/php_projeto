#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Instrução if");
    system("color 03");
    printf("Aula - Instrução if\n\n");

    char c;
    printf("Por favor, digite um caractere em letra maiúscula:\n\n>>> ");
    scanf( "%c", &c );
    printf("\nVocê digitou:\n\n>>> %c\n", c);

    if( c>= 'a' )  //Char se usa com aspas únicas
    {
        printf("\nVocê digitou em letra minúscula. Deveria ter digitado a letra maiúscula: <%c> \n", toupper(c));
    }

    /*

    >>> O que buscamos responder com este comando é se o usuário inseriu um caractere maior ou igual ao caractere 'a'. Se for maior ou igual a 'a' usamos a função toupper, que serve para colocar o caractere em letra maiúscula.(Se pronuncia tchúoper).

    >>> Para manipular caracteres no C precisamos da biblioteca: <ctype.h>.

    >>> Essa biblioteca é uma biblioteca definida no padrão ANSI. Serve para testar grupos de caracteres e para verificar se o caractere é uma letra, um número ou um símbolo.

    */

    return 0;
}

