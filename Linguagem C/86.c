#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
/* 13)	Solicite ao usuário a quantidade de números de termos que ele deseja.
Exiba a somatória dos valores da série abaixo referente a quantidade determinada pelo usuário:
Utilize os laços que desejar.
2,  7, 3, 4,  21, 12 , 8,  63,  48,  16,  189,  192,  32,   567,  768,  64, ...

*/

int main()
{

    setlocale(LC_ALL, "Portuguese");
    int i,x, prim=2, posPrim=1, seg=7, posSeg=2, terc=3, posTerc=3,soma,soma1,soma2,total;
    soma=0;
    soma1=0;
    soma2=0;
    total=0;

    do
    {

        printf("Digite a quantidade de termos desejada: ");
        scanf("%d",&x);

        if(x<=0)
        {
            printf("\nDigite um número maior ou igual a 0 (zero)\n");
        }

    }
    while(x<=0);

    for (i=1; i<=x; i++)
    {
        if (posPrim == i)
        {
            soma+=prim;
            printf("%d ", prim);
            prim = prim * 2;
            posPrim = posPrim + 3;
        }
        else if (posSeg == i)
        {
            soma1+=seg;
            printf("%d ", seg);
            seg = seg * 3;
            posSeg = posSeg + 3;
        }
        else
        {
            soma2+=terc;
            printf("%d ", terc);
            terc = terc * 4;
            posTerc = posTerc + 3;
        }
    }

    printf("\nA Somátoria dos números é igual a: %d\n", total=soma+soma1+soma2);
}

#endif 
