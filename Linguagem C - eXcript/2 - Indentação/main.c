#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Indentação");
    system("color 03");
    printf("Aula - Indentação\n\n");

    /*

    >>> Instruções, funções ou método: É tudo o que que a gente manda executar, como a instrução printf.

    Toda vez que acontece algo podemos chamar de função. Todas as funções terminam com ponto e vírgula. (Sempre que é colocado parênteses se trata uma função, independente onde esteja a biblioteca).

    >>> Indentação: É a forma com que arrumamos o nosso código (espaços, mudanças de linha). É importante sempre manter as instruções alinhadas com um tab. Caso tenha uma próxima instrução como depois do if, deve dar mais um tab. É feio ter um código desalinhado. Indentação mostra profissionalismo.

    >>> Para inserir comentários no código:

    os símbolos //    -> Servem para comentar em uma linha apenas;
    Os símbolos /*    -> São usados quando são comentários de várias linhas.

    */
}
