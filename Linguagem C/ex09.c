#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex9

#ifdef ex9

/*

Problema "tabuada"

Ler um número inteiro N, daí mostrar na tela a tabuada de N para 1 a 10, conforme exemplo.

Exemplo:
Deseja a tabuada para qual valor? 4
4 x 1 = 4
4 x 2 = 8
4 x 3 = 12
4 x 4 = 16
4 x 5 = 20
4 x 6 = 24
4 x 7 = 28
4 x 8 = 32
4 x 9 = 36
4 x 10 = 40

*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int i,n;

    printf("Deseja a tabuada para qual valor ? \n");
    scanf("%d",&n);


    for(i=1; i <= 10; i++)
    {

        printf("%d x %d = %d \n",n,i,n*i);

    }

}

#endif ex9
