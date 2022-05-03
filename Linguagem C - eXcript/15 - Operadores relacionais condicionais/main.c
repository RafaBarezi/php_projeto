#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese_Brazil");
    system("title Operadores relacionais condicionais");
    system("color 03");
    printf("Aula - Operadores relacionais condicionais\n\n");

    // -> iJ e iI significa Idade jovem e idade idosa
    int iJ, iI;
    iJ = 17;
    iI = 65;
    int idade = 0;

    printf("Digite a idade de uma pessoa:\n\n>>> ");
    scanf("%i", &idade);

    if(idade <= iJ)
    {
        printf("\nA idade informada e de uma pessoa jovem.\n");
    }
    else
    {
        if(idade >= iI)
        {
            printf("A idade informada e de uma pessoa idosa.\n");
        }
        else
        {
            if((idade > iJ)&&(idade < iI))
            {
                printf("A idade informada e de uma pessoa adulta.\n");
            }
        }
    }
    return 0;
}
