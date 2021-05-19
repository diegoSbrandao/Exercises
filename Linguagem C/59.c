#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1


#ifdef ex1
main()
{
    /*
        3.	Receba três números que garantam a existência de uma equação do segundo grau. Se existirem raízes reais exiba-as. Caso não existam raízes informe ao usuário.

        Observações:

        a.	Condição de existência de uma equação do segundo grau: o coeficiente que acompanha o x2 deverá ser um número diferente de zero.
        b.	Delta maior que zero: a equação possui duas raízes reais e distintas.
        c.	Delta igual à zero: a equação possui duas raízes iguais.
        d.	Delta menor que zero: a equação não apresenta raízes reais.

    */

    setlocale(LC_ALL, "Portuguese");

    double  a,b,c,delta,x1,x2,divi;

    do
    {
        printf("Digite três números: \n");
        scanf("%lf" "%lf" "%lf", &a, &b, &c);

        if(a==0)
        {
            printf("O primeiro dígito não pode ser 0, favor digite um número diferente de 0.\n\n");
        }

    }
    while(a==0);

    delta = pow(b,2) - 4 * a * c; //pow potenciação

    divi = 2 * a;

    if (delta >= 0)
    {

        x1 = (-b + sqrt(delta)) / divi; //sqrt = raiz quadrada
        x2 = (-b - sqrt(delta)) / divi;

        printf("X1= %.4lf\n",x1);
        printf("X2= %.4lf\n",x2);
    }

    else if (delta == 0)
    {

        x1 = (-b + sqrt(delta)) / 2*a; //sqrt = raiz quadrada
        x2 = (-b - sqrt(delta)) / 2*a;

        printf("X1= %.4lf\n",x1);
        printf("X2= %.4lf\n",x2);
    }

    else
    {
        printf("Esta equação não possui raízes reais.");
    }
}
#endif 


