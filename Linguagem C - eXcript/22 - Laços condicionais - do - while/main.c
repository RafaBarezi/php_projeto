#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title La�os Condicionais I - do - while");
    system("color 03");
    printf("Aula - La�os Condicionais I - do - while\n\n");

    /*

    Esta � outra forma de trabalhar com looping: o bloco de instru��o vai ser repetido pelo menos uma vez.

    Fa�a o que estiver entre chaves enquanto o que estiver entre par�nteses.

    Executar o que est� no bloco de instru��o enquanto a condi��o dentro dos par�nteses for verdadeira (true).

    O sistema vai passar normalmente pelas linhas, mas quando passar em true ele vai analisar e se a condi��o for verdadeira ele vai repetir o comando (no m�nimo 1 vez):

    Fa�a
    {
    }
    enquanto(true)

    Faremos um programa em que o usu�rio precisa digitar 0 para poder sair do looping:

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
        printf("\n\nEsta � a sua %i� tentativa\n\n", contador);
        // O bloco do est� pronto, agora precisamos definir a while, colocando a condi��o para sair do looping:
    }
    while("%i" != 0, c);

    return 0;
}
