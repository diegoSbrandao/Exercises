#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1


#ifdef ex1
/* 4)	Receba K números quaisquer, K representa a quantidade de termos solicitada pelo usuário e
cada termo pode ser representado pela variável N. Exiba o maior número digitado. Utilize o laço do while para a entrada
da quantidade K e um laço for para exibir o maior número.
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  k,num,numMulti,numZero,n,maior;
    k=0;
    num=0;
    numMulti=0;
    numZero=0;
    maior=0;

    do
    {

        printf("Qual a quantidade de números que deseja digitar: \n");
        scanf("%d", &n);

        if (n<=0)
        {
            printf("Digite um número acima de 0 (zero).");
        }

    }
    while(n<=0);  // laço para aceitar apenas números acima de zero.


    for(num=1; num <= n; num++)
    {

        printf("Digite um número: ");
        scanf("%d",&k);

        if(num==1)
        {
            maior=k;
        }

        if (k > maior)
        {
            maior= k;
        }

    }

    printf("\nO maior número digitado foi %d", maior);

}


#endif ex4


