#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title IDE");
    system("color 03");
    printf("Aula - IDE\n\n");

    /*

    int main() � o m�todo principal. Isso quer dizer que o m�todo retornar� a um valor inteiro, por esse motivo � preciso incluir o return 0;

    * IDE (Ambiente integrado de desenvolvimento) Integrated development environment: � o programa em um sistema que faz outros programas. � como se fosse um bloco de notas evolu�do.

    ->IDE   ->Compilador   ->Execu��o

    * Compilador � como se fosse um prompt de comando, ele entende o c�digo e o interpreta de forma que o PC entenda.

    */

    return 0;
}
