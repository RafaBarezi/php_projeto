#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Instru��o if else");
    system("color 03");
    printf("Aula - Instru��o if else\n\n");

    // Se verdadeiro � executado um bloco, se n�o � executado outro bloco, isso depende da escolha do usu�rio.

    int i=10;

    /*

    if(5==5)

    Estamos fazendo uma compara��o/ n�o � atribui��o n�o estamos dizendo que � 5.
    Estamos comparando se 5 � igual a 5. Poder�amos comparar negativamente com !=

    Por isso usamos os dois iguais ==

    Se fosse � igual a cinco (atribuindo 5 a vari�vel) usar�amos apenas um sinal de igual =

    printf( "\n%i\n", i==1 );

    Aqui queremos saber se i vale 1. Como sabemos na� � verdade, vai imprimir 0.

    positiva -> 1
    negativa -> 0

    ele vai dizer que � 0 pois o sistema diz que ele � diferente:

    printf( "\n%i\n", i!=1 );

    Como foi verdadeira, mostrou 1.

    Vamos inverter o resultado, negar a instru��o e usar NOT: Inverteremos o valor do resultado.

    Se verdadeiro vai imprimir falso, se falso imprime verdadeiro:

    printf( "\n%i\n", !(i==1));

    ! � um sinal de nega��o. � o NOT. Colocamos a ! para negar o valor da atribui��o.

    */

    printf("Digite um valor != 5\n\n>> ");
    scanf("%i", &i);

    if(i==5)
    {
        printf("\nA Expressao � :");
        printf("False\n");
    }
    else
    {
        printf("\nA Expressao �: ");
        printf("True\n");
    }

    return 0;
}
