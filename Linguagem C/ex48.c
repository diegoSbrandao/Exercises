#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex48

#ifdef ex48
/* 
Leia dois valores numéricos e exibe a diferença do maior pelo menor. Se os números forem iguais informe ao usuário. 

*/

main()
{
    setlocale(LC_ALL, "Portuguese");

    int  x,y,soma;

    printf("Digite dois números: \n");
    scanf("%d" "%d", &x, &y);

    if (x==y)
    {
        printf("Os números digitados foram %d e %d são números iguais", x,y);
    }
    else if (x>y)
    {
        soma = x-y;
        printf("A diferença entre o número digitado %d e %d é %d\n", x,y,soma);
    }
    else
    {
        soma = y-x;
        printf("A diferença entre o número digitado %d e %d é %d\n", x,y,soma);
    }

}

#endif ex48