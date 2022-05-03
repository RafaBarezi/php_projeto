#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h> // biblioteca para uso do getche
#include <ctype.h> // biblioteca de manipula��o de caracteres

/*

Nome do programa: M�dia Final.
Objetivo: Solicitar que o usu�rio digite as notas escolares. Se ele atingir a m�dia de 7 pontos ele ser� considerado aprovado, se n�o ser� reprovado.
Data Cria��o: 05/03/2022.

*/

int main()
{
    system("title M�dia Final");
    system("color 03");
    system("cls");

    int nota1, nota2, nota3, nota4, media;
    char op = '0', nome[50];
    nota1 = nota2 = nota3 = nota4 = media =0;

    do
    {
        printf("Por favor, digite o seu nome >>> ");
        fgets(nome, 50, stdin);
        system("cls");

        printf("Seja Bem vindo(a) %s",nome);
        setlocale(LC_ALL, "Portuguese_Brazil");
        printf("\nDigite (1) para calcular suas notas\n");
        printf("Digite (0) para sair do programa\n\n>>> ");

        op = getch();

/*

>>> getch -> l� um caractere diretamente do prompt sem buffer e sem echo. Ele espera que o usu�rio digite uma tecla e retorna este caractere.

>>> getche -> l� um caractere diretamente do prompt sem buffer mas com echo.

* � estranho o fato de getch() retornar um inteiro, mas n�o h� problema pois este inteiro � tal que quando igualado a um char a convers�o � feita corretamente.

>>> cgets -> l� uma string diretamente do prompt.

>>> putch -> escreve um caractere diretamente no prompt.

>>> cputs -> escreve uma string diretamente no prompt.

>>> cprintf -> formata valores e escreve eles diretamente no prompt.

>>> clrscr -> limpa a tela.

>>> cscanf -> le valores formatados diretamente no prompt;

>>> gotoxy	-> Coloca o cursor na coordenada X,Y.

>>> kbhit -> verifica se uma tecla foi pressionada

*/

        if(op != '0')
        {
           system("cls");

           printf("Por favor, digite a sua primeira nota bimestral >>> ");
           scanf("%i", &nota1);

           printf("\nPor favor, digite a sua segunda nota bimestral >>> ");
           scanf("%i", &nota2);

           printf("\nPor favor, digite a sua terceira nota bimestral >>> ");
           scanf("%i", &nota3);

           printf("\nPor favor, digite a sua quarta nota bimestral >>> ");
           scanf("%i", &nota4);

           media = (nota1+nota2+nota3+nota4) / 4;

           system("cls");

           printf("A m�dia das suas notas foi >>> %i\n", media);

           if(media>=7)
           {
               printf("\nParab�ns, voc� foi aprovado(a)! Boas f�rias!\n\n", nome);
           }
           else
           {
               printf("\nInfelizmente voc� foi reprovado(a).\n");
           }
           break;
        }

        }
        while(op!='0');
        return 0;
        }
