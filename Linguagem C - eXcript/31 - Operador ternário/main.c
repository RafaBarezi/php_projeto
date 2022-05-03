#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Operador tern�rio");
    system("color 03");
    printf("Aula - Operador tern�rio\n\n");

    /*

    O operador tern�rio serve como um atalho lingu�stico. Eles est�o no lugar da if. Servem para simplifica��o.

    Se define com uma express�o booleana:

    express�o ? valor true : valor false;   ou
    <vari�vel> = (true) ? <valor1> SEN�O <valor2>;   ou
    num = (true) ? 20 :10;

    int x = 0

    if(x==0)
    {
        x = 10;
    }
    else
    {
        x = 20;
    }

    int y = 0

    if(y==0)
    {
        y = 10;
    }
    else
    {
        y = 20;
    }

    int z = 0

    if(z==0)
    {
        z = 10;
    }
    else
    {
        z = 20;
    }

    */

    int num1, num2;
    printf("Por favor, informe um n�mero >>> ");
    scanf("%i", &num1);

    /*

    if(num1<0)
    {
        num2 = 0;
    }
    else
    {
        num2 = num1;
    }

    ou poder� ser definida como a seguir

    */

    num2 =  (num1<0) ? 0 : num1;
    printf("\nO valor de num2 � >>> %i\n", num2);

    return 0;
}
