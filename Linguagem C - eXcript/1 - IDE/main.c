#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title IDE");
    system("color 03");
    printf("Aula - IDE\n\n");

    /*

    int main() é o método principal. Isso quer dizer que o método retornará a um valor inteiro, por esse motivo é preciso incluir o return 0;

    * IDE (Ambiente integrado de desenvolvimento) Integrated development environment: É o programa em um sistema que faz outros programas. É como se fosse um bloco de notas evoluído.

    ->IDE   ->Compilador   ->Execução

    * Compilador é como se fosse um prompt de comando, ele entende o código e o interpreta de forma que o PC entenda.

    */

    return 0;
}
