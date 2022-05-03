#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Laços de repetição - for I");
    system("color 03");
    printf("Aula - Laços de repetição - for I\n\n");

    /*

    A estrutura for. Facilita o looping;
    Se usa quando sabemos a quantidade de itens a percorrer;
    possui a seguinte estrutura:

    for(parte1; parte2; parte3){

        >>> parte 1 é onde declaramos e inicializamos a variável 1;
        >>> parte 2 é a condição;
        >>> parte 3 atualização - incremento ou decremento.

    fazendo um looping que imprime de 1 a 10:

    */

    for(int i= 0; i<10; ++i) // como = 0 o looping começa do 0.
    {
        printf("%i\n", i);
    }

    //  Quando compilarmos vai dar erro, será preciso configurar para que fique como standart 99: project >> build options >> other compiler options >> escrever o comando: -std=c99.

    return 0;
}
