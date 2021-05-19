#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1

#ifdef ex1
/* 3)	Receba a quantidade de idades de K indivíduos.
K representa essa quantidade e deve ser digitada pelo usuário.
A variável Idade armazena cada uma das K idades digitadas.
Calcule e mostre a somatória dessas idades.
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  k,num,n,soma;
    k=0;
    num=0;
    soma=0;

    do
    {
        printf("Qual a quantidade de números que deseja digitar: \n");
        scanf("%d", &n);

        if(n<=0)
        {
            printf("\nDigite apenas números acima de zero\n");
        }

    }
    while(n<=0);


    while(num<n)
    {

        num=num + 1;

        printf("Digite uma idade: \n");
        scanf("%d", &k);

        soma = soma + k;
    }

    printf("A somatória das idades é igual a %d", soma);

}

#endif 


