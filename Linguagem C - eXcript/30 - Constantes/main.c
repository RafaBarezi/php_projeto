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

    Servem para digitação de constantes matemáticas, que não se alteram. Não será preciso dicar redigitando.

    A declaração de uma constante é assim: const int constante = 12;

    ou podemos colocar o seguintes comandos acima, junto com as bibliotecas stdio e locale:

    #comando nome_da_constante valor

    exemplo: #define w 7  (não podemos colocar ponto e vírgula).

    */

    const int a=5;
    printf("%i\n", a);
    return 0;
}
