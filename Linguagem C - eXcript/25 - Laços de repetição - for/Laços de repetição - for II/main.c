#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title La�os de repeti��o - for II");
    system("color 03");
    printf("Aula - La�os de repeti��o - for II\n\n");

    /*

    for(parte1; parte2; parte3)

    parte1 -> inicializa��o(parte principal, onde se declara e inicializa a vari�vel)

    parte2 -> condi��o (verifica para dar ou n�o continuidade � instru��o for)

    parte3 -> atualiza��o (incrementa ou decrementa)

    */

    for(int a=1, b=9; a<=9; ++a, --b)
    {
        printf("%i",a);
        printf("   >>>   ");
        printf("%i\n",b);
    }

    return 0;
}
