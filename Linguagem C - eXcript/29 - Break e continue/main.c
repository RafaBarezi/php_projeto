#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Break e continue");
    system("color 03");
    printf("Aula - Break e continue\n\n");

    /*

    break     >>>   simplesmente interrompe nosso ciclo.
    continue  >>>   interrompe nosso laço.

    */

    int x;

    for(x=0; x<=100; ++x)
    {

        if(x==2)//quando x == 2, interrompa somente o laço atual.
        {
            printf("-\n\n", x);// para mostrar um traço onde o n° não for impresso.
            continue;
        }

        if(x==8)//quando chegarmos a x == 8, o looping será finalizado.
        {
            printf("-\n\n", x);// para mostrar um traço onde o n° não for impresso.
            break;
        }
        printf("%i\n", x);
    }


    return 0;
}
