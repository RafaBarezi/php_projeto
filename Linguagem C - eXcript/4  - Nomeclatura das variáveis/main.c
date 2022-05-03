#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Nomeclatura das vari�veis");
    system("color 03");
    printf("Aula - Nomeclatura das vari�veis\n\n");

    /*

    Tipo nomeDaVari�vel = valorPadr�o;

    N�o � obrigat�rio atribuir um valor padr�o, por�m � um bom costume.

    int num1 = 0
    int num2 = 0

    Existe outra forma de declarar v�rias vari�veis ao mesmo tempo como:

    int num1, num2 = 0; (� bem mais r�pido e elegante assim).

    * Para vari�veis com nomes compostos usar a segunda palavra com nome mai�sculo como em numeroVerificado;

    *No C uma vari�vel n�o pode come�ar com n�mero, apenas com letra;

    *Caso precisar iniciar com um n�mero se deve usar a underline;

    *N�o podemos deixar espa�os tamb�m, devemos usar o underline neste caso tamb�m;

    *N�o podemos usar *-"/  (ou seja todos os caracteres) nos nomes de vari�veis.

    */

    return 0;
}
