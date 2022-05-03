#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Depura��o");
    system("color 03");
    printf("Aula - Depura��o\n\n");

    //Precisamos informar a linha que desejamos depurar, pra isso � marcar um breakpoint, na barra ao lado. Ao inv�s de pedir para compilar devemos ir em : Debug\Step Into \ next line F7 e seguir apertando linha por linha.

    printf("Por favor, digite o n�mero 1 >>> ");
    char c;
    c = getchar();

    // A fun��o getchar � exclusiva da biblioteca ctype. Ela tem a mesma fun��o que a scanf, a diferen�a entre elas � que ela s� ir� ler um caractere. Com a getchar iremos atribuir valor diretamente a c. N�o h� necessidade de informar o caractere que vamos ver (%c), pois a fun��o j� sabe que � char.

    if(c == '1')
    {
        printf("\nO caractere digitado est� correto.\n");
    }
    else
    {
        printf("\nO caractere digitado � invalido.\n");
        printf("\nVoc� digitou o caractere %c.\n", c);
    }
    return 0;
}
