#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h> // trabalha a fun��o booleana

/*

Nome do programa: Pesquisa Vetor.
Objetivo: Solicitar que o usu�rio localize a posi��o de um vetor desejado.
Data Cria��o: 02/04/2022.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("title Pesquisa Vetor");
    system("color 03");

    int vetor[] = {1, 3, 5, 7, 9};
    int num, posicao;
    bool localizado = false; //fun��o booleana

    printf("Qual n�mero deseja procurar? >>> ");
    scanf("%i", &num);

    for(posicao = 0 ; posicao < 5; posicao++)
    {
        if(vetor[posicao] == num)
        {
            printf("\n\n>>> Vetor encontrado na posi��o %i\n\n", posicao);
            localizado = true;
        }
    }

    if(!localizado)
    {
        printf("\n\nVetor n�o encontrado em nehuma posi��o\n\n");
    }

    return 0;
}
