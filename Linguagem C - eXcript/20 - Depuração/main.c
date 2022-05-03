#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Depuração");
    system("color 03");
    printf("Aula - Depuração\n\n");

    //Precisamos informar a linha que desejamos depurar, pra isso é marcar um breakpoint, na barra ao lado. Ao invés de pedir para compilar devemos ir em : Debug\Step Into \ next line F7 e seguir apertando linha por linha.

    printf("Por favor, digite o número 1 >>> ");
    char c;
    c = getchar();

    // A função getchar é exclusiva da biblioteca ctype. Ela tem a mesma função que a scanf, a diferença entre elas é que ela só irá ler um caractere. Com a getchar iremos atribuir valor diretamente a c. Não há necessidade de informar o caractere que vamos ver (%c), pois a função já sabe que é char.

    if(c == '1')
    {
        printf("\nO caractere digitado está correto.\n");
    }
    else
    {
        printf("\nO caractere digitado é invalido.\n");
        printf("\nVocê digitou o caractere %c.\n", c);
    }
    return 0;
}
