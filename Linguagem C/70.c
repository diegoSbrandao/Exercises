#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
/* 5)	Receba K números. A variável Num armazena cada  número digitado considerando essa quantidade k.
Exiba a quantidade de números pares negativos e quantas vezes o número zero foi digitado.
Obs1: K representa a quantidade de números digitados pelo usuário.
      Obs2: A variável Num representa cada número digitado pelo usuário.
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  k,num,numImpar,numZero,n;
    k=0;
    num=0;
    numImpar=0;
    numZero=0;

    printf("Qual a quantidade de números que deseja digitar: \n");
    scanf("%d", &n);

    while(num<n)
    {
        num=num + 1;

        printf("Digite um número: \n");
        scanf("%d", &k);


        if (k%2==0 && k < 0)
        {
            numImpar= numImpar +1;
        }

        else if(k==0)
        {
            numZero= numZero + 1;
        }

    }

    printf("A quantidade de números pares negativos digitados foi %d e a quantidade de vezes que zero foi digitado foi %d", numImpar,numZero);

}

#endif 



