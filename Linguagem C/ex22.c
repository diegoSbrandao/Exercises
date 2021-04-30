#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex22


#ifdef ex22

/*
Escreva um programa para adivinhar um numero entre 1 e 99 que o usuario
//    pensou. Digite via teclado os simbolos =, > ou < a cada pergunta. Utilize o
//    comando if-else.

*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    double A=50,B=A/2;
    char c;
    char opcao = 's';

    while(opcao == 's' || opcao == 'S')
    {
        printf("PENSE EM UM NUMERO ENTRE 1 E 99!!\n");
        printf("DIGITE > PARA MAIOR\nDIGITE < PARA MENOR\nDIGITE = PARA IGUAL\n");
        printf("\n");
        do
        {
            printf("O SEU NUMERO: >, = OU < A %.0lf\n",A);
            c = getche();
            printf("\n");

            if (c == '>')
            {
                A = A+B;
                B = B/2;
                if(A>=99.5) /*NAO DEIXA A CHEGAR EM 100*/
                {
                    A = A-1;
                }
                else if(A<=0.5) /*NAO DEIXA A CHEGAR EM 0*/
                {
                    A = A+1;
                }
            }
            else if (c == '<')
            {
                A = A-B;
                B = B/2;
                if(A>=99.5)
                {
                    A = A-1;
                }
                else if(A<=0.5)
                {
                    A = A+1;
                }
            }
            else if(c == '=')
            {
                printf("\nSEU NÚMERO = %.0lf",A);
            }
        }
        while(c != '=');
        printf("\nTecle 's' se deseja continuar\n\n");
        opcao = getch();
    }

}

#endif ex22