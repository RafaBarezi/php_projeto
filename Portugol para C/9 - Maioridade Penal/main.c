#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*

Nome do programa: Maioridade Penal.
Objetivo: Solicitar que o usuário digite a propria idade. Se ele for maior o sistema irá exibir na tela quanto tempo faz que ele fez 18 anos. Se ele for menor o sistema irá exibir quantos anos ainda faltam para atingir a maioridade.
Data Criação: 02/02/2022.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("title Maioridade Penal");
    system("color 03");

    int x, dif1, dif2;
    x = 0;
    // x corresponde á idade que será preenchida
    printf("Por favor, digite a sua idade >>> ");
    scanf("%i",&x);

    system("cls");
    printf("Você tem %i anos. ",x);
    dif1 = x-18;
    dif2 = 18-x;

    if(x>=18)
    {
        printf("Fazem %i anos que você é maior de idade.\n",dif1);
    }
    else
    {
        printf("Você é menor de idade, faltam %i anos para você se tornar maior.\n",dif2);
    }
    return 0;
}
