#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title encadeamento e aninhamento de ifs - switch case");
    system("color 03");
    printf("B�nus - encadeamento e aninhamento de ifs - switch case\n\n");

    /*


    >>> Encadeamento:

        if(opcao>0)
        {
            printf("\nN�mero positivo.\n);
        }
        else
        {
            if(opcao==0)
            {
                printf(\nN�mero nulo.\n);
            }
            else
            {
                printf("\nN�mero negativo.\n);
            }
        }



    >>> Aninhamento:

        if(opcao>=0)
        {
            if(opcao==0
        {
            printf("\nN�mero nulo.\n");
            }
            else
            {
                printf("\nN�mero positivo.\n");
            }
        }
        else
        {
            printf("\nN�mero positivo.\n");
        }



    >>> Switch Case abaixo:

        */

    int opcao;
    printf("Digite a op��o 1 para adicionar ou 2 para excluir >>> ");
    scanf("i", &opcao);

    switch(opcao)
    {
    case 1:
        printf("\nN�mero 1\n");
        break;
    case 2:
        printf("\nN�mero 2\n");
        break;
    default:
        printf("op��o inv�lida\n");
        printf("final do programa\n");
        return 0;
    }


    /*


    >>> if composto internamente a uma if simples:

    if(EXPRESSAO_CONDICIONAL_1)
    {
        if(EXPRESS�O_CONDICIONAL_2)
        {
        bloco_de_intrucao_1;
        }
    }
    else
    {
        bloco_de_instrucao_2;
    }



    >>> if simples sendo um comando de uma estrutura else:

    if(EXPRESSAO_CONDICIONAL_1)
    {
        bloco_de_intrucao_1;
    }
    else
    {
        if((EXPRESSAO_CONDICIONAL_2)
        {
        bloco_de_instrucao_2;
        }
    }



    >>> if / if else (encadeados e aninhados)/ switch case


    int opcao;
    printf("Digite um n�mero inteiro >>> ");
    scanf("i", &opcao);

    switch(variavel)
    {
    case A;
        bloco_de_instrucao_1;
        break;
    case B;
        bloco_de_instrucao_2;
        break;
    case C;
        bloco_de_instrucao_3;
        break;
    default
        bloco_de_instrucao_4;
    }


    O campo vari�vel precisa ser char ,int e long. A, B e C tamb�m precisam ser.
    Sendo a vari�vel igual a A, por exemplo, a sequencia de execu��o de tarefas continua at� que o comando break seja encontrado.

    */
}
