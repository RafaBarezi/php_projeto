#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Calculadora 1.0");
    system("color 03");
    printf("Calculadora 1.0\n\n");

    int num1, num2 , soma, subtracao, multi, div;
    printf("Por favor, digite o primeiro n�mero a ser processado:\n\n>>> ");
    scanf( "%i", &num1);
    printf("\nPor favor, digite o segundo n�mero a ser processado:\n\n>>> ");
    scanf( "%i", &num2);

    soma      = num1 + num2;
    subtracao = num1 - num2;
    multi     = num1 * num2;
    div       = num1 / num2;

    printf("\n\nA soma entre os valores �: %i\n", soma);
    printf("A subtra��o entre os valores �: %i\n", subtracao);
    printf("O produto entre os valores �: %i \n", multi);
    printf("A divis�o entre os valores �: %i \n\n", div) ;

    return 0;
}

