#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title M�dia de notas escolares");
    system("color 03");
    printf("Aula - M�dia de notas escolares\n\n");

    //Vamos simular as notas e confirmar se foi aprovado ou n�o! Primeiro declaramos as vari�veis:
    float nota1, nota2, nota3, nota4, media;
    //Aqui igualamos as vari�veis a 0:
    nota1 = nota2 = nota3 = nota4 = media = 0;

    printf("\nMedia Escolar 1.0\n");
    printf("\nPor favor, digite a sua primeira nota bimestral\n\n>>> ");
    scanf("%f", &nota1);
    printf("\nDigite a sua segunda nota bimestral\n\n>>> ");
    scanf("%f", &nota2);
    printf("\nDigite a sua terceira nota bimestral\n\n>>> ");
    scanf("%f", &nota3);
    printf("\nDigite a sua quarta nota bimestral\n\n>>> ");
    scanf("%f", &nota4);


    // agora � s� somar elas e dividir por 4:
    media=(nota1 + nota2 + nota3 + nota4)/4;
    printf("\nO valor da sua media escolar foi de : %.0f\n", media);
    // Aten��o : observe que %.0f\n n�o permitiu mostrar decimal no float.

    if(media >= 7)
    {
        printf("\nvoc� foi aprovado!\n\n");
    }
    else
    {
        printf("\nvoc� foi reprovado!\n\n");
    }

    return 0;
}
