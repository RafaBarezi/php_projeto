#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*

Nome do programa: Maioridade Penal.
Objetivo: Solicitar que o usu�rio digite a propria idade. Se ele for maior o sistema ir� exibir na tela quanto tempo faz que ele fez 18 anos. Se ele for menor o sistema ir� exibir quantos anos ainda faltam para atingir a maioridade.
Data Cria��o: 02/02/2022.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("title Maioridade Penal");
    system("color 03");

    int x, dif1, dif2;
    x = 0;
    // x corresponde � idade que ser� preenchida
    printf("Por favor, digite a sua idade >>> ");
    scanf("%i",&x);

    system("cls");
    printf("Voc� tem %i anos. ",x);
    dif1 = x-18;
    dif2 = 18-x;

    if(x>=18)
    {
        printf("Fazem %i anos que voc� � maior de idade.\n",dif1);
    }
    else
    {
        printf("Voc� � menor de idade, faltam %i anos para voc� se tornar maior.\n",dif2);
    }
    return 0;
}
