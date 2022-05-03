#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h> // trabalha a função booleana

/*

Nome do programa: Pesquisa Vetor.
Objetivo: Solicitar que o usuário localize a posição de um vetor desejado.
Data Criação: 02/04/2022.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("title Pesquisa Vetor");
    system("color 03");

    int vetor[] = {1, 3, 5, 7, 9};
    int num, posicao;
    bool localizado = false; //função booleana

    printf("Qual número deseja procurar? >>> ");
    scanf("%i", &num);

    for(posicao = 0 ; posicao < 5; posicao++)
    {
        if(vetor[posicao] == num)
        {
            printf("\n\n>>> Vetor encontrado na posição %i\n\n", posicao);
            localizado = true;
        }
    }

    if(!localizado)
    {
        printf("\n\nVetor não encontrado em nehuma posição\n\n");
    }

    return 0;
}
