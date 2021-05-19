#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1

/*
4 - Escreva um programa que receba via teclado usando ponteiros um char,
    int, long, unsigned,float, double, unsigned long e unsigned char,
    e imprima-os no video utilizando ponteiros e o operador de conteudo *
    no seguinte formato:
            10        20        30        40        50        60
    123456789012345678901234567890123456789012345678901234567890
        int                 long                unsigned
                  float               double              char
             unsigned long       unsigned char
*/

main()
{

    setlocale(LC_ALL, "Portuguese");
    char opcao = 's';
    char *pc,c;
    int *pi,i;
    long *pl,l;
    unsigned *pu,u;
    float *pf,f;
    double *pd,d;
    unsigned long *pul,ul;
    unsigned char *puc,uc;

    while(opcao == 's' || opcao == 'S')
    {

        printf("Char: ");
        c = getchar();

        printf("\nInt: ");
        scanf("%d",&i);

        printf("\nLong: ");
        scanf("%ld",&l);

        printf("\nUnsigned: ");
        scanf("%u",&u);

        printf("\nFloat: ");
        scanf("%f",&f);

        printf("\nDouble: ");
        scanf("%lf",&d);

        printf("\nUnsigned Long: ");
        scanf("%ul",&ul);

        printf("\nUnsigned Char: ");
        scanf("%u",&uc);

        pc = &c;
        pi = &i;
        pl = &l;
        pu = &u;
        pf = &f;
        pd = &d;
        pul = &ul;
        puc = &uc;

        printf("        10        20        30        40        50        60\n");
        printf("123456789012345678901234567890123456789012345678901234567890\n");
        printf("    %d                   %ld                   %u        \n",*pi,*pl,*pu);
        printf("              %.2f               %.2f                 %c\n",*pf,*pd,*pc);
        printf("         %ul                  %u\n",*pul,*puc);

        printf("\nTecle 's' se deseja continuar\n\n");
        opcao = getch();

    }

}
#endif