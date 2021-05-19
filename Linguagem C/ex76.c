#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex1


#ifdef ex1
/* 3)	Receba K números inteiros quaisquer, K representa a quantidade de termos solicitada pelo usuário
e cada termo pode ser representado pela variável N.
Exiba a quantidade de números positivos recebidos e a média dos números ímpares.
Utilize o laço do while para a entrada da quantidade K e um laço while para efetuar os cálculos solicitados.
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    int  k,cont,n,numPositivo;
    float numImpar,soma;
    k=0;
    cont=0;
    numPositivo=0;
    numImpar=0;
    soma=0;

    do
    {
        printf("Qual a quantidade de termos que deseja digitar: \n");
        scanf("%d", &n);
    }
    while(n<=0);

    while(cont<n)
    {

        printf("Digite um número: \n"); //Está ocorrendo um bug do sistema ao digitar -10.
        scanf("%d", &k);


        if(k>=0)
        {
            numPositivo=numPositivo + 1;
        }
        if (k%2!=0)
        {
            numImpar = numImpar + 1;
            soma = soma + k;
        }
        cont=cont + 1;

    }
    if(numPositivo==0 && numImpar==0)
    {
        printf("\nNão foram digitados números positivos nem números ímpares");
    }
    else if (numPositivo==0)
    {
        printf("\nNão foram digitados números positivos e a média dos números ímpares é %.2f",soma/numImpar);
    }
    else if(numImpar==0)
    {
        printf("\nQuantidade de números positivos é %d, não foram digitados números ímpares",numPositivo);
    }
    else
    {
        printf("\nQuantidade de números positivos é %d e a média dos números ímpares é %.2f",numPositivo, soma/numImpar);
    }

}

#endif 


