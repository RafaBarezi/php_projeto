#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Operador ternário");
    system("color 03");
    printf("Aula - Operador ternário\n\n");

    /*

    O operador ternário serve como um atalho linguístico. Eles estão no lugar da if. Servem para simplificação.

    Se define com uma expressão booleana:

    expressão ? valor true : valor false;   ou
    <variável> = (true) ? <valor1> SENÃO <valor2>;   ou
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
    printf("Por favor, informe um número >>> ");
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

    ou poderá ser definida como a seguir

    */

    num2 =  (num1<0) ? 0 : num1;
    printf("\nO valor de num2 é >>> %i\n", num2);

    return 0;
}
