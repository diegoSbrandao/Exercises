#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
main()
{

    /*
        4.	Faça um algoritmo para receber um número qualquer e informar na tela se é par ou ímpar.
    */

    setlocale(LC_ALL, "Portuguese");

    int  x;

    printf("Digite um número: \n");
    scanf("%d",&x);

    if (x%2==0)
    {
        printf("O número digitado, %d é par.\n",x);

    }
    else
    {
        printf("O número digitado, %ld é ímpar.\n",x);

    }
}
#endif 


