#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define ex01

#ifdef ex01
void recepcao();
void exibicao(char *pc, int *pi, long int *pl, unsigned *pu, float *pf, double *pd, unsigned long *plu, unsigned char *puc);



main()
{

    /*
    1 - Escreva um programa que tem uma estrutura da dados com os membros abaixo.
    A estrutura é uma variavel local na função main().Receba via teclado o
    conteudo de cada um dos membros numa função e imprima-os no video no
    seguinte formato(também numa função).

            10        20        30        40        50        60        70
    1234567890123456789012345678901234567890123456789012345678901234567890
        char      int       long                float               double
              unsigned char       unsigned int        unsigned long

    */

    setlocale(LC_ALL, "Portuguese");
    char opcao = 's';
    while(opcao == 's' || opcao == 'S')
    {
        recepcao();





        printf("\nTecle 's' se deseja continuar\n\n");
        opcao = getch();
        getchar();


    }

}

void recepcao()
{
    char c;
    int i;
    long l;
    unsigned u;
    float f;
    double d;
    unsigned long lu;
    unsigned char uc;

    puts("Char: ");
    c = getchar();

    puts("\nInt: ");
    scanf("%d",&i);

    puts("\nLong: ");
    scanf("%ld",&l);

    puts("\nUnsigned: ");
    scanf("%u",&u);

    puts("\nFloat: ");
    scanf("%f",&f);

    puts("\nDouble: ");
    scanf("%lf",&d);

    puts("\nUnsigned Long: ");
    scanf("%u",&lu);

    puts("\nUnsigned Char: ");
    scanf("%u",&uc);

    exibicao(&c, &i, &l, &u, &f, &d, &lu, &uc);
}


void exibicao(char *pc, int *pi, long int *pl, unsigned *pu, float *pf, double *pd, unsigned long *plu, unsigned char *puc)
{
    printf("        10        20        30        40        50        60\n");
    printf("123456789012345678901234567890123456789012345678901234567890\n");
    printf("    %d                   %ld                   %u        \n",*pi,*pl,*pu);
    printf("              %.2f               %.2f                 %c\n",*pf,*pd,*pc);
    printf("         %u                  %u\n",*plu,*puc);

}

#endif

