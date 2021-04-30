#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex49

#ifdef ex49
/*
Receba o preço de um produto e calcular novo preço com desconto de 9%. 
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    double  x,aum;

    printf("Digite o valor do produto R$: \n");
    scanf("%lf", &x);

    aum=x - (x*0.09);

    printf("O valor do produto com desconto de 9 porcento fica R$: %.2lf\n", aum); //Acrescentei um arredondamento de 2 casas decimais.

    system("pause"); // pausa o programa
}

#endif ex49