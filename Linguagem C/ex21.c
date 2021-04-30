#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex21


#ifdef ex21

/*
Um posto está vendendo combustíveis com a seguinte tabela de descontos:
     Álcool
         até 20 litros, desconto de 3% por litro
         acima de 20 litros, desconto de 5% por litro
     Gasolina
          até 20 litros, desconto de 4% por litro
          acima de 20 litros, desconto de 6% por litro
     Escreva um programa que leia o número de litros vendidos e o tipo de
     combustível (codificado da seguinte forma: A-álcool, G-gasolina). Calcule e
     imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da
     gasolina é R$ 4,88 e o preço do litro do álcool é R$ 3,18.

*/

int main()
{

    setlocale(LC_ALL, "Portuguese");

    float L,G=3.88,A=3.18,g,a;
    char C;

    char opcao = 's';

    while(opcao == 's' || opcao == 'S')
    {

        printf("DIGITE (G) PARA GASOLINA OU (A) PARA ALCOOL: ");
        printf("\n");

        do
        {
            printf("\nTIPO DE COMBUSTIVEL: ");
            C=getche();
            C=tolower(C); /*CONVERTE LETRA MAIUSCULA PARA MINUSCULA*/

            if((C!='g')&&(C!='a'))
            {
                printf("\nPOR FAVOR DIGITE APENAS (G) PARA GASOLINA E (A) PARA ALCOOL\n");
            }
        }
        while((C!='g')&&(C!='a'));

        if(C=='g')
        {

            do
            {
                printf("\nDIGITE A QUANTIDADE DE LITROS: ");
                scanf("%f",&L);
                if(L<=0)
                {
                    printf("DIGITE UMA QUANTIDADE DE LITROS MAIOR QUE 0!!\n");
                }
            }
            while(L<=0);

            if(L<=20)
            {
                g = L;          /*SALVA O VALOR DE LITROS*/
                G *= 1-0.04;    /*DESCONTA 4% DE CADA LITRO*/
                L = G*L;        /*MULTIPLICA O VALOR DA GASOLINA PELOS LITROS DESEJADOS*/
                if(g==1)
                {
                    printf("%.2f LITRO DE GASOLINA COM 4%% DE DESCONTO = %.2f\n\n",g,L);

                }
                else
                {
                    printf("%.2f LITROS DE GASOLINA COM 4%% DE DESCONTO = %.2f\n\n",g,L);
                }
            }
            else if(L>20)
            {
                g = L;
                G *= 1-0.06;
                L = G*L;
                printf("%.2f LITROS DE GASOLINA COM 6%% DE DESCONTO = %.2f\n\n",g,L);
            }
        }
        else if (C=='a')
        {
            do
            {
                printf("\nDIGITE A QUANTIDADE DE LITROS: ");
                scanf("%f",&L);
                if(L<=0)
                {
                    printf("DIGITE UMA QUANTIDADE DE LITROS MAIOR QUE 0!!\n\n");
                }
            }
            while(L<=0);

            if(L<=20)
            {
                a = L;
                A *= 1-0.03;
                L = A*L;
                if(a==1)
                {
                    printf("%.2f LITRO DE ALCOOL COM 4%% DE DESCONTO = %.2f\n\n",a,L);
                }
                else
                {
                    printf("%.2f LITROS DE ALCOOL COM 4%% DE DESCONTO = %.2f\n\n",a,L);
                }
            }
            else if(L>20)
            {
                a = L;
                A *= 1-0.05;
                L = A*L;
                printf("%.2f LITROS DE ALCOOL COM 5%% DE DESCONTO = %.2f\n\n",a,L);
            }

        }
        printf("\nTecle 's' se deseja continuar\n\n");
        opcao = getch();
    }
}


#endif ex21