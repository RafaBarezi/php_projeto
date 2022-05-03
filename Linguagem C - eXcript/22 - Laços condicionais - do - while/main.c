#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Laços Condicionais I - do - while");
    system("color 03");
    printf("Aula - Laços Condicionais I - do - while\n\n");

    /*

    Esta é outra forma de trabalhar com looping: o bloco de instrução vai ser repetido pelo menos uma vez.

    Faça o que estiver entre chaves enquanto o que estiver entre parênteses.

    Executar o que está no bloco de instrução enquanto a condição dentro dos parênteses for verdadeira (true).

    O sistema vai passar normalmente pelas linhas, mas quando passar em true ele vai analisar e se a condição for verdadeira ele vai repetir o comando (no mínimo 1 vez):

    Faça
    {
    }
    enquanto(true)

    Faremos um programa em que o usuário precisa digitar 0 para poder sair do looping:

    */

    int contador, c;
    contador = c = 0;

    do
    {
        contador += 1;
        // contador deve receber mais ou igual a 1
        printf("Por favor, digite 0 para sair do looping >>> ");
        // vamos imprimir para quantas vezes ele fez o loopping
        scanf("%i", &c);
        printf("\n\nEsta é a sua %i° tentativa\n\n", contador);
        // O bloco do está pronto, agora precisamos definir a while, colocando a condição para sair do looping:
    }
    while("%i" != 0, c);

    return 0;
}
