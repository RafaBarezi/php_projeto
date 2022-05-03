#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Laços de repetição (iterador) - while I");
    system("color 03");
    printf("Aula - Laços de repetição (iterador) - while I\n\n");

    /*

    Aprenderemos como executar um bloco de comando por um determinado tempo ou por uma quantidade de vezes. Para isso usaremos os laços condicionais, chamados de loopings.

    Laço condicional é uma maneira de executar um bloco de instrução enquanto a uma condição foi verdadeira, fazem parte do tópico do controle de fluxo de um programa.

    Laço condicional, estrutura de repetição, interação, loopings são sinônimos e estão contidos no mesmo tópico: Controle de fluxo.

    Se quisermos imprimir mil vezes a mesma mensagem na tela a melhor maneira seria executar um looping e dar um printf, assim ele seria executado até que a condição seja dada como verdadeira.

    Exemplo:

    enquanto(true)
    {
    imprime(1);
    }

    neste caso se repetirá enquanto for verdadeira. Veja a seguir:

    */

    int a = 0;

    // Poderia começar de qualquer número
    while(a<10)
    {

        // enquanto a variável a foi menor que 10 será impresso:

        printf( "%i\n", a);

        // Se parasse nessa linha do printf seria repetido infinitamente pois nunca deixará de ser verdadeira. Para deixar de ser verdadeira precisamos adicionar mais um.

        a = (a + 1);

        /*

        Assim a recebe a + 1, assim pegamos nossa variável a e estamos vendo qual o valor dela, vamos supor que foi 5, por exemplo, então pegamos o valor 5 e somamos + 1 a ele. Feita esta operação matemática, estamos jogando o valor da variável para dentro da variável a novamente.

        Como a<10 ele vai contar até 10 a partir do 0. Se jogarmos 7 ele só vai contar 3 ...se jogar 2 vai contar 8...

        */

    }

    return 0;
}
