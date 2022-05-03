#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h> // biblioteca necessária para manitulação de tempo

/*

Nome do programa: Contagem Regressiva.
Objetivo: Contagem regressiva para uma explosão!
Data Criação: 19/03/2022.

*/

void wait ( int seconds )// Estes são o comando do relógio
{
    clock_t endwait;
    endwait = clock () + seconds * CLK_TCK;
    while (clock() < endwait) {}
}

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("title Contagem Regressiva");
    system("color 03");

    int contador;

    for (contador=10; contador>0; contador--)
    {
        printf("Detonação em %i ", contador);

        Sleep(1000); //Valor em Milissegundos, serve para regular a velocidade do relógio

        system("cls"); //Sem o clear os outros números apareceriam em fila
    }

    system("cls");

    printf("Booooom!\n\n");

    return 0;
}
