#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h> // Biblioteca para configura��o de horas.

/*

Nome do programa: Quantos Dias.
Objetivo: Exibir a quantidade de dias em determinado per�odo.
Data Cria��o: 05/02/2022.

*/

typedef struct
{
    int dia;
    int mes;
    int ano;
}

/*

Structs, tamb�m conhecidas como Registros, definem tipos de dados que agrupam vari�veis sob um mesmo tipo de dado.

A ideia de usar uma struct � permitir que, ao armazenar os dados de uma mesma entidade, isto possa ser feito com uma �nica vari�vel. Por exemplo, se for preciso armazenar a altura, o peso e a idade de uma pessoa, pode-se criar uma struct chamada Pessoa e agrupar os dados em um �nico tipo de dado, conforme o exemplo a seguir.

Aos dados agruados em uma struct d�-se o nome de campos(fields).

typedef struct // Cria uma STRUCT para armazenar os dados de uma pessoa:

    {
    float Peso;   // define o campo Peso
    int Idade;    // define o campo Idade
    float Altura; // define o campo Altura
    }
    Pessoa; // Define o nome do novo tipo criado

Typedef permite ao programador definir um novo nome para um determinado tipo. Sua forma geral �:

typedef antigo_nome novo_nome;

Como exemplo vamos dar o nome de inteiro para o tipo int:
typedef int inteiro;

Agora podemos declarar o tipo inteiro:

O comando typedef tamb�m pode ser utilizado para dar nome a tipos complexos, como as estruturas. As estruturas criadas no exemplo da p�gina anterior poderiam ser definidas como tipos atraves do comando typedef. O exemplo ficaria:

#include <stdio.h>

    typedef struct tipo_endereco
    {
        char rua [50];
        int numero;
        char bairro [20];
        char cidade [30];
        char sigla_estado [3];
        long int CEP;
    }
    Endereco;

    typedef struct ficha_pessoal
    {
        char nome [50];
        long int telefone;
        TEndereco endereco;
    }
    TFicha;

    void main(void)
    {
    TFicha *ex;
    ...

*/

Data;
int bissexto (int ano); //fun��o guarda o numero de dias em cada mes para anos normais e bissextos

unsigned long dist_dias (Data inicio, Data fim);

/*

Modificadores de Tipos: Com exce��o de void, os outros tipos de dados primitivos podem ter modificadores.

Os modificadores alteram o tamanho do tipo de dado ou sua forma de representa��o. Sua utiliza��o faz com que seja poss�vel adequar-se melhor �s necessidades de armazenamento de dados em determinados casos. No caso desse programa foi usado opcionalmente, funciona com int sem problemas.

Veja quais s�o os modificadores na tabela abaixo:


       Palavra Chave:                      Tipo:
_____________________________________________________________________________________________

         signed	                          caracter
        unsigned	                      Inteiro
          long	                           longo
         short	                           curto


Tipos de dados e modificadores:

Palavra chave:	              Tipo:                       Tamanho:                 	Intervalo:
_____________________________________________________________________________________________

char	                      Caracter	                    1           -128 a 127
signed char	           Caractere com sinal	                1	         -128 a 127
unsigned char	       Caractere sem sinal             	    1	          0 a 255
Int	                          Inteiro                       2	      -32.768 a 32.767
signed int	             Inteiro com sinal	                2   	  -32.768 a 32.767
unsigned int             Inteiro sem sinal                  2	         0 a 65.535
short int	               Inteiro curto	                2    	  -32.768 a 32 767
signed short int	   Inteiro curto com sinal	            2	      -32.768 a 32.767
unsigned short int	   Inteiro curto sem sinal              2	         0 a 65.535
long int	               Inteiro long	                    4  -2.147.483.648 a 2.147.483.647
signed long int	       Inteiro longo com sinal              4  -2.147.483.648 a 2.147.483.647
unsigned long int	   Inteiro longo sem sinal              4	      0 a 4.294.967.295
float               Ponto flutuante com precis�o simples    4        3.4 E-38 a 3.4E+38
double	            Ponto flutuante com precis�o simples    8       1.7 E-308 a 1.7E+308
long double	      Ponto flutuante com precis�o dupla longo  16     3.4E-4932 a 1.1E+4932

*/

int dias_mes[2][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},{0, 31, 29, 31, 30,31, 30, 31, 31, 30, 31, 30, 31}
};

int main(void)

{
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("title Quantos Dias");
    system("color 03");

    Data dia1, dia2;

    printf("Por favor, digite uma data inicial no formato dd/mm/aaaa >>> ");
    scanf("%i/%i/%i", &dia1.dia, &dia1.mes, &dia1.ano);
    printf("\nInforme uma data final no formato dd/mm/aaaa >>> ");
    scanf("%i/%i/%i", &dia2.dia, &dia2.mes, &dia2.ano);
    printf("\n>>> Se passaram %lu entre as datas informadas <<< \n", dist_dias (dia1, dia2));

    return 0;
}

// Retorna 1 caso 'ano' seja bissexto, 0 caso contr�rio

int bissexto (int ano)
{
    return (ano % 4 == 0) && ((ano % 100 != 0) || (ano % 400 == 0));
}

//Retorna a distancia entre inicio e fim em dias.
//Assume que inicio nao vem depois de fim.

unsigned long dist_dias (Data inicio, Data fim)

{
    unsigned long iniciodias, fimdias;
    //guarda qtos dias tem da data ate o comeco do ano
    unsigned long def_anos = 0;
    //guarda diferenca entre anos das (datas inicio e fim medida em dias)
    register int posicao;
    int dbissexto;

    iniciodias = inicio.dia;
    dbissexto = bissexto (inicio.ano);
    for (posicao = inicio.mes - 1; posicao > 0; --posicao)
        iniciodias += dias_mes[dbissexto][posicao];

    fimdias = fim.dia;
    dbissexto = bissexto (fim.ano);
    for (posicao = fim.mes - 1; posicao > 0; --posicao)
        fimdias += dias_mes[dbissexto][posicao];

    while (inicio.ano < fim.ano)
        def_anos += 365 + bissexto(inicio.ano++);

    return def_anos - iniciodias + fimdias;
}
