#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Indenta��o");
    system("color 03");
    printf("Aula - Indenta��o\n\n");

    /*

    >>> Instru��es, fun��es ou m�todo: � tudo o que que a gente manda executar, como a instru��o printf.

    Toda vez que acontece algo podemos chamar de fun��o. Todas as fun��es terminam com ponto e v�rgula. (Sempre que � colocado par�nteses se trata uma fun��o, independente onde esteja a biblioteca).

    >>> Indenta��o: � a forma com que arrumamos o nosso c�digo (espa�os, mudan�as de linha). � importante sempre manter as instru��es alinhadas com um tab. Caso tenha uma pr�xima instru��o como depois do if, deve dar mais um tab. � feio ter um c�digo desalinhado. Indenta��o mostra profissionalismo.

    >>> Para inserir coment�rios no c�digo:

    os s�mbolos //    -> Servem para comentar em uma linha apenas;
    Os s�mbolos /*    -> S�o usados quando s�o coment�rios de v�rias linhas.

    */
}
