#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define ex01

#ifdef ex01

/*

Declarações condicionais em C - HackerRank

Tarefa

Dado um número inteiro positivo denotando n, faça o seguinte:

Se n > 1 e n < 9, imprima a palavra inglesa minúscula correspondente ao número (por exemplo, onepara, twopara, etc.).
Se n > 9, imprimir Greater than 9.

Formato de entrada

A primeira linha contém um único inteiro,n.

*/

static const char *strings[] = {"one","two","three","four","five",
                                "six","seven","eight","nine"};
int main()
{
    int n = 0;
    if (scanf("%d",&n) < 1)
        return 1;
    
    if (n >= 1 && n <= 9)
        printf("%s",strings[n-1]);
    else
        printf("Greater than 9");
    
    return 0;
}

#endif

