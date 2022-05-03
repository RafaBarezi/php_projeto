#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    /*

    A primeira bibliotecas é a standart input output - stdio.h
    A segunda bibliotecas é a standart library - stdlib.h (stdlib - é um arquivo de cabeçalho padrão, nos fornece métodos para controlar processos, alocar memória etc ...)

    */

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Operações matemáticas");
    system("color 03");
    printf("Aula - Operações matemáticas\n\n");

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
    printf("O resultado da soma é: %i\n", soma);
    int subtracao = num2 - num1;
    printf("o resultado da subtração é: %i\n", subtracao);
    int multi = num1 * num2;
    printf ("o resultado da multiplicação é: %i\n", multi);
    int div = num2 / 3;
    printf("o resultado da divisão é: %i\n", div);    //Aqui o sistema arredondou o n°.

    return 0;
}
