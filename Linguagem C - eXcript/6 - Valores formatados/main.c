#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Valores formatados");
    system("color 03");
    printf("Aula - Valores formatados\n\n");

    /*

    Servem para imprimir dados que possuem tipos (modelo):
    printf( "%tipo_de_saida", valor_a_ser_impresso );
    exemplo: printf( "%tipo1 %tipo2", var1 , var2 );

    int num = 111;
    printf("%i\n\n", num);
    float f = 2.2;
    printf("%f\n\n", f);

    Se mudar o 11 por qualquer n�mero o que ser� imprimido � o n�mero em quest�o.
    O printf tem o %i para mostrar que vir� um inteiro, depois tem a vari�vel num.

    >>> Para inteiro (interger) usamos %i ou %d;
    >>> Para float ou double %f;
    >>> Para char %c;
    >>> Para string %s.

    Atalhos:

    -> %u quando desejamos escrever um n�mero inteiro sem o sinal, s� o m�dulo;
    -> %p para imprimir o endere�o de mem�ria;
    -> %e para imprimir n�meros com nota��o cientifica;
    -> Para imprimir apenas o s�mbolo de porcentagem: usamos duas porcentagens %%.

    */

    int x = 10;
    printf("%i\n\n", x);
    float ff = 4.12;
    printf("%f\n\n", ff);    // Para imprimir x e vari�vel ff ao mesmo tempo.
    printf("%i - %f\n", x, ff);

    return 0;
}
