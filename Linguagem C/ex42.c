#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex42

#ifdef ex42
/*
Escreva um programa que receba via teclado 2 numeros inteiros e
    imprima-os no video com o resultado das 4 operacoes aritmeticas.
*/
int num1,num2;

main()
{

    setlocale(LC_ALL, "Portuguese");

    char opcao = 's';

    while(opcao == 's' || opcao == 'S')
    {


        int num1, num2;
        printf("Digite um numero: ");
        scanf("%d",&num1);
        printf("\nDigite outro numero: ");
        scanf("%d",&num2);

        printf("\nA soma: %d\nA subtracao: %d\nA multiplicação: %d\nA divisão: %.2f",num1+num2,num1-num2,num1*num2,(float) num1/num2);
        printf("\nTecle 's' se deseja continuar\n\n");
        opcao = getch();

    }
}

#endif ex42