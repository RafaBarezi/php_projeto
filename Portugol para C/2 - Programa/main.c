#include <stdio.h>
#include <stdlib.h> // biblioteca de convers�o, mem�ria, controle de processo, ordenamento e busca, matem�tica.
#include <locale.h> // biblioteca para implementar a localiza��o de programas ( simbolos , caracteres regionais.

/*

Nome do programa: Programa.
Objetivo: Solicitar a digita��o de um n�mero inteiro aleat�rio e imprimir ele na tela.
Data Cria��o: 31/01/2022.

*/

int main()
{
    // A locale serve para incluir strings e imprimir acentos. Basta configurar:
    setlocale(LC_ALL,"Portuguese_Brazil");
    //Estas duas op��es 'system' d�o t�tulo e colorem o compiler segundo a tabela abaixo.
    system("title Programa");
    system("color 03");

    /*

    Atributos de cor s�o especificados por DOIS d�gitos hexadecimais.
    O primeiro corresponde � cor de tela de fundo, o segundo � cor de primeiro plano.
    Cada d�gito pode ter apenas um dos seguintes valores a seguir:

    0 = Preto        8 = Cinza
    1 = Azul         9 = Azul claro
    2 = Verde        A = Verde claro
    3 = Verde-�gua   B = Verde-�gua claro
    4 = Vermelho     C = Vermelho claro
    5 = Roxo         D = Lil�s
    6 = Amarelo      E = Amarelo claro
    7 = Branco       F = Branco brilhante

    */

    int num;
    printf("Por favor, digite um n�mero inteiro >>> ");
    scanf("%i", &num);
    printf("\nO n�mero digitado foi >>> %i \n",num);
    return 0;
}
