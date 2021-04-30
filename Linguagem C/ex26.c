#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define ex26


#ifdef ex26

/*
Faça um programa receba dois números inteiros e execute as seguintes funções:
    - Verificar se o número digitado é positivo ou negativo. Sendo que o valor de
      retorno será 1 se positivo, 0 se negativo ou -1 se for igual a 0.
    - Se os 2 números são positivos, retorne a soma dos N números existentes entre
      eles.
    - Se os 2 números são negativos, retorne a multiplicação dos N números existente
     entre eles.
*/
int num1, num2, retorno, soma, mult;

main()
{

    setlocale(LC_ALL, "Portuguese");

    char opcao = 's';

    while(opcao == 's' || opcao == 'S')
    {
        verificaNumero();

        printf("\nTecle 's' se deseja continuar\n\n");
        opcao = getch();
    }

}

void verificaNumero()
{
    // Parte 01
    printf("** R E T O R N O **");
    printf("\n*  Positivo =  1  *\n*  Negativo =  0  *\n*  Zero     = -1  *\n");
    printf("*******************\n\n");

    printf("Digite o 1º número: ");
    scanf("%d", &num1);

    if (num1 > 0)
    {
        retorno = 1;
    }
    if (num1 == 0)
    {
        retorno = -1;
    }
    if (num1 < 0)
    {
        retorno = 0;
    }

    printf("[1º]Retorno = %d\n\n", retorno);
    // Retorno Positivo = 1, Negativo = 0, Zero = -1

    printf("Digite o 2º número: ");
    scanf("%d", &num2);

    if (num2 > 0)
    {
        retorno = 1;
    }
    else if (num2 == 0)
    {
        retorno = -1;
    }
    else
    {
        retorno = 0;
    }
    printf("[2º]Retorno = %d\n\n", retorno);
    // Retorno Positivo = 1, Negativo = 0, Zero = -1

    /************************************************/

    // Parte 02

    // Se os dois forem positivos = SOMA
    if (num1 >= 0 && num2 >= 0)
    {

        if (num1 < num2)
        {
            while(num1 < num2-1) // 1 < 4
            {
                num1 += 1; // 1 + 1 = 2
                soma = soma+num1; // soma = 0 + 2

            }
            printf("Somatório = %d\n", soma);
        }

        if (num2 < num1)
        {
            while(num2 < num1-1) // 1 < 4
            {
                num2 += 1; // 1 + 1 = 2
                soma = soma+num2; // soma = 0 + 2

            }
            printf("Somatório = %d\n", soma);
        }

        if (num1 == num2)
        {
            soma = 0;
            printf("Somatório = %d\nObs: Números iguais\n", soma);
        }


    }

    // Se os dois forem negativos = MULTIPLICA
    if (num1 < 0 && num2 < 0)
    {
        if (num1 < num2)
        {
            mult = 1;
            while(num1 < num2-1) // -4 < -1
            {
                num1 += 1; // -4 + 1 = -3 / -2
                mult = mult * num1;

            }
            printf("2. Multiplicação = %d\n", mult);
        }

        if (num2 < num1)
        {
            mult = 1;
            while(num2 < num1-1)
            {
                num2 += 1;
                mult = mult * num2;

            }
            printf("2.1 Multiplicação = %d\n", mult);
        }

    }
}

#endif ex26