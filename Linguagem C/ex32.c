#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex32

#ifdef ex32

/*
Escreva um programa para receber via teclado em vetores 3 int, 3 long,
    3 unsigned, 3 float e 3 double e imprima-os no video no seguinte formato:

            10        20        30        40        50
    12345678901234567890123456789012345678901234567890
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double
      int                 long                unsigned
                float               double
*/
int inteiro[3];
float flutuante[3];
long longo[3];
double dobro[3];
unsigned semsinal[3];
int main()
{

    setlocale(LC_ALL, "Portuguese");
    char opcao = 's';
    while(opcao == 's' || opcao == 'S')
    {
        int i;

        for(i=0; i<3; i++)
        {
            printf("\nDigite um valor para INT: ");
            scanf("%d",&inteiro[i]);
            printf("\nDigite um valor para LONG: ");
            scanf("%ld",&longo[i]);
            printf("\nDigite um valor para UNSIGNED: ");
            scanf("%u",&semsinal[i]);
            printf("\nDigite um valor para FLOAT: ");
            scanf("%f",&flutuante[i]);
            printf("\nDigite um valor para DOUBLE: ");
            scanf("%lf",&dobro[i]);
        }
        printf("\n        10        20        30        40        50\n");
        printf("12345678901234567890123456789012345678901234567890\n");
        for(i=0; i<3; i++)
        {
            printf("  %d                  %d                  %d\n",inteiro[i],longo[i],semsinal[i]);
            printf("            %.2f               %.2lf\n",flutuante[i],dobro[i]);
        }

        printf("\nTecle 's' se deseja continuar\n\n");
        opcao = getch();
    }
}

#endif ex32