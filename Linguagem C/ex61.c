#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
main()
{

    /*
        5.	Receba três números que representam os lados de um triângulo e garantam a existência de um triângulo.

        Informe ao usuário se o triângulo é isóscele, equilátero ou escaleno.

        Observações:
        a.	Garantir que cada lado é menor que a soma dos outros dois lados.
        b.	O triângulo é equilátero quando todos os lados são iguais.
        c.	O triângulo é isóscele quando apenas dois lados são iguais.
        d.	O triângulo é escaleno quando todos os lados são diferentes.

   */

    setlocale(LC_ALL, "Portuguese");

    double  x,y,z;

    do
    {
        printf("Digite três números: \n");
        scanf("%lf" "%lf" "%lf",&x,&y,&z);

        if(x>=y+z || y>=x+z || z>=x+y)
        {
            printf("Os números digitados não formam um triângulo\n");
        }

    }
    while(x>=y+z || y>=x+z || z>=x+y);

    if (x==y && x==z)
    {
        printf("O triângulo é equilátero."); //quando todos os lados são iguais.
    }
    else if (x!=y && x!=z && y!=z)
    {
        printf("O triângulo é escaleno."); //quando todos os lados são diferentes.
    }
    else
    {
        printf("O triângulo é isósceles."); //quando apenas dois lados são iguais.
    }


}
#endif 

