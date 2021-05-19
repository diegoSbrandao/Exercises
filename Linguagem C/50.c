#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define ex1

#ifdef ex1
/*

5.	Receba dois números quaisquer, onde o primeiro deve ser maior que zero e o segundo menor ou igual a zero. Calcule e mostre na tela o produto entre eles.
*/

main()
{
    setlocale(LC_ALL, "Portuguese");

    int x,y,multi;

    do
    {
        printf("Digite dois números: \n");
        scanf("%d" "%d", &x,&y);

        if (x<0)
        {
            printf("Seu primeiro número deve ser maior que 0\n");
        }
        else if (y>0)
        {
            printf("Seu segundo número deve ser menor que 0 ou 0\n");
        }

    }
    while(x<0 || y >0);

    multi = x*y;

    printf("A multiplicação dos números digitados %d e %d é igual: %d\n ",x,y,multi);
    system("pause"); // pausa o programa

}

#endif ex1



