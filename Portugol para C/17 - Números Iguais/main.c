#include <stdio.h>
#include <stdlib.h> // necessária p/ as funções rand() e srand()
#include <locale.h>
#include <time.h>

/*

Nome do programa: Números Iguais.
Objetivo: Solicitar que o usuário digite um número e confirmar se o número aleatório escolhido pelo sistema coincide com ele.
Data Criação: 08/02/2022.

*/

int main()

{
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("title Exibe Matriz");
    system("color 03");

    int ndig, nsort;
    // ndig -> é o número digitado pelo usuário.
    // nsort -> é o número sorteado pelo sistema.

    printf("Informe um número de 0 a 9 >>> ");
    scanf("%i",&ndig);
    printf("\n\nVocê digitou o número >>> %i \n\n\n", ndig);

    srand(time(NULL));
    nsort = rand() % 10;
    printf("O número sorteado foi %i!\n\n",nsort );

    if (ndig == nsort)
    {
        printf("Parabéns, você acertou\n\n!");
    }
    else
    {
        printf("Que pena, você errou, tente de novo\n\n!");
    }

    return 0;
}
