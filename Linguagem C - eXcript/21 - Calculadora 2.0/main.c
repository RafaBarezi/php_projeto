#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Calculadora 2.0");
    system("color 03");
    printf("Calculadora 2.0\n\n");

    float num1, num2, resultado;
    char op ='0'; // op de opera��o

    do
    {
        num1 = num2 = resultado = 0; // resetando as vari�veis

        printf("Digite (1) se voc� deseja somar\n");
        printf("Digite (2) se voc� deseja subtrair\n");
        printf("Digite (3) se voc� deseja multiplicar\n");
        printf("Digite (4) se voc� deseja dividir\n");
        printf("Digite (0) se voc� deseja sair do programa\n\n>>> ");

        op = getche(); // A diferen�a entre getchar e getche � que n�o existe a necessidade de apertar enter

        if(op != '0')
        {
            printf("\n\nPor favor, digite o primeiro n�mero:\n>>> ");
            scanf(" %f", &num1);
            printf("\nDigite o segundo n�mero:\n>>> ");
            scanf(" %f", &num2);

            if(op == '1')
            {
                resultado = num1 + num2;
            }
            else
            {
                if(op == '2')
                {
                    resultado = num1 - num2;
                }
                else
                {
                    if(op == '3')
                    {
                        resultado = num1 * num2;
                    }
                    else
                    {
                        if(op == '4')
                        {
                            resultado = num1 / num2;
                        }

                    }
                }
            }

            printf("\n\nO resultado �:\n>>> %.2f\n\n",resultado);
            printf("\nPressione uma tecla para fazer uma nova opera��o\n\n",resultado);
            getch();

        }

        system("cls");
    }
    while(op!='0');

    return 0;
}
