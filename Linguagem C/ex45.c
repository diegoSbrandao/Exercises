#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex45

#ifdef ex45
/*
Escreva um programa para determinar a idade de uma pessoa, em anos, meses e
    dias, recebendo via teclado a data (dia, mes e ano) do seu nascimento e a
    data (dia, mes e ano) atual.
*/

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int hdia, ndia;
    int hmes, nmes;
    int hano, nano;
    int dia, mes, ano;
    int diferenca;

    hdia = 0;  // dia de hoje
    ndia = 0;  // dia de nascimento
    hmes = 0;  // mes de hoje
    nmes = 0;  // mes de nascimento
    hano = 0;  // ano de hoje
    nano = 0;  // ano de nascimento
    char opcao = 's';
    while(opcao == 's' || opcao == 'S') {

    printf("%s","Calculadora de Tempo de Vida \n");
    printf("%s","Por favor informe a data de ""hoje?\n");
    printf("%s","[dd mm aaaa]: ");
    scanf(" %d%d%d", &hdia, &hmes, &hano);
    printf("              %2d/%2d/%3d\n\n", hdia, hmes, hano);

    printf("%s","Por favor, informe a data de seu ""nascimento?\n");
    printf("%s","[dd mm aaaa]: ");
    scanf(" %d%d%d", &ndia, &nmes, &nano);
    printf("              %2d/%2d/%3d\n\n", ndia, nmes, nano);


    diferenca =   365*hano + 30*hmes + hdia
                  - 365*nano - 30*nmes - ndia;

    ano = diferenca/365;
    diferenca = diferenca%365;

    mes = diferenca/30;
    diferenca = diferenca%30;

    dia = diferenca;

    printf("%s %d %s %d %s %d %s",
           "Você possui de vida:", ano, "ano(s)", mes, "mes(es)", dia, "dia(s).\n");

    printf("\nTecle 's' se deseja continuar\n\n");
    opcao = getch();

    }
}

#endif ex45