#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Características das variáveis");
    system("color 03");
    printf("Aula - Características das variáveis\n\n");

    /*

    Toda variável possui um local na memória reservado para armazenar um valor. (Como um produto, hora atual, usuário valor, por exemplo).

    Quanto ás variáveis:

    1 - Todas possuem um nome;
    2 - Todas possuem um tipo;
    3 - Todas possuem um tamanho;
    4 - Todas possuem um valor - (Mesmo quando nulo existe valor, que seria 0).

    * ATENÇÃO: Só devemos colocar na memória os dados necessários (apenas os valores que vamos utilizar para evitar sobrecarregar).

    >>> O armazenamento na memória é excluído rapidamente / É temporário. Quando o pc é desligado ou o programa é fechado, o valor é perdido;
    >>> Toda vez que você atribui um valor a uma variável, o valor não estará mais na memória e se algum problema ocorrer, os dados serão perdidos, e não tem recuperação;
    >>> Toda vez que atribuímos um novo valor a uma variável, o valor antigo é perdido.

    */
}
