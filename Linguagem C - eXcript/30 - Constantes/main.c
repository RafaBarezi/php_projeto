#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Constantes");
    system("color 03");
    printf("Aula - Constantes\n\n");

    /*

    Servem para digita��o de constantes matem�ticas, que n�o se alteram. N�o ser� preciso dicar redigitando.

    A declara��o de uma constante � assim: const int constante = 12;

    ou podemos colocar o seguintes comandos acima, junto com as bibliotecas stdio e locale:

    #comando nome_da_constante valor

    exemplo: #define w 7  (n�o podemos colocar ponto e v�rgula).

    */

    const int a=5;
    printf("%i\n", a);
    return 0;
}
