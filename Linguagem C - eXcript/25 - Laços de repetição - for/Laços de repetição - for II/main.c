#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Laços de repetição - for II");
    system("color 03");
    printf("Aula - Laços de repetição - for II\n\n");

    /*

    for(parte1; parte2; parte3)

    parte1 -> inicialização(parte principal, onde se declara e inicializa a variável)

    parte2 -> condição (verifica para dar ou não continuidade à instrução for)

    parte3 -> atualização (incrementa ou decrementa)

    */

    for(int a=1, b=9; a<=9; ++a, --b)
    {
        printf("%i",a);
        printf("   >>>   ");
        printf("%i\n",b);
    }

    return 0;
}
