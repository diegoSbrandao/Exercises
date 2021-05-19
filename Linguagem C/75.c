#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
/*2)	Leia um número inteiro representado pela variável N até que N seja igual a zero.
Exiba uma mensagem informando se o número é par ou ímpar.
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  n,num;

    do
    {

        printf("Digite um número\n");
        scanf("%d",&n);

        if(n!=0)
        {
            num=n;
        }

    }
    while(n!=0);

    if(num%2==0)
    {
        printf("O último número digitado %d é par",num);
    }
    else
    {
        printf("O último número digitado %d é ímpar",num);
    }
}

#endif 

