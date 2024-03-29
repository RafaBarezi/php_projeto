#include <stdio.h>
#include <stdlib.h> // necess�ria p/ as fun��es rand() e srand()
#include <locale.h>
#include <time.h>

/*

Nome do programa: N�meros Iguais.
Objetivo: Solicitar que o usu�rio digite um n�mero e confirmar se o n�mero aleat�rio escolhido pelo sistema coincide com ele.
Data Cria��o: 08/02/2022.

*/

int main()

{
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("title Exibe Matriz");
    system("color 03");

    int ndig, nsort;
    // ndig -> � o n�mero digitado pelo usu�rio.
    // nsort -> � o n�mero sorteado pelo sistema.

    printf("Informe um n�mero de 0 a 9 >>> ");
    scanf("%i",&ndig);
    printf("\n\nVoc� digitou o n�mero >>> %i \n\n\n", ndig);

    srand(time(NULL));
    nsort = rand() % 10;
    printf("O n�mero sorteado foi %i!\n\n",nsort );

    if (ndig == nsort)
    {
        printf("Parab�ns, voc� acertou\n\n!");
    }
    else
    {
        printf("Que pena, voc� errou, tente de novo\n\n!");
    }

    return 0;
}
