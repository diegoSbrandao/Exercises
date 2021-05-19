#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1


#ifdef ex1
/* 2)	Gere e exiba cada uma das sequências abaixo com uma quantidade k de termos determinados pelo usuário.
a)	2/5, 4/10, 6/15, 8/20, 10/25, 12/30,...
b)	4/8, 1, 36/24, 2, 100/40, 144/48,...

*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  x,y,z,y1,z1,aux,cont;
    y = 2;
    z = 5;
    y1 =4;
    z1 =8;
    aux=3;
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

    while(cont < x)
    {
        cont = cont + 1;

        printf("%d/%d, " " ",y,z);

        y = y + 2;
        z = z + 5;
    }

    cont=0;
    printf("\n");

    while(cont < x)
    {
        cont = cont + 1;

        if(y1%z1!=0)
        {

            printf("%d/%d, " " ",y1,z1);
        }
        else
        {
            printf("%d, " " ",y1/z1);
        }
        y1 = y1 + (4*aux);
        aux=aux+2;
        z1 = z1 + 8;
    }

}

#endif 



