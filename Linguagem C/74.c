#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
/*1)	Calcule e mostre a média dos K primeiros pares e múltiplos de cinco.
OBS: K representa a quantidade de números pares solicitados via teclado pelo usuário.
Os números pares deverão ser gerados pelo programador.
Utilize o laço while para a entrada da quantidade K e um laço for para o cálculo da média.
		2, 4, 6, 8, 10, ..
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  k,num,numMulti,numZero,n,m;
    k=0;
    num=0;
    numMulti=0;
    numZero=0;
    m=2;

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

        k= m * num; // m, simboliza o multiplicador = 2

        if (k%5==0)
        {
            numMulti= numMulti +1;
        }

    }

    printf("\nQuantidade de números múltiplos de cinco e positivos foi de %d", numMulti);

}

#endif 


