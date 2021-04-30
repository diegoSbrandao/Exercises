#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex28


#ifdef ex28

/* 
Escreva um programa que receba na funcao main() 2 valores inteiro. Escreva
    uma funcao para cada operacoes aritmeticas e passe como parametro os 2
    valores recebidos na funcao main(). Retorne os resultados usando o comando
   return e imprima-os no video na funcao main().
*/

//declaração
int soma(int x, int y);
int subt(int x, int y);
int multi(int x, int y);
float divis(int x, int y);

main(){

    setlocale(LC_ALL, "Portuguese");

    char opcao = 's';

    while(opcao == 's' || opcao == 'S')
    {


        int num1, num2;
        printf("Digite um numero: ");
        scanf("%d",&num1);
        printf("\nDigite outro numero: ");
        scanf("%d",&num2);

        printf("\nSoma: %d\nSubtração: %d\nMultiplicação: %d\nDivisao: %.2f", soma(num1,num2), subt(num1,num2), multi(num1, num2), divis(num1,num2));
        printf("\nTecle 's' se deseja continuar\n\n");
        opcao = getch();

    }
}

//Funções
int soma(int x, int y)
{
    return x + y;
}

int subt(int x, int y)
{
    return x - y;
}

int multi(int x, int y)
{
    return x * y;
}

float divis(int x, int y)
{
    return (float) x / (float) y;


}



#endif ex28