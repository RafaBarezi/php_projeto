#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title La�os de repeti��o (iterador) - while I");
    system("color 03");
    printf("Aula - La�os de repeti��o (iterador) - while I\n\n");

    /*

    Aprenderemos como executar um bloco de comando por um determinado tempo ou por uma quantidade de vezes. Para isso usaremos os la�os condicionais, chamados de loopings.

    La�o condicional � uma maneira de executar um bloco de instru��o enquanto a uma condi��o foi verdadeira, fazem parte do t�pico do controle de fluxo de um programa.

    La�o condicional, estrutura de repeti��o, intera��o, loopings s�o sin�nimos e est�o contidos no mesmo t�pico: Controle de fluxo.

    Se quisermos imprimir mil vezes a mesma mensagem na tela a melhor maneira seria executar um looping e dar um printf, assim ele seria executado at� que a condi��o seja dada como verdadeira.

    Exemplo:

    enquanto(true)
    {
    imprime(1);
    }

    neste caso se repetir� enquanto for verdadeira. Veja a seguir:

    */

    int a = 0;

    // Poderia come�ar de qualquer n�mero
    while(a<10)
    {

        // enquanto a vari�vel a foi menor que 10 ser� impresso:

        printf( "%i\n", a);

        // Se parasse nessa linha do printf seria repetido infinitamente pois nunca deixar� de ser verdadeira. Para deixar de ser verdadeira precisamos adicionar mais um.

        a = (a + 1);

        /*

        Assim a recebe a + 1, assim pegamos nossa vari�vel a e estamos vendo qual o valor dela, vamos supor que foi 5, por exemplo, ent�o pegamos o valor 5 e somamos + 1 a ele. Feita esta opera��o matem�tica, estamos jogando o valor da vari�vel para dentro da vari�vel a novamente.

        Como a<10 ele vai contar at� 10 a partir do 0. Se jogarmos 7 ele s� vai contar 3 ...se jogar 2 vai contar 8...

        */

    }

    return 0;
}
