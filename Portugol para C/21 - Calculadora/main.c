#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

/*

Nome do programa: Calculadora.
Objetivo: Solicitar que o usuário digite um número e operação matemática
Data Criação: 09/03/2022.

*/

int main()
{
    system("title calculadora");
    system("color 03");
    setlocale(LC_ALL, "Portuguese_Brazil");

    float num1, num2, resultado;

    char op='0';

    do
    {
        num1 = num2 = resultado = 0;

        printf("Por favor, digite o primeiro número >>> ");
        scanf("%f", &num1);
        printf("\nPor favor, digite o segundo número >>> ");
        scanf("%f", &num2);

        system("cls");

        printf("Digite (1) para somar\n");
        printf("\nDigite (2) para subtrair\n");
        printf("\nDigite (3) para multiplicar\n");
        printf("\nDigite (4) para dividir\n\n>>> ");

        op = getche();

        system("cls");

        if(op == '1')
        {
            resultado = num1 + num2;
            printf(">>> %.0f + %.0f = %.0f\n", num1, num2, resultado);
        }
        else
        {
            if(op == '2')
            {
                resultado = num1 - num2;
                printf(">>> %.0f - %.0f = %.0f\n\n", num1, num2, resultado);
            }
            else
            {
                if(op == '3')
                {
                    resultado = num1 * num2;
                    printf(">>> %.0f * %.0f = %.0f\n\n", num1, num2, resultado);
                }
                else
                {
                    if(op =='4')
                    {
                        resultado = num1 / num2;
                        printf(">>> %.0f / %.0f = %.2f\n\n", num1, num2, resultado);
                    }
                }
            }
        }
        printf("\nPressione qualquer tecla para fazer uma nova operação\n\n",resultado);
        getch();
        system("cls");
    }

    while(op=='1','2','3','4');

    return 0;
}
