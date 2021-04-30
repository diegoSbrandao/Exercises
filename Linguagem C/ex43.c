#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex43

#ifdef ex43
/*
Reescreva o exercicio anterior utilizando operadores de atribuição composta.
*/

//declaração
int soma(int x, int y);
int subt(int x, int y);
int multi(int x, int y);
float divis(int x, int y);

main(){

    setlocale(LC_ALL, "Portuguese");

    char opcao = 's';

    while(opcao == 's' || opcao == 'S') {

        int num1, num2;
        printf("Digite um numero: ");
        scanf("%d",&num1);
        printf("\nDigite outro numero: ");
        scanf("%d",&num2);

        printf("\nSoma: %d\nSubtração: %d\nMultiplicação: %d\nDivisao: %.2f", soma(num1,num2), subt(num1,num2), multi(num1, num2), divis(num1,num2));
        printf("\n\nTecle 's' se deseja continuar\n\n");
        opcao = getch();

    }
}

//Funções
int soma(int x, int y)
{
    return x += y;
}

int subt(int x, int y)
{
    return x -= y;
}

int multi(int x, int y)
{
    return x *= y;
}

float divis(int x, int y)
{
    return (float) x / (float) y;
}

#endif ex43