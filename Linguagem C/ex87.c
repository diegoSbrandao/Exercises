#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex01

#ifdef ex01
/*
1 - Escreva um programa que tem uma estrutura da dados com os membros abaixo.
    Receba dados via teclado e imprima estes conteudos no video no seguinte
    formato.
             char, int, long, float, double
             unsigned char, unsigned int, unsigned long,
            10        20        30        40        50        60        70
    1234567890123456789012345678901234567890123456789012345678901234567890
        char      int       long                float               double
              unsigned char       unsigned int        unsigned long
*/
int main()
{

    setlocale(LC_ALL, "Portuguese");
    char opcao = 's';



    struct reg
    {
        char c;
        int i;
        long l;
        float f;
        double d;
        unsigned char uc;
        unsigned int ui;
        unsigned long ul;
    };
    struct reg regua;
    while(opcao == 's' || opcao == 'S')
    {
    printf("Digite um valor para CHAR: ");
    scanf("%c",&regua.c);
    printf("\nDigite um valor para INT: ");
    scanf("%d",&regua.i);
    printf("\nDigite um valor para LONG: ");
    scanf("%ld",&regua.l);
    printf("\nDigite um valor para FLOAT: ");
    scanf("%f",&regua.f);
    printf("\nDigite um valor para DOUBLE: ");
    scanf("%lf",&regua.d);
    printf("\nDigite um valor para UNSIGNED CHAR: ");
    scanf("%u",&regua.uc);
    printf("\nDigite um valor para UNSIGNED INT: ");
    scanf("%u",&regua.ui);
    printf("\nDigite um valor para UNSIGNED LONG: ");
    scanf("%ul",&regua.ul);
    printf("\n        10        20        30        40        50        60        70");
    printf("\n1234567890123456789012345678901234567890123456789012345678901234567890");
    printf("\n    %c         %d         %ld                   %.2f                %.2f",regua.c,regua.i,regua.l,regua.f,regua.d);
    printf("\n          %u                   %u                   %u",regua.uc,regua.ui,regua.ul);


    printf("\n\nTecle 's' se deseja continuar\n");
    opcao = getch();
    getchar();
    }

}

#endif 