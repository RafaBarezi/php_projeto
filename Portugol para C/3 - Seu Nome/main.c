#include <stdio.h>
#include <stdlib.h>
#include <string.h> // biblioteca de manipulação de strings.

/*

Nome do programa: Seu Nome.
Objetivo: Solicitar a digitação de um nome e imprimir ele na tela.
Data Criação: 31/01/2022.

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

    -> Neste programa consegui imprimir meu nome completo usando fgets() ao invés da scanf().

    -> O stdin é importante para o armazenamento pois ele lê o dispositivo de entrada padrão (geralmente o teclado).

    -> fgets serve para armazenar os espaços em branco dentro da string. Se usar o scanf vai mostrar apenas Rafaela quando executar. Ele serve para mostrar o nome completo, mesmo com os espaços.

    -> Observe que não usei a biblioteca locale neste programa. O sistema não estava respondendo ao nomes com acentuação ou caracteres especiais . A setlocale servia apenas para saída, não para registrar os caracteres de entrada, portanto dispensei o seu uso.

    */

    return 0;
}
