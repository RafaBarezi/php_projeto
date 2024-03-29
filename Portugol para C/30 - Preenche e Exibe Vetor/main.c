#include <stdio.h>
#include <stdlib.h>// necess�rio p/ as fun��es rand() e srand()
#include <locale.h>

// normalmente se usa a #include <time.h> quando se trabalha com time, mas neste caso o sistema funcionou normalemnte sem ela, acabei optei por n�o incluir.

/*

Nome do programa: Preenche e Exibe Vetor.
Objetivo: Estipula n�meros aleat�rios atrav�s de vetor e depois inverte a numera��o com base nos dados j� gerados.
Data Cria��o: 02/04/2022.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("title Preenche e Exibe Vetor");
    system("color 03");

    int num, vetor[10];

    /*

      srand(time(NULL)) objetiva inicializar o gerador de n�meros aleat�rios com o valor da fun��o time(NULL).

      Este por sua vez, � calculado como sendo o total de segundos passados desde 1 de janeiro de 1970 at� a data atual. Desta forma, a cada execu��o o valor da "semente" ser� diferente.

    */

    srand(time(NULL));

    for(num = 0 ; num < 10; num++)
    {
        vetor[num] = rand() % 100; // Sorteia um n�mero e atribui � posi��o do vetor
    }


    printf("Vetor na ordem original >>>\n\n");

    for(num = 0 ; num < 10; num++)

    {
        printf("%i ",vetor[num]);
    }

    printf("\n\nVetor na ordem inversa >>>\n\n");

    for(num = 9 ; num >= 0; num--)

    {
        printf("%i ",vetor[num]);
    }

    printf("\n");

    return 0;
}
