#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
/* 5-)  Receba dois números. Calcule e mostre:
    a)	A soma dos números pares desse intervalo, incluindo os números digitados;
    b)	A multiplicação dos números ímpares desse intervalo de números incluindo os números digitados.
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  x,x1,y,par,impar;
    cont=0;
    par=0;
    impar=1;

    printf("Digite dois números: \n");
    scanf("%d %d", &x, &y);

    x1=x;

    while(x1<=y)
    {


        if(x1%2==0)
        {
            par=par + x1;

        }
        else
        {

            impar=impar * x1;

        }

        x1=x1+1; //Contador


    }

    printf("\nA soma dos números pares do intervalo de %d com %d é: %d\n",x,y,par);
    printf("\nA multiplicação dos números ímpares do intervalo de %d com %d é: %d",x,y,impar);

}

#endif 


