#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

Nome do programa: Elei��o.
Objetivo: Solicitar que o usu�rio digite um n�mero para a realiza��o de uma vota��o. Atrav�s dos dados fornecidos o sistema mostrar� o vencedor e a apura��o dos votos utilizando percentuais.
Data Cria��o: 23/03/2022.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("title Elei��o");
    system("color 03");

    int candidato1, candidato2, brancos, nulos, total_de_votos, voto;
    candidato1 = 0, candidato2 = 0, brancos = 0, nulos=0, total_de_votos = 0;

    float porcentagem_candidato1, porcentagem_candidato2, porcentagem_brancos, porcentagem_nulos;

    do
    {
        printf(">>> 1 - Candidato n� 1\n");
        printf(">>> 2 - Candidato n� 2\n");
        printf(">>> 3 - Voto em branco\n\n");
        printf(">>> 0 - Encerra a vota��o e apura os resultados\n\n");
        printf(" Por favor, digite o seu voto >>> ");
        scanf("%i", &voto);

        system("cls");

        switch(voto)
        {
        case 0:
            printf("Vota��es encerradas! Confira a apura��o:\n\n\n");
            break;

        case 1:
            candidato1 = candidato1 + 1;
            break;

        case 2:
            candidato2 = candidato2 + 1;
            break;

        case 3:
            brancos = brancos + 1;
            break;

        default:
            nulos = nulos + 1;
        }

    }
    while(voto != 0);

    total_de_votos = candidato1 + candidato2 + brancos + nulos;

    if(total_de_votos > 0)
    {
        porcentagem_candidato1 = (candidato1 * 100) / total_de_votos;
        porcentagem_candidato2 = (candidato2 * 100) / total_de_votos;
        porcentagem_brancos = (brancos * 100) / total_de_votos;
        porcentagem_nulos = (nulos * 100) / total_de_votos;


        printf("Total de votos registrados >>>  %i\n\n\n", total_de_votos);
        printf("O candidato 1 obteve >>>  %i votos, obtendo o total de %.2f %% dos votos\n",  candidato1, porcentagem_candidato1); // Aten��o aos dois s�mbolos de %.
        printf("O candidato 2 obteve >>>  %i votos, obtendo o total de %.2f %% dos votos\n", candidato2, porcentagem_candidato2);
        printf("Votos em branco >>>  %i votos, ou seja %.2f %% dos votos\n", brancos,porcentagem_brancos );
        printf("Votos nulos >>>  %i votos, ou seja %.2f %% dos votos\n",  nulos, porcentagem_nulos);
    }

    if(candidato1>candidato2)
    {
        printf("\n\n>>>O candidato 1 venceu!\n\n");
    }
    else
    {
        if(candidato1==candidato2)
        {
            printf("\n\n>>>Houve empate!\n\n");
        }
        else
        {
            if(candidato1<candidato2)
            {
                printf("\n\n>>> O candidato 2 venceu!\n\n");
            }
        }
    }
    return 0;
}
