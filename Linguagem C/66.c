#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
/*1)	Gere e exiba cada uma das seqüências abaixo com uma quantidade k de termos determinados pelo usuário.
a)	3, 6, 9, 12, 15,...
b)	1/4, 1/8, 1/12, 1/16, 1/20,...
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  x,y,z,cont,resultadoA,resultadoB;
    y = 3;
    z = 4;
    cont=0;

    do
    {

        printf("Digite a quantidade de termos desejada: \n");
        scanf("%d", &x);

        if(x<=0)
        {
            printf("\nDigite um número acima de 0 (zero).\n");
        }

    }
    while(x<=0);

    printf("\n");
    while(cont < x)
    {
        cont = cont + 1;

        resultadoA = y*cont;

        printf("%d, " " ",resultadoA);
    }

    cont=0;
    printf("\n");
    while(cont < x)
    {
        cont = cont + 1;

        resultadoB = z*cont;

        printf("1/%d, " " ",resultadoB);
    }


}

#endif 


