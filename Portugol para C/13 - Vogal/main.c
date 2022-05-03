#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*

Nome do programa: Vogal.
Objetivo: Informar se a letra digitada pelo usuário é ou não uma vogal.
Data Criação: 07/02/2022.

*/

void main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("title Vogal");
    system("color 03");

    char letra;
    printf("Por favor, digite uma letra >>> ");
    scanf("%c",&letra);

    if((letra=='A') || (letra=='E') || (letra=='I') || (letra=='O')|| (letra=='U') || (letra=='a') ||(letra=='e')|| (letra=='i') || (letra=='o') || (letra=='u'))
    {
        printf("\n>>> A letra '%c' é uma vogal!\n",letra);
    }
    else
    {
        printf("\n>>> A letra '%c' é uma consoante!\n",letra);
    }
    return 0;
}
