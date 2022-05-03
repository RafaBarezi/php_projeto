#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Operação ternária");
    system("color 03");
    printf("Aula - Operação ternária\n\n");

    printf("Por favor, digite uma letra entre A e G:   ");
    char caractere = 0;    //char pode manipular tanto caracteres quanto números (De 0 a 255)
    scanf("%c", &caractere);
    int codigo = 0;

    /*

    switch(caractere)
    {
    case 'A':
        codigo = 65;
        break;
    case 'B':
        codigo = 66;
        break;
    case 'C':
        codigo = 67;
        break;
    case 'D':
        codigo = 68;
        break;
    case 'E':
        codigo = 69;
        break;
    case 'F':
        codigo = 70;
        break;
    case 'G':
        codigo = 71;
        break;
    default:
        codigo = -1;
    }

    Agora faremos a operação com operadores ternários

    */

    codigo = (caractere=='A') ? 65 :
             (caractere=='B') ? 66 :
             (caractere=='C') ? 67 :
             (caractere=='D') ? 68 :
             (caractere=='E') ? 69 :
             (caractere=='F') ? 70 :
             (caractere=='G') ? 71 : -1;

    printf("\nO código ASCII da letra digitada é: %i\n", codigo);

    return 0;
}
