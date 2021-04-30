#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex23


#ifdef ex23

/*
Reescreva o programa do execicio anterior agora utilizando o comando switch.
//    Conte o n. de tentativas e imprima o resultado no video.
*/

main()
{

    setlocale(LC_ALL, "Portuguese");
    double A=50,B=A/2,C=0;
    char opc;
    char opcao = 's';

    while(opcao == 's' || opcao == 'S')
    {

        printf("PENSE EM UM NUMERO ENTRE 1 E 99!!\n");
        printf("DIGITE > PARA MAIOR\nDIGITE < PARA MENOR\nDIGITE = PARA IGUAL\n");
        printf("\n");
        do
        {
            printf("O SEU NUMERO: >, = OU < A %.0lf\n",A);
            opc = getche();
            printf("\n");
            switch(opc)
            {
            case '>':
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

                if(C<=6) /*O PROGRAMA SEMPRE ACERTARA EM ATE 7 TENTATIVAS*/
                {
                    C++;
                }
            }
            break;
            case '<':
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
                if(C<=6)
                {
                    C++;
                }
            }
            break;
            case '=':
            {
                if(C<=6)
                {
                    C++;
                }
                printf("O SEU NUMERO = %.0lf\nACERTEI O SEU NUMERO EM %.0lf TENTATIVAS",A,C);
            }
            break;
            default:
                printf("OPCAO INVALIDA!!\n");
            }
        }
        while(opc!='=');
        printf("\nTecle 's' se deseja continuar\n\n");
        opcao = getch();
    }
}

#endif ex23