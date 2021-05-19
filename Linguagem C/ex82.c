#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
/* 9)	Receba a quantidade K de números quaisquer. K representa essa quantidade e deve ser digitada pelo usuário.
A variável num armazena cada uma dos K números digitados.

Calcule e mostre a quantidade de números positivos divisíveis por 3,
a média dos números negativos.
Exiba também o maior número encontrado e quantas vezes ele apareceu.

Utilize o laço do while para a entrada da quantidade K e um laço for para efetuar os cálculos e as comparações solicitadas.

*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int i,k,num,quant,maior,quantM;
    float numNeg,quant1;
    num=0;
    quant=0;
    numNeg=0;
    quant1=0;
    maior=0;
    quantM=0;

    do
    {
        printf("Digite a quantidade que deseja ? ");
        scanf("%d",&k);

        if(k<=0)
        {
            printf("\nDigite qualquer número, menos o número 0 (zero).\n");
        }

    }
    while(k<=0);

    for(i=0; i < k; i++)
    {

        printf("Digite um número: ");
        scanf("%d",&num);

        if(num%3==0 && num>0)
        {
            quant++;
        }

        else if(num<0)
        {
            numNeg+=num;
            quant1++;
        }


        if(num > maior || num==maior)
        {

            if(num!=maior)
            {
                maior=num;
                quantM=1;
            }
            else
            {
                maior=num;
                quantM++;
            }
        }

    }

    printf("O maior número encontrado foi %d e a quantidade de vezes que apareceu foi %d",maior,quantM);

    if(quant > 0 && quant1 > 0)
    {
        printf("\nA quantidade de números positivos e divisíveis por três é igual: %d\n",quant);
        printf("A média dos números negativos é igual: %.2f\n",numNeg/quant1);
    }

    else if(quant > 0 && quant1 ==0)
    {
        printf("\nA quantidade de números positivos e divisíveis por três é igual: %d\n",quant);
        printf("A média dos números negativos é igual a zero.\n");
    }

    else if(quant == 0 && quant1 > 0)
    {
        printf("\nA quantidade de números positivos e divisíveis por três é igual a zero.\n");
        printf("A média dos números negativos é igual: %.2f\n",numNeg/quant1);
    }

    else
    {
        printf("\nA quantidade de números positivos e divisíveis por três é igual a zero.\n");
        printf("A média dos números negativos é igual a zero.\n");
    }
}


#endif 

