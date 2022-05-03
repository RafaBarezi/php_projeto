#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Switch");
    system("color 03");
    printf("Aula - Switch\n\n");

    /*

    A instrução Switch serve para evitar o uso excessivo e confuso de ifs aninhados.Neste caso trabalhamos com constantes:

    switch(expressao)
    {
    case(expressao_const):
        break;
    case(true):
        break;
    default:
    }

    >>> Quando o compilador encontra a instrução break ele sai do bloco de instrução. Se a gente não inserir ela a leitura continua, causando erros.
    >>> Instrução default é executada se a condição anterior não foi satisfeita ou se não possuir break.

    */

    printf("Digite um valor entre 0 e 9 >>> ");
    int i;
    scanf("%i", &i);

    switch(i)
    {
    case 0:
        printf("\nA opção digitada foi >>> 0\n\n");
        break;
    case 1:
        printf("\nA opção digitada foi >>> 1\n\n");
        break;
    case 2:
        printf("\nA opção digitada foi >>> 2\n\n");
        break;
    case 3:
        printf("\nA opção digitada foi >>> 3\n\n");
        break;
    case 4:
        printf("\nA opção digitada foi >>> 4\n\n");
        break;
    case 5:
        printf("\nA opção digitada foi >>> 5\n\n");
        break;
    case 6:
        printf("\nA opção digitada foi >>> 6\n\n");
        break;
    case 7:
        printf("\nA opção digitada foi >>> 7\n\n");
        break;
    case 8:
        printf("\nA opção digitada foi >>> 8\n\n");
        break;
    case 9:
        printf("\nA opção digitada foi >>> 9\n\n");
        break;
    default:
        printf("\nVocê digitou uma opção inválida\n");
    }

    return 0;
}
