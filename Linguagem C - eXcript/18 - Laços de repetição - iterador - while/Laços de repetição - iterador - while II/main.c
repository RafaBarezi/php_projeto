#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title La�os de repeti��o (iterador) - while II");
    system("color 03");
    printf("Aula - La�os de repeti��o (iterador) - while II\n\n");

    // Aqui focaremos na instru��o while, vamos fazer um programa que vai pedir ao nosso usu�rio a quantidade de vezes que precisaremos repetir a instru��o. Ele vai dizer a quantidade de vezes que repetimos e vamos executar:

    int x = 0;
    int valorDigitado = 0;
    printf("Quantas vezes vc quer que essa mensagem se repita?\n\n");
    scanf("%i", &valorDigitado);

    while (x < valorDigitado)
    {
        printf("\n%i\n", x * 5);
        // se digitamos 5 vai imprimir de 5 em 5, poderia ser de 10 em 10 ...
        x = x + 1 ;
    }

    return 0;
}
