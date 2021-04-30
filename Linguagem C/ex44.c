#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex44

#ifdef ex44
/*
Escreva um programa que receba via teclado 2 numeros inteiros e execute
    as operacoes logicas bit a bit AND, OU, OU EXCLUSIVO e imprima-os no
    video no formato decimal e hexadecimal.
*/

main()
{

    setlocale(LC_ALL, "Portuguese");

    char opcao = 's';
    while(opcao == 's' || opcao == 'S')
    {
        int num1,num2;

        printf("Digite um número: ");
        scanf("%d",&num1);
        printf("\nDigite outro número: ");
        scanf("%d",&num2);

        printf("\nAND\nDecimal: %d\nHexadecimal: %x",num1 & num2,num1 & num2);
        printf("\n\nOU\nDecimal: %d\nHexadecimal: %x",num1 | num2,num1 | num2);
        printf("\n\nOU EXCLUSIVO\nDecimal: %d\nHexadecimal: %x", num1 ^ num2,num1 ^ num2);

        printf("\nTecle 's' se deseja continuar\n\n");
        opcao = getch();

    }
}

#endif ex44