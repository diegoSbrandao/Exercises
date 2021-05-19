#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
/*6)	Receba K números positivos. Cada número recebido deverá ser armazenado na variável Num
e a variável K representa a quantidade de números solicitada pelo usuário.
Exiba a quantidade de múltiplos 7.
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  k,num,numMulti,numZero,n;
    k=0;
    num=0;
    numMulti=0;

    do
    {
        printf("Qual a quantidade de números que deseja digitar: \n");
        scanf("%d", &n);

        if(n<=0)
        {
            printf("\nDigite apenas números positivos.\n");
        }
    }
    while(n<=0);

    while(num<n)
    {
        num=num + 1;

        printf("Digite um número: \n");
        scanf("%d", &k);


        if (k%7==0 && k!=0)
        {
            numMulti= numMulti +1;
        }

    }

    printf("\nQuantidade de números múltiplos de sete foi de %d número(s)", numMulti);

}
#endif 



