#include <stdio.h>
#include <stdlib.h>
#include <string.h> // biblioteca de manipula��o de strings.

/*

Nome do programa: Seu Nome.
Objetivo: Solicitar a digita��o de um nome e imprimir ele na tela.
Data Cria��o: 31/01/2022.

*/

void main()
{
    system("title Seu Nome");
    system("color 03");

    char nome[70];

    // Se eu colocar 5 no lugar de 70 vai aparecer rafae
    printf("Por favor, digite o seu nome completo >>> ");
    fgets(nome, 70, stdin);

    system("cls");
    // system("cls") apaga tudo o que estiver na tela anteriormente

    printf("Seja bem vindo(a) ao sistema, %s", nome);

    /*

    -> Neste programa consegui imprimir meu nome completo usando fgets() ao inv�s da scanf().

    -> O stdin � importante para o armazenamento pois ele l� o dispositivo de entrada padr�o (geralmente o teclado).

    -> fgets serve para armazenar os espa�os em branco dentro da string. Se usar o scanf vai mostrar apenas Rafaela quando executar. Ele serve para mostrar o nome completo, mesmo com os espa�os.

    -> Observe que n�o usei a biblioteca locale neste programa. O sistema n�o estava respondendo ao nomes com acentua��o ou caracteres especiais . A setlocale servia apenas para sa�da, n�o para registrar os caracteres de entrada, portanto dispensei o seu uso.

    */

    return 0;
}
