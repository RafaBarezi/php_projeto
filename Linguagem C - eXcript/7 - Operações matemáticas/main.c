#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    /*

    A primeira bibliotecas � a standart input output - stdio.h
    A segunda bibliotecas � a standart library - stdlib.h (stdlib - � um arquivo de cabe�alho padr�o, nos fornece m�todos para controlar processos, alocar mem�ria etc ...)

    */

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Opera��es matem�ticas");
    system("color 03");
    printf("Aula - Opera��es matem�ticas\n\n");

    int num1, num2;
    num1 = 15;
    num2 = 20;

    /*

    Podemos fazer assim:

    int soma = num1 + num2;
    printf("%i\n", soma);
    int subtracao = num2 - num1;
    printf("%i\n\n", subtracao);

    ou da seguinte forma a seguir:

    */

    int soma = num1 + num2;
    printf("O resultado da soma �: %i\n", soma);
    int subtracao = num2 - num1;
    printf("o resultado da subtra��o �: %i\n", subtracao);
    int multi = num1 * num2;
    printf ("o resultado da multiplica��o �: %i\n", multi);
    int div = num2 / 3;
    printf("o resultado da divis�o �: %i\n", div);    //Aqui o sistema arredondou o n�.

    return 0;
}
